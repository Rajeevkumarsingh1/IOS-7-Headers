/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSData, NSMutableData, NSString, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_token;
    double _timeTokenGranted;
    int _phase;
    NSData *_r1;
    NSData *_r1Hash;
    NSData *_r2;
    NSData *_hmac;
}

+ (id)sharedAuthenticator;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_connectionDidEnd;
- (void)_succeeded;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)invalidateToken;
- (id)token;
- (BOOL)isAuthenticating;
- (void)authenticate;
- (void)_failWithErrorCode:(int)arg1;
- (void)_clearNonces;
- (BOOL)_authenticate2;
- (BOOL)_authenticate1;
- (BOOL)canAuthenticate;
- (void)_copyCertificateData:(id *)arg1 privateKey:(struct __SecKey **)arg2;
- (void)_loadStatusChanged;

@end

