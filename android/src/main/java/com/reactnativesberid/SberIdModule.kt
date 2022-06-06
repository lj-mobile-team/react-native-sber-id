package com.reactnativesberid

import android.content.Context
import android.content.Intent
import android.net.Uri
import android.net.UrlQuerySanitizer
import com.facebook.react.bridge.*
import sberid.sdk.auth.pkce.PkceUtils
import java.security.SecureRandom
import java.util.*

class SberIdModule(private val reactContext: ReactApplicationContext) : ReactContextBaseJavaModule(reactContext) {
    private val CLIENT_ID = "client_id"
    private val STATE = "state"
    private val NONCE = "nonce"
    private val SCOPE = "scope"
    private val BROWSER = "package"
    private val REDIRECT_URI = "redirect_uri"
    private val CODE_CHALLENGE = "code_challenge"
    private val CODE_CHALLENGE_METHOD = "code_challenge_method"

    companion object {
        fun getResult(intent: Intent) {
            val resultString: String? = intent.dataString?.toString()

            if(resultString != null) {
                val sanitizer = UrlQuerySanitizer()

                sanitizer.allowUnregisteredParamaters = true
                sanitizer.parseUrl(resultString)

                val code = sanitizer.getValue("code")

                if(code == null) {
                    val error = sanitizer.getValue("error")

                    promiseResolver?.reject("AUTH_ERROR", error)
                } else {
                    val state = sanitizer.getValue("state")

                    val resultMap = WritableNativeMap()

                    resultMap.putString("code", code)
                    resultMap.putString("state", state)
                    resultMap.putString("nonce", nonce)
                    resultMap.putString("codeVerifier", codeVerifier)

                    promiseResolver?.resolve(resultMap)
                }
            } else {
                promiseResolver?.reject("INVALID_CALLBACK", "Result string is empty")
            }
        }

        var promiseResolver: Promise? = null;
        var nonce: String = ""
        var codeVerifier: String = ""
    }

    override fun getName(): String {
        return "SberId"
    }

    @ReactMethod
    fun getAuthToken(options: ReadableMap, promise: Promise) {
        promiseResolver = promise;

        codeVerifier = PkceUtils.generateRandomCodeVerifier(SecureRandom())
        val codeChallenge = PkceUtils.deriveCodeVerifierChallenge(codeVerifier)
        val state = UUID.randomUUID().toString()
        nonce = UUID.randomUUID().toString()
        var scope: String = ""
        var clientId: String = ""
        var redirectUri: String = ""

        try {
            scope = options.getString("scope").toString()
        } catch (exeption: Throwable) {
            promiseResolver?.reject("INVALID_PARAMS", "scope");
        }

        try {
            clientId = options.getString("clientId").toString()
        } catch (exeption: Throwable) {
            promiseResolver?.reject("INVALID_PARAMS", "clientId");
        }

        try {
            redirectUri = options.getString("redirectUri").toString()
        } catch (exeption: Throwable) {
            promiseResolver?.reject("INVALID_PARAMS", "redirectUri");
        }

        var uri = Uri.Builder()
                .scheme("sberbankidlogin")
                .authority("sberbankid")
                .appendQueryParameter(CLIENT_ID, clientId)
                .appendQueryParameter(STATE, state)
                .appendQueryParameter(NONCE, nonce)
                .appendQueryParameter(SCOPE, scope)
                .appendQueryParameter(REDIRECT_URI, redirectUri)
                .appendQueryParameter(CODE_CHALLENGE, codeChallenge)
                .appendQueryParameter(CODE_CHALLENGE_METHOD, PkceUtils.getCodeChallengeMethod())
                .build()

        if (checkSbolIsNotInstalled(reactContext, uri)) {
            uri = uri.buildUpon()
                    .scheme("https")
                    .authority("online.sberbank.ru")
                    .appendEncodedPath("CSAFront/oidc/authorize.do")
                    .appendQueryParameter("response_type", "code")
                    .build();
        }

        val intent = Intent(Intent.ACTION_VIEW, uri)
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK)

        reactContext.startActivity(intent)
    }

    private fun checkSbolIsNotInstalled(context: Context, deeplinkUri: Uri): Boolean {
        return context.packageManager.queryIntentActivities(Intent("android.intent.action.VIEW", deeplinkUri), 0).isEmpty()
    }
}