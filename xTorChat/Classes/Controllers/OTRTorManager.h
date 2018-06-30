//
//  OTRTorManager.h
//  xTorChat
//
//  Created by Christopher Ballinger on 10/3/14.
//  Copyright (c) 2014TopStar. All rights reserved.
//

@import Foundation;
@import CPAProxy;

@interface OTRTorManager : NSObject

@property (nonatomic, strong) CPAProxyManager *torManager;

+ (instancetype) sharedInstance;

@end
