/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol.h"
#import "NSCopying.h"

@class EKCalendarItem, NSString, NSURL;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>
{
    EKCalendarItem *_owner;
}

+ (void *)findABPersonByURL:(id)arg1 inAddressBook:(void *)arg2;
@property(readonly, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;
- (void *)ABRecordWithAddressBook:(void *)arg1;
- (BOOL)isEqualToParticipant:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) BOOL isCurrentUser;
@property(copy, nonatomic) NSString *comment;
@property(readonly, nonatomic) int participantRole;
@property(readonly, nonatomic) int participantStatus;
@property(readonly, nonatomic) int participantType;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSURL *address;
@property(copy, nonatomic) NSString *emailAddress;
- (void)setDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *UUID;
- (id)_persistentItem;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

