//
//  UIImage+Unity.h
//  AVCaptureDemo
//
//  Created by JMiMac01 on 2017/8/16.
//  Copyright © 2017年 JMiMac01. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIImage (Unity)
//视频帧转image
+(UIImage*)imageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer;
@end
