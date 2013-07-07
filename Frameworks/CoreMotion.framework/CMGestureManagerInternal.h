/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMGestureManagerInternal : NSObject
{
    int fPriority;
    struct CLConnectionClient *fLocationdConnection;
    id fGestureHandler;
    NSObject<OS_dispatch_source> *fWatchDogTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)stopGestureUpdatesPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:(id)arg1;
- (void)stopWatchdogCheckinsPrivate;
- (void)startWatchdogCheckinsPrivate;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;

@end
