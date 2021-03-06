//
//  QuickViewConfig.h
//  Strongbox
//
//  Created by Mark on 24/04/2020.
//  Copyright © 2020 Mark McGuill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface QuickViewConfig : NSObject

+ (instancetype)title:(NSString*)title subtitle:(NSString*)subtitle image:(UIImage*)image searchTerm:(NSString*)searchTerm;

@property NSString* title;
@property NSString* subtitle;
@property UIImage* image;
@property NSString* searchTerm;

@end

NS_ASSUME_NONNULL_END
