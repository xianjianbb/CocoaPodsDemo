//
//  ViewController.h
//  CocoaPodsDemo
//
//  Created by 张驰 on 2017/4/9.
//  Copyright © 2017年 张驰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Masonry_LJC)

- (void) distributeSpacingHorizontallyWith:(NSArray*)views;
- (void) distributeSpacingVerticallyWith:(NSArray*)views;

@end


@interface ViewController : UIViewController


@end
