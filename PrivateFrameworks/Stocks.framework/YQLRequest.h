/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface YQLRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

+ (BOOL)shouldGenerateOfflineData;
+ (void)setShouldGenerateOfflineData:(BOOL)arg1;
+ (void)saveDebugString;
+ (void)appendDebugString:(id)arg1;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (void)failToParseWithData:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;

@end
