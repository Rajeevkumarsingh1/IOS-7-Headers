/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject
{
    NSMutableArray *_items;
}

- (void)dequeueImportItem;
- (void)enqueueImportItem:(id)arg1;
- (id)currentItem;
- (id)description;
- (void)dealloc;
- (id)init;

@end
