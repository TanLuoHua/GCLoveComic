//
//  UIView+HDExtension.h
//  PortableTreasure
//
//  Created by HeDong on 14/12/1.
//  Copyright © 2014年 hedong. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HDAnimationType)
{
    HDAnimationOpen,// 动画开启
    HDAnimationClose// 动画关闭
};

@interface UIView (HDExtension)

#pragma mark - 快速设置控件的frame
@property (nonatomic, assign) CGFloat hd_x;
@property (nonatomic, assign) CGFloat hd_y;
@property (nonatomic, assign) CGFloat hd_centerX;
@property (nonatomic, assign) CGFloat hd_centerY;
@property (nonatomic, assign) CGFloat hd_width;
@property (nonatomic, assign) CGFloat hd_height;
@property (nonatomic, assign) CGPoint hd_origin;
@property (nonatomic, assign) CGSize hd_size;

#pragma mark - 动画相关
/**
 *  在某个点添加动画
 *
 *  @param point 动画开始的点
 */
- (void)hd_addAnimationAtPoint:(CGPoint)point;

/**
 *  在某个点添加动画
 *
 *  @param point 动画开始的点
 *  @param type  动画的类型
 *  @param animationColor 动画的颜色
 */
- (void)hd_addAnimationAtPoint:(CGPoint)point WithType:(HDAnimationType)type withColor:(UIColor *)animationColor;

/**
 *  在某个点添加动画
 *
 *  @param point 动画开始的点
 *  @param type  动画的类型
 *  @param animationColor 动画的颜色
 *  @param completion 动画结束后的代码快
 */
- (void)hd_addAnimationAtPoint:(CGPoint)point WithType:(HDAnimationType)type withColor:(UIColor *)animationColor completion:(void (^)(BOOL finished))completion;

/**
 *  在某个点添加动画
 *
 *  @param point      动画开始的点
 *  @param duration   动画时间
 *  @param type       动画的类型
 *  @param animationColor 动画的颜色
 *  @param completion 动画结束后的代码快
 */
- (void)hd_addAnimationAtPoint:(CGPoint)point WithDuration:(NSTimeInterval)duration WithType:(HDAnimationType) type withColor:(UIColor *)animationColor completion:(void (^)(BOOL finished))completion;

@end
