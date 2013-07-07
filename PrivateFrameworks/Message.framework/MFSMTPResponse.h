/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFSMTPResponse : NSObject
{
    id _lastResponseLine;
    int _status;
    unsigned int _statusClass:10;
    unsigned int _statusSubject:10;
    unsigned int _statusDetail:10;
}

@property(readonly, nonatomic) unsigned int statusDetail; // @synthesize statusDetail=_statusDetail;
@property(readonly, nonatomic) unsigned int statusSubject; // @synthesize statusSubject=_statusSubject;
@property(readonly, nonatomic) unsigned int statusClass; // @synthesize statusClass=_statusClass;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (id)description;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (int)failureReason;
- (void)setLastResponseLine:(id)arg1;
- (id)lastResponseLine;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (id)initWithStatus:(int)arg1;

@end
