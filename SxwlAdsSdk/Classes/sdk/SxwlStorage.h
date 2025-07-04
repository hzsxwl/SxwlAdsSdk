//
//  SxwlStorage.h
//  SxwlAdsSdk-iOS
//
//
#import "SxwlDto.h"
#import <Foundation/Foundation.h>

@interface SxwlStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(SxwlDto *) sxwlDto;
-(SxwlDto *) getStrategy: (NSString *)adsId;
@end

