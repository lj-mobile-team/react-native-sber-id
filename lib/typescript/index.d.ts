declare type Options = {
    clientId: string;
    redirectUri: string;
    scope: string;
};
declare type Response = {
    code: string;
    state: string;
    nonce: string;
    codeVerifier: string;
};
declare const getAuthToken: (options: Options) => Promise<Response>;
export { getAuthToken };
