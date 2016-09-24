/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {
    int  _databaseID;
    UIColor * _extractedColor;
    BOOL  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    BOOL  _iconInCache;
    NSDate * _lastRequestDate;
    BOOL  _lastRequestWasInUserLoadedWebpage;
    int  _requestCount;
    BOOL  _requestDidSucceed;
    int  _transparencyAnalysisResult;
}

@property (nonatomic) int databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int downloadStatusFlags;
@property (nonatomic, retain) UIColor *extractedColor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, copy) NSString *host;
@property (getter=isIconInCache, nonatomic) BOOL iconInCache;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) BOOL lastRequestWasInUserLoadedWebpage;
@property (nonatomic) int requestCount;
@property (nonatomic) BOOL requestDidSucceed;
@property (readonly) Class superclass;
@property (nonatomic) int transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(int)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(int)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9;

- (void).cxx_destruct;
- (int)databaseID;
- (id)description;
- (unsigned int)downloadStatusFlags;
- (id)extractedColor;
- (unsigned int)hash;
- (BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(int)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(int)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9;
- (id)initWithSQLiteRow:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIconInCache;
- (id)lastRequestDate;
- (BOOL)lastRequestWasInUserLoadedWebpage;
- (int)requestCount;
- (BOOL)requestDidSucceed;
- (void)setDatabaseID:(int)arg1;
- (void)setExtractedColor:(id)arg1;
- (void)setHigherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg1;
- (void)setHost:(id)arg1;
- (void)setIconInCache:(BOOL)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setLastRequestWasInUserLoadedWebpage:(BOOL)arg1;
- (void)setRequestCount:(int)arg1;
- (void)setRequestDidSucceed:(BOOL)arg1;
- (void)setTransparencyAnalysisResult:(int)arg1;
- (int)transparencyAnalysisResult;

@end