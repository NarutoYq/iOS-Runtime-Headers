/* Generated by RuntimeBrowser.
 */

@protocol TSSharedImageCacheType

@required

- (void)cache:(UIImage *)arg1 forKey:(NSString *)arg2;
- (UIImage *)fetchImageForKey:(NSString *)arg1;
- (void)pruneImagesOlderThan:(double)arg1;

@end
