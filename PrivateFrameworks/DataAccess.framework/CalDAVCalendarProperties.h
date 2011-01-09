/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString;



@interface CalDAVCalendarProperties : NSObject 
{
    NSString *_path;
    NSString *_displayName;
    NSString *_calendarDescription;
    NSString *_ctag;
    NSString *_calendarColor;
    NSArray *_supportedComponents;
    NSInteger _writeable;
}

@property(getter=isWriteable) NSInteger writeable;
@property(retain) NSArray *supportedComponents;
@property(retain) NSString *calendarColor;
@property(retain) NSString *ctag;
@property(retain) NSString *calendarDescription;
@property(retain) NSString *displayName;
@property(retain) NSString *path;

+ (id)writeableStringForWriteable:(NSInteger)arg1;

- (void)dealloc;
- (id)description;
- (NSInteger)isWriteable;
- (void)setWriteable:(NSInteger)arg1;
- (id)supportedComponents;
- (void)setSupportedComponents:(id)arg1;
- (id)calendarColor;
- (void)setCalendarColor:(id)arg1;
- (id)ctag;
- (void)setCtag:(id)arg1;
- (id)calendarDescription;
- (void)setCalendarDescription:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;

@end