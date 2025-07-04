//
//  SxwlNativeAdView.h
//  SxwlAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SxwlNativeAdView;
@class SxwlNativeAd;
@protocol SxwlNativeAdViewDelegate <NSObject>
@optional
- (void)nativeExpressAdViewRenderSuccess:(SxwlNativeAdView *)nativeExpressAdView;
- (void)nativeExpressAdViewRenderFail:(NSError *)error;
- (void)nativeAdViewWillExpose;
- (void)nativeAdViewDidClick;
- (void)dislikeWithReason:(NSString *) reason;

@end
@interface SxwlNativeAdView : NSObject
+ (instancetype) initAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<SxwlNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)refreshData:(SxwlNativeAd *)nativeAd;
- (UIView *)getView;
@end
