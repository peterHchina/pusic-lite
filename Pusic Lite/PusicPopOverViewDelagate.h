//
//  PusicPopOverViewDelagate.h
//  Pusic
//
//  Created by peter on 15/4/22.
//  Copyright (c) 2015年 peter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "PusicStatusBarViewController.h"
#import "Music.h"
@interface PusicPopOverViewDelagate : NSObject <NSPopoverDelegate>
{
    
    NSViewController *viewController;
    
}

@property  NSPopover *popOver;
@property NSInteger viewThmeNum;
- (void)showPopover:(id)sender musicInfo:(Music *) music;
@end
