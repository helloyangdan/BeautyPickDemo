//
//  SelfImageVIew.h
//  hlrenTest
//
//  Created by blue on 13-4-23.
//  Copyright (c) 2013年 blue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageInfo.h"
#import "UIImageView+WebCache.h"
//间距
#define SPACE 4
#define WIDTH [UIScreen mainScreen].applicationFrame.size.width/2

@protocol ImageDelegate<NSObject>
-(void)clickImage:(ImageInfo *)data;
-(void)removeImg:(ImageInfo *)data;
@end

@interface SelfImageVIew : UIView
@property (nonatomic,weak)id<ImageDelegate> delegate;
@property (nonatomic,strong)ImageInfo *data;

-(id)initWithImageInfo:(ImageInfo*)imageInfo y:(float)y withA:(int)a;
@end
