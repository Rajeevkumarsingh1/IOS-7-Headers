/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPAssetKeyDelegate.h"

@class CALayer, MPDocument, MRMarimbaLayer, MediaControlServer, NSData, NSDictionary, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate>
{
    NSLock *_lock;
    MediaControlServer *_server;
    unsigned int _serverSessionID;
    CALayer *_presentationLayer;
    MPDocument *_marimbaDocument;
    MRMarimbaLayer *_marimbaLayer;
    unsigned char _sessionUUID[16];
    NSDictionary *_settings;
    int _state;
    NSMutableDictionary *_assets;
    unsigned int _nextAssetIndex;
    BOOL _hasMoreAssets;
    BOOL _endPending;
    int _outstandingCount;
    double _startTime;
    double _lastRequestTime;
    double _lastRemoveTime;
    NSData *_firstImageData;
}

+ (id)slideshowFeaturesWithLanguage:(id)arg1;
- (void)_playbackUserPrevious:(id)arg1;
- (void)_playbackUserNext:(id)arg1;
- (void)_playbackUserStop:(id)arg1;
- (void)_playbackUserPlayPause:(id)arg1;
- (void)_postProgressEvent:(id)arg1;
- (void)_pruneAssets;
- (id)_oldestAsset;
- (unsigned int)_bufferedAssetCount;
- (id)_copyImageForAssetKey:(id)arg1 decode:(BOOL)arg2;
- (id)_assetForAssetKey:(id)arg1;
- (void)_playbackSlideChanged:(id)arg1;
- (void)_playbackEnded:(id)arg1;
- (void)_playbackConsumedAssetKey:(id)arg1;
- (void)_playbackProducedAssetData:(id)arg1 withAssetInfo:(id)arg2;
- (void)_playbackPrefetchDone;
- (void)_playbackPrefetch;
- (void)_playbackRunStateMachine;
- (void)_playbackStop;
- (void)_playbackStart;
- (struct CGSize)resolutionForAssetKey:(id)arg1;
- (id)imageDataForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1;
- (id)stopSlideshowWithInfo:(id)arg1 error:(id *)arg2;
- (id)startSlideshowWithInfo:(id)arg1 error:(id *)arg2;
- (id)slideshowInfo;
- (void)setServerSessionID:(unsigned int)arg1;
- (void)setPresentationLayer:(id)arg1;
- (void)dealloc;
- (id)initWithServer:(id)arg1;

@end
