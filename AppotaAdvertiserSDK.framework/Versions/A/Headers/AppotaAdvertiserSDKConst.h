//
//  AppotaAdvertiserSDKConst.h
//  AppotaAdvertiserSDK
//
//  Created by Tue Nguyen on 7/1/14.
//  Copyright (c) 2014 DB-Interactive. All rights reserved.
//

#ifndef AppotaAdvertiserSDK_AppotaAdvertiserSDKConst_h
#define AppotaAdvertiserSDK_AppotaAdvertiserSDKConst_h


#define AppotaAdvertiserSDK_DEBUG NO

//#define APPOTA_BUILD_UNITY
#define APPOTA_BUILD_SPECIAL NO
//#define APPOTAGameSDK_BUILD_ANE

typedef void (^AppotaAdvertiserSDKStringBlock)(NSString *returnString);
typedef void (^AppotaAdvertiserSDKArrayBlock)(NSArray *list);
typedef void (^AppotaAdvertiserSDKDictionaryBlock)(NSDictionary *dict);
typedef void (^AppotaAdvertiserSDKBOOLBlock)(BOOL b);
typedef void (^AppotaAdvertiserSDKIntBlock)(int t);
typedef void (^AppotaAdvertiserSDKVoidBlock) (void);
typedef void (^AppotaAdvertiserSDKObjectBlock) (id object);
typedef void (^AppotaAdvertiserSDKObjectMessageBlock) (id object, NSString* message);
typedef void (^AppotaAdvertiserSDKErrorBlock) (NSError *error);
typedef void (^AppotaAdvertiserSDKObjectMessageHandler) (id object, NSError *error , NSString *message);
typedef void (^AppotaAdvertiserSDKObjectHandler) (id object, NSError *error);


#define AppotaAdvertiserSDK_API_VERSION @"1.0"
#define APPOTA_DIALOG_PAYMENT_TAG 1430

#define APPOTAGameSDK_SCHEMA @"appota"
#define APPOTAGameSDK_DRAGVIEW_TAG 1428

//
#define APPOTA_LANGUAGE_KEY @"kAppotaLangKey"
#define APPOTAGame_SDK_VERSION @"4.0"
#define APPOTAGame_SDK_LABEL_VERSION @"4.0.8"
#define APPOTAGame_SDK_BUILD 40
#define APPOTA_GAME_DEVICE_TOKEN_KEY @"appota_game_push_device_token"
#define APPOTA_LOGIN_DICT_KEY_SAVED @"key_appota_login_dict_saved"
#define APPOTA_API_CONFIG_KEY @"appota_api_config_key"
#define APPOTA_USER_DEVICE_KEY @"gamota_samedevice_user"

#define APPOTA_CLOSE_PUSH_KEY @"appota_post_close_notification"
#define APPOTA_NORMAL_LOGIN_USERNAME_KEY @"appota_normal_login_username_key"

//Debug mode
//#define DEBUG_MODE YES

#define DEBUG_APPOTA_RESOURCE YES


#define APPOTAGameSDK_LOG NO


#define APPOTAGameSDK_IS_IOS6_AND_UP ([[UIDevice currentDevice].systemVersion floatValue] >= 6.0)

#define APPOTAGameSDK_SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define APPOTAGameSDK_SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define APPOTAGameSDK_SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define APPOTAGameSDK_SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define APPOTAGameSDK_SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


//Device
#define APPOTAGameSDK_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define APPOTAGameSDK_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define APPOTA_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define APPOTA_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define APPOTA_SCREEN_MAX_LENGTH (MAX(APPOTA_SCREEN_WIDTH, APPOTA_SCREEN_HEIGHT))
#define APPOTA_SCREEN_MIN_LENGTH (MIN(APPOTA_SCREEN_WIDTH, APPOTA_SCREEN_HEIGHT))

#define APPOTAGameSDK_IS_IPHONE_4 (APPOTAGameSDK_IS_IPHONE && APPOTA_SCREEN_MAX_LENGTH == 480.0)
#define APPOTAGameSDK_IS_IPHONE_5 (APPOTAGameSDK_IS_IPHONE && APPOTA_SCREEN_MAX_LENGTH == 568.0)
#define APPOTAGameSDK_IS_IPHONE_6 (APPOTAGameSDK_IS_IPHONE && APPOTA_SCREEN_MAX_LENGTH == 667.0)
#define APPOTAGameSDK_IS_IPHONE_6PLUS (APPOTAGameSDK_IS_IPHONE && APPOTA_SCREEN_MAX_LENGTH == 736.0)


//Orientation
#define APPOTAGameSDK_IS_PORTRAIT ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortrait || [UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortraitUpsideDown)
#define APPOTAGameSDK_IS_LANDSCAPE ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeRight || [UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeLeft)
#define APPOTAGameSDK_LANDSCAPE_RIGHT ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeRight)
#define APPOTAGameSDK_LANDSCAPE_LEFT ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeLeft)




#endif
