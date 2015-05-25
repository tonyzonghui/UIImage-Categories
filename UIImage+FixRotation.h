//
//  UIImage+FixRotation.h
//  WooLaLa
//
//  Created by Gemeng Qin on 15/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage(fixOrientation)

- (UIImage *)fixOrientation;

// Rotates images right side up depending on the current device orientation
// (use right after the photo was shot)
- (UIImage *)fixOrientationWithDeviceOrientation;

@end
