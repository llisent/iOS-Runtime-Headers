/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLearnMoreTextView : UITextView {
    NSString *_accessibilityHint;
    NSString *_helpTopicID;
    NSString *_helpVersion;
    UIViewController *_parentViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic, retain) NSString *accessibilityHint;
@property (nonatomic, retain) NSString *helpTopicID;
@property (nonatomic, retain) NSString *helpVersion;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (void)didTapLearnMore;
- (id)helpTopicID;
- (id)helpVersion;
- (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (id)parentViewController;
- (void)resetTextView;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAttributedText:(id)arg1 addLearnMore:(BOOL)arg2 letterpress:(BOOL)arg3;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(float)arg3 addLearnMore:(BOOL)arg4;
- (void)setHelpTopicID:(id)arg1;
- (void)setHelpVersion:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(float)arg4 addLearnMore:(BOOL)arg5;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (void)tapGesture:(id)arg1;
- (id)tapGestureRecognizer;

@end
