//
//  SxwlNativeAd.h
//  SxwlAdsSdk-iOS
//
//


#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface SxwlNativeAd : NSObject
- (instancetype)initWithAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getAd;
@end

