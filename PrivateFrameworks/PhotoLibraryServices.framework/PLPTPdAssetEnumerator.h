/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSArray, PLManagedObjectContext;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration>
{
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    NSArray *_albumObjectIDs;
    NSArray *_resultStore;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (id)assetsFromOffset:(unsigned int)arg1 count:(unsigned int)arg2;
- (unsigned int)getPTPdInfo:(id *)arg1 count:(unsigned int)arg2 fetchOffset:(unsigned int)arg3;

@end

