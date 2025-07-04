//
//  SxwlBanner.h
//  SxwlAdsSdk-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class SxwlRequest;
@class SxwlBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol SxwlBannerDelegate <NSObject>

@optional

- (void)onAutoRefreshed:(SxwlBanner *)bannerAdView;

- (void)onAutoRefreshFail:(NSError *)error;

- (void)onBannerLoadSuccess:(SxwlBanner *)bannerAdView;

- (void)onBannerLoadError:(NSError *)error;

- (void)onBannerShown;

- (void)onBannerClicked;

- (void)onWillLeaveApplication;

- (void)onWillOpenFullScreen;
- (void)onCloseFullScreen;
- (void)onDidRemoved;
@end

@interface SxwlBanner : NSObject

@property (nonatomic, weak) id<SxwlBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(SxwlRequest *)request;

- (instancetype)initWithRequest:(SxwlRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)isReady;
- (UIView *)getView;
@end
NS_ASSUME_NONNULL_END

