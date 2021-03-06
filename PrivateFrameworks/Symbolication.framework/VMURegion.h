/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Symbolication/VMUAddressRange.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, VMUSymbolOwner;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying>
{
    VMUSymbolOwner *_owner;
    NSString *_name;
}

+ (id)regionWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRegion:(id)arg1;
- (int)compare:(id)arg1;
- (struct _VMURange)addressRange;
- (id)name;
- (id)owner;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange)arg3;
- (void)setOwner:(id)arg1;

@end

