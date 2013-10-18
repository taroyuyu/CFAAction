//
//  CFCARotate.h
//  CFAAction
//
//  Created by Robert Widmann on 10/16/13.
//  Copyright (c) 2013 CodaFi. All rights reserved.
//

#import "CFAAction+Private.h"

@interface CFARotate : CFAAction

+ (CFAAction *)rotateByAngle:(CGFloat)radians duration:(NSTimeInterval)sec;
+ (CFAAction *)rotateToAngle:(CGFloat)radians duration:(NSTimeInterval)sec;
+ (CFAAction *)rotateToAngle:(CGFloat)radians duration:(NSTimeInterval)sec shortestUnitArc:(BOOL)shortestUnitArc;

@end
