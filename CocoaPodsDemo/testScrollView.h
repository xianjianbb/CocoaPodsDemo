//
//  testScrollView.h
//  CocoaPodsDemo
//
//  Created by 张驰 on 2017/8/31.
//  Copyright © 2017年 张驰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface testScrollView : UIView

@property (strong, nonatomic) NSArray *images;
@property (weak, nonatomic, readonly) UIPageControl *pageControl;
@property (assign, nonatomic, getter=isScrollDirectionPortrait) BOOL scrollDirectionPortrait;

@end
