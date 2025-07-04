//
//  SxwlInterstitial.h
//  SxwlAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SxwlRequest;
@protocol SxwlInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSuccess:(NSString *) pid;
-(void) onInterstitialLoadError:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStart;
-(void) onInterstitialPlayEnd;
-(void) onInterstitialClicked;
-(void) onInterstitialClosed;
-(void) onInterstitialSkiped;

@end

@interface SxwlInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<SxwlInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(SxwlRequest *)request;
- (BOOL)isReady;
- (void)loadInterstitialAd;
- (void)show:(UIViewController *)rootViewController;
@end
