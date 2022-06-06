//
//  SberId.h
//  Pods
//
//  Created by Alexander Blokhin on 24.11.2020.
//

#ifndef SberId_h
#define SberId_h

#import <React/RCTBridgeModule.h>

@interface SberId : NSObject <RCTBridgeModule>

+ (void)resolve:(NSURL *)url;

- (void)getAuthToken:(NSDictionary *)options
            resolver:(RCTPromiseResolveBlock)resolve
            rejecter:(RCTPromiseRejectBlock)reject;

@end

#endif /* SberId_h */



