//
//  SxwlNativeAdManager.h
//  SxwlAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SxwlRequest;
@class SxwlNativeAd;
@class SxwlNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol SxwlNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(SxwlNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface SxwlNativeAdManager : NSObject

@property (nonatomic, weak) id<SxwlNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(SxwlRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<SxwlNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END
