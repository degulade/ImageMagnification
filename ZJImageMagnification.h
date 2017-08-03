//
//  ZJImageMagnification.h
//  中教在线
//
//  Created by degulade on 2017/4/21.
//  Copyright © 2017年 degulade. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZJImageMagnification : NSObject

/**
 *  浏览大图
 *
 *  @param currentImageview 当前图片
 *  @param alpha            背景透明度
 */
+(void)scanBigImageWithImageView:(UIImageView *)currentImageview alpha:(CGFloat)alpha;

@end
