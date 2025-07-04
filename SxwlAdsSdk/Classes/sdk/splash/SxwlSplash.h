#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SxwlRequest;
@protocol SxwlSplashAdDelegate <NSObject>
@optional
-(void) onSplashShow;
-(void) onSplashFailToShow:(NSString *) pid error:(NSError *)error;
-(void) onSplashLoadSuccess:(NSString *) pid;
-(void) onSplashLoadError:(NSString *) pid error:(NSError *)error;
-(void) onSplashClicked;
-(void) onSplashClosed;
-(void) onSplashSkiped;

@end

@interface SxwlSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<SxwlSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(SxwlRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(SxwlRequest *)request;
- (BOOL)isReady;
-(void)loadAdAndShow;
- (void)loadAd;
- (void)showAd:(UIWindow *)window;
@end
