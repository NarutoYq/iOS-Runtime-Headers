/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSBaseView>, PSRootController;



@interface PSViewController : NSObject <PSBaseView>
{
    <PSBaseView> *_parentController;
    PSRootController *_rootController;
}

+ (BOOL)isOverlay;

- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)navigationTitle;
- (id)navigationItem;
- (void)pushNavigationItemWithTitle:(id)arg1;
- (void)insertNavigationItem:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertNavigationItem:(id)arg1 atIndexFromEnd:(NSInteger)arg2;
- (void)pushNavigationItem:(id)arg1;
- (void)popNavigationItem;
- (void)popNavigationItemWithAnimation:(BOOL)arg1;
- (void)hideNavigationBarButtons;
- (void)showNavigationBarButtons:(id)arg1 :(id)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(NSInteger)arg2 rightButton:(id)arg3 withStyle:(NSInteger)arg4;
- (void)setNavigationBarEnabled:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (void)navigationBarButtonClicked:(NSInteger)arg1;
- (id)view;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)setRootController:(id)arg1;
- (id)rootController;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)viewDidBecomeVisible;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)viewWillRedisplay;
- (void)viewTransitionCompleted;
- (void)suspend;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)pushController:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)popController;
- (BOOL)popControllerWithAnimation:(BOOL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_layoutProgressIndicator:(id)arg1;
- (id)startValidationWithPrompt:(id)arg1;
- (void)updateValidationPrompt:(id)arg1 progressIndicator:(id)arg2;
- (void)stopValidationWithPrompt:(id)arg1 progressIndicator:(id)arg2;

@end