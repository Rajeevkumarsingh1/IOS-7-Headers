/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SportsWorkout/SWSyncServiceConnection.h>

@interface SWGeneratePINConnection : SWSyncServiceConnection
{
    id <SWSyncServiceConnectionDelegate><SWGeneratePINConnectionDelegate> _delegate;
}

@property(nonatomic) id <SWSyncServiceConnectionDelegate><SWGeneratePINConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleResponse:(id)arg1;
- (void)dealloc;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;

@end

