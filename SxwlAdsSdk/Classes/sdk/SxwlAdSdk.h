//
//  SxwlAdSdk.h
//  SxwlAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, SxwlAcceptStatus) {
    SxwlUnknown = 0,
    SxwlAccepted,
    SxwlDenied,
};

@interface SxwlAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)setDebugMode:(BOOL)enable;
-(void)setGDPRStatus:(SxwlAcceptStatus)status;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end

