/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface CLDeviceMotionProperties : NSObject
{
    int fMode;
    _Bool fWantsPowerConservativeDeviceMotion;
}

@property(readonly, nonatomic) _Bool wantsPowerConservativeDeviceMotion; // @synthesize wantsPowerConservativeDeviceMotion=fWantsPowerConservativeDeviceMotion;
@property(nonatomic) int mode; // @synthesize mode=fMode;
- (id)description;
- (id)initWithMode:(int)arg1 andPowerConservation:(_Bool)arg2;

@end
