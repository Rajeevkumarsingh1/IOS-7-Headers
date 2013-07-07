/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class CAMediaTimingFunction, PTXParallaxEngineSettings, UILabel, UIView, UIWindow;

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver>
{
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    struct CGPoint _lastOffset;
    double _idleStartTime;
    struct CGPoint _idleStartOffset;
    PTXParallaxEngineSettings *_settings;
    CAMediaTimingFunction *_curveFunction;
    float _smoothingDegree;
    float _referenceShiftSpeed;
    float _distanceMultiplier;
    float _jumpThreshold;
    unsigned long _jumpSound;
    float _idleLeeway;
    float _secondsBeforeIdle;
    float _lockValue;
    float _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
}

- (void).cxx_destruct;
- (void)_tearDownDiagnosticsWindow;
- (void)_createDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_createDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_createIdleIndicator;
- (struct CGPoint)_curvedOffset;
- (void)_updateSmoothedOffsetForRawOffset:(struct CGPoint)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateDirectionalLockIndicators;
- (void)_showIdleUI:(BOOL)arg1;
- (BOOL)_isIdle;
- (void)_updateIdleStateForRawOffset:(struct CGPoint)arg1;
- (union _GLKQuaternion)_relativeQuaternion:(union _GLKQuaternion)arg1;
- (void)reset;
- (float)directionLockStrength;
- (int)directionLockStatus;
- (struct CGPoint)offset;
- (struct CGPoint)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1;
- (void)updateWithAttitude:(id)arg1;
- (void)dealloc;
- (id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2;

@end
