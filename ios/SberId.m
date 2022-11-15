#import <React/RCTBridgeModule.h>
#import "SberId.h"

@import SberbankSDK;

RCTPromiseResolveBlock sberResolveBlock;
RCTPromiseRejectBlock sberRejectBlock;
NSString * nonce;
NSString * codeVerifier;

@implementation SberId

RCT_EXPORT_MODULE()

+ (void)resolve:(NSURL *)url {
    dispatch_async(dispatch_get_global_queue(0,0), ^{
        NSString * result = [SberId getQueryStringParameter:url :@"result"];
        NSString * status = [SberId getQueryStringParameter:url :@"status"];
        
        if ([result isEqualToString:@"FAILURE"]) {
            NSString * error = [SberId getQueryStringParameter:url :@"error"];
            sberRejectBlock(@"AUTH_ERROR", error, NULL);
        } else if ([status isEqualToString:@"success"]) {
            NSString * code = [SberId getQueryStringParameter:url :@"code"];
            NSString * state = [SberId getQueryStringParameter:url :@"state"];
            
            NSDictionary *dict = @{ @"code" : code, @"state" : state, @"nonce": nonce, @"codeVerifier": codeVerifier};
            
            sberResolveBlock(dict);
        } else {
            sberResolveBlock(@{});
        }
    });
}

+ (NSString *)getQueryStringParameter:(NSURL *)url :(NSString *)key {
    NSURLComponents *urlComponents = [NSURLComponents componentsWithURL:url
                                                resolvingAgainstBaseURL:NO];
    NSArray *queryItems = urlComponents.queryItems;
    
    if ([queryItems count] == 0) return @"";
    
    NSPredicate *predicate = [NSPredicate predicateWithFormat:@"name=%@", key];
    NSURLQueryItem *queryItem = [[queryItems
                                  filteredArrayUsingPredicate:predicate]
                                  firstObject];
    
    return queryItem.value;
}

RCT_EXPORT_METHOD(getAuthToken:(NSDictionary *)options
                  resolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject) {
    
    sberResolveBlock = resolve;
    sberRejectBlock = reject;
    
    nonce = [[NSUUID new] UUIDString];
    codeVerifier = [SBKUtils createVerifier];
    
    NSString *challenge = [SBKUtils createChallenge:codeVerifier];
    
    SBKAuthRequest *request = [SBKAuthRequest new];
    request.clientId = options[@"clientId"];
    request.nonce = nonce;
    request.scope = options[@"scope"];
    request.state = [[NSUUID new] UUIDString];
    request.redirectUri = options[@"redirectUri"];
    request.codeChallenge = challenge;
    request.codeChallengeMethod = SBKAuthRequest.challengeMethod;
    
    [SBKAuthManager authWithSberId:request viewController:NULL];
}

@end
