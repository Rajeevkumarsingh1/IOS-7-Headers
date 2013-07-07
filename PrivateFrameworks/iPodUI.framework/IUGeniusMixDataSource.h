/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaDataSource.h>

@class NSMutableArray;

@interface IUGeniusMixDataSource : IUMediaDataSource
{
    NSMutableArray *_mixes;
    unsigned int _countOfMixes;
    BOOL _needsBackgroundPreload;
    BOOL _canScheduledBackgroundPreload;
    double _lastPreloadTime;
    double _preloadDelay;
}

+ (id)moreListTitleKey;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
+ (id)defaultTitle;
- (void).cxx_destruct;
- (id)_geniusMixAtIndex:(unsigned int)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)loadRepresentativeImageAtIndex:(unsigned int)arg1 withTileLength:(float)arg2 completionBlock:(id)arg3;
- (id)representativeArtistsAtIndex:(unsigned int)arg1;
- (id)mixNameAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMix:(id)arg1;
- (id)mixAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int countOfMixes;
- (void)_artworkCacheDidChangeNotification:(id)arg1;
- (void)unloadReloadableData;
- (void)_cacheMixArtworkInBackground:(id)arg1;
- (void)_invalidateForArtworkCacheChange;
- (void)_scheduleBackgroundPreload;
- (void)reloadData;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)dealloc;
- (id)init;

@end
