/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPParagraph : GQDWPInlineList {
    BOOL mContinue;
    BOOL mIsHidden;
    long mListLevel;
    GQDSStyle *mParaStyle;
    BOOL mRestartList;
}

- (BOOL)cont;
- (void)dealloc;
- (BOOL)isBlank;
- (BOOL)isHidden;
- (long)listLevel;
- (id)paragraphStyle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (BOOL)restartList;

@end
