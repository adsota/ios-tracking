//
//  AppotaAdvertiserSDK.h
//  AppotaAdvertiserSDK
//
//  Created by Tue Nguyen on 11/19/14.
//
//

#import <Foundation/Foundation.h>
#import "AppotaAdvertiserSDKConst.h"

@interface AppotaAdvertiserSDK : NSObject

/**
 *  Singleton method return AppotaGameDK instance
 *  AppotaAdvertiserSDK instance will be used during application lifecycle
 *  @return AppotaAdvertiserSDK object
 */
+ (instancetype)sharedInstance;

+ (void) configure;
@end
