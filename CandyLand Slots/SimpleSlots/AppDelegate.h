//
//  AppDelegate.h
//  HorseRace
//
//  Created by Ollie Kett on 28/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayHavenSDK.h"
#import "PHPublisherContentRequest.h"
#import <RevMobAds/RevMobAds.h>
#import "Chartboost.h"
#import "CommonUtilities.h"
@class ViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate, RevMobAdsDelegate>
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewController;

-(void)closeBackground;
-(void)showPHMoreGames;
-(void)showCBMoreApps;
-(void)showRevmobFreeGames;
@end
