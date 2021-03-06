/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface EDProtection : NSObject <NSCopying>
{
    _Bool mHidden;
    _Bool mLocked;
}

+ (id)protectionWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (_Bool)isLocked;
- (_Bool)isHidden;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToProtection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (id)init;

@end

