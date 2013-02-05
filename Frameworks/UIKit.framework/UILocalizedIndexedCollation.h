/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLocale, NSString, NSArray;

@interface UILocalizedIndexedCollation : NSObject {
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    NSLocale *_locale;
    NSArray *_sectionIndexMapping;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionTitles;
    struct __CFStringTokenizer { } *_tokenizer;
    NSString *_transform;
}

@property(readonly) NSArray * sectionIndexTitles;
@property(readonly) NSArray * sectionTitles;

+ (id)collationWithDictionary:(id)arg1;
+ (id)currentCollation;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (int)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (int)sectionForSectionIndexTitleAtIndex:(int)arg1;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;

@end