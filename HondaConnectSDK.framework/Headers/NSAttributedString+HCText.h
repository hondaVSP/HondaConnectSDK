//
//  NSAttributedString+hcText.h
//  hcText <https://github.com/ibireme/hcText>
//
//  Created by ibireme on 14/10/7.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

#import "HCTextAttribute.h"
#import "HCTextRubyAnnotation.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Get pre-defined attributes from attributed string.
 All properties defined in UIKit, CoreText and hcText are included.
 */
@interface NSAttributedString (HCText)

/**
 Archive the string to data.
 @return Returns nil if an error occurs.
 */
- (nullable NSData *)hc_archiveToData;

/**
 Unarchive string from data.
 @param data  The archived attributed string data.
 @return Returns nil if an error occurs.
 */
+ (nullable instancetype)hc_unarchiveFromData:(NSData *)data;



#pragma mark - Retrieving character attribute information
///=============================================================================
/// @name Retrieving character attribute information
///=============================================================================

/**
 Returns the attributes at first charactor.
 */
@property (nullable, nonatomic, copy, readonly) NSDictionary<NSString *, id> *hc_attributes;

/**
 Returns the attributes for the character at a given index.
 
 @discussion Raises an `NSRangeException` if index lies beyond the end of the 
 receiver's characters.
 
 @param index  The index for which to return attributes. 
 This value must lie within the bounds of the receiver.
 
 @return The attributes for the character at index.
 */
- (nullable NSDictionary<NSString *, id> *)hc_attributesAtIndex:(NSUInteger)index;

/**
 Returns the value for an attribute with a given name of the character at a given index.
 
 @discussion Raises an `NSRangeException` if index lies beyond the end of the
 receiver's characters.
 
 @param attributeName  The name of an attribute.
 @param index          The index for which to return attributes. 
 This value must not exceed the bounds of the receiver.
 
 @return The value for the attribute named `attributeName` of the character at 
 index `index`, or nil if there is no such attribute.
 */
- (nullable id)hc_attribute:(NSString *)attributeName atIndex:(NSUInteger)index;


#pragma mark - Get character attribute as property
///=============================================================================
/// @name Get character attribute as property
///=============================================================================

/**
 The font of the text. (read-only)
 
 @discussion Default is Helvetica (Neue) 12.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) UIFont *hc_font;
- (nullable UIFont *)hc_fontAtIndex:(NSUInteger)index;

/**
 A kerning adjustment. (read-only)
 
 @discussion Default is standard kerning. The kerning attribute indicate how many 
 points the following character should be shifted from its default offset as 
 defined by the current character's font in points; a positive kern indicates a 
 shift farther along and a negative kern indicates a shift closer to the current 
 character. If this attribute is not present, standard kerning will be used. 
 If this attribute is set to 0.0, no kerning will be done at all.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_kern;
- (nullable NSNumber *)hc_kernAtIndex:(NSUInteger)index;

/**
 The foreground color. (read-only)
 
 @discussion Default is Black.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) UIColor *hc_color;
- (nullable UIColor *)hc_colorAtIndex:(NSUInteger)index;

/**
 The background color. (read-only)
 
 @discussion Default is nil (or no background).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nullable, nonatomic, strong, readonly) UIColor *hc_backgroundColor;
- (nullable UIColor *)hc_backgroundColorAtIndex:(NSUInteger)index;

/**
 The stroke width. (read-only)
 
 @discussion Default value is 0.0 (no stroke). This attribute, interpreted as
 a percentage of font point size, controls the text drawing mode: positive 
 values effect drawing with stroke only; negative values are for stroke and fill.
 A typical value for outlined text is 3.0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_strokeWidth;
- (nullable NSNumber *)hc_strokeWidthAtIndex:(NSUInteger)index;

/**
 The stroke color. (read-only)
 
 @discussion Default value is nil (same as foreground color).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0
 */
@property (nullable, nonatomic, strong, readonly) UIColor *hc_strokeColor;
- (nullable UIColor *)hc_strokeColorAtIndex:(NSUInteger)index;

/**
 The text shadow. (read-only)
 
 @discussion Default value is nil (no shadow).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSShadow *hc_shadow;
- (nullable NSShadow *)hc_shadowAtIndex:(NSUInteger)index;

/**
 The strikethrough style. (read-only)
 
 @discussion Default value is NSUnderlineStyleNone (no strikethrough).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nonatomic, readonly) NSUnderlineStyle hc_strikethroughStyle;
- (NSUnderlineStyle)hc_strikethroughStyleAtIndex:(NSUInteger)index;

/**
 The strikethrough color. (read-only)
 
 @discussion Default value is nil (same as foreground color).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) UIColor *hc_strikethroughColor;
- (nullable UIColor *)hc_strikethroughColorAtIndex:(NSUInteger)index;

/**
 The underline style. (read-only)
 
 @discussion Default value is NSUnderlineStyleNone (no underline).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0
 */
@property (nonatomic, readonly) NSUnderlineStyle hc_underlineStyle;
- (NSUnderlineStyle)hc_underlineStyleAtIndex:(NSUInteger)index;

/**
 The underline color. (read-only)
 
 @discussion Default value is nil (same as foreground color).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) UIColor *hc_underlineColor;
- (nullable UIColor *)hc_underlineColorAtIndex:(NSUInteger)index;

/**
 Ligature formation control. (read-only)
 
 @discussion Default is int value 1. The ligature attribute determines what kinds 
 of ligatures should be used when displaying the string. A value of 0 indicates 
 that only ligatures essential for proper rendering of text should be used, 
 1 indicates that standard ligatures should be used, and 2 indicates that all 
 available ligatures should be used. Which ligatures are standard depends on the 
 script and possibly the font.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_ligature;
- (nullable NSNumber *)hc_ligatureAtIndex:(NSUInteger)index;

/**
 The text effect. (read-only)
 
 @discussion Default is nil (no effect). The only currently supported value
 is NSTextEffectLetterpressStyle.
 @discussion Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) NSString *hc_textEffect;
- (nullable NSString *)hc_textEffectAtIndex:(NSUInteger)index;

/**
 The skew to be applied to glyphs. (read-only)
 
 @discussion Default is 0 (no skew).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_obliqueness;
- (nullable NSNumber *)hc_obliquenessAtIndex:(NSUInteger)index;

/**
 The log of the expansion factor to be applied to glyphs. (read-only)
 
 @discussion Default is 0 (no expansion).
 @discussion Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_expansion;
- (nullable NSNumber *)hc_expansionAtIndex:(NSUInteger)index;

/**
 The character's offset from the baseline, in points. (read-only)
 
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readonly) NSNumber *hc_baselineOffset;
- (nullable NSNumber *)hc_baselineOffsetAtIndex:(NSUInteger)index;

/**
 Glyph orientation control. (read-only)
 
 @discussion Default is NO. A value of NO indicates that horizontal glyph forms 
 are to be used, YES indicates that vertical glyph forms are to be used.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:4.3  hcText:6.0
 */
@property (nonatomic, readonly) BOOL hc_verticalGlyphForm;
- (BOOL)hc_verticalGlyphFormAtIndex:(NSUInteger)index;

/**
 Specifies text language. (read-only)
 
 @discussion Value must be a NSString containing a locale identifier. Default is 
 unset. When this attribute is set to a valid identifier, it will be used to select 
 localized glyphs (if supported by the font) and locale-specific line breaking rules.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:7.0  hcText:7.0
 */
@property (nullable, nonatomic, strong, readonly) NSString *hc_language;
- (nullable NSString *)hc_languageAtIndex:(NSUInteger)index;

/**
 Specifies a bidirectional override or embedding. (read-only)
 
 @discussion See alse NSWritingDirection and NSWritingDirectionAttributeName.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:7.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSArray<NSNumber *> *hc_writingDirection;
- (nullable NSArray<NSNumber *> *)hc_writingDirectionAtIndex:(NSUInteger)index;

/**
 An NSParagraphStyle object which is used to specify things like
 line alignment, tab rulers, writing direction, etc. (read-only)
 
 @discussion Default is nil ([NSParagraphStyle defaultParagraphStyle]).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) NSParagraphStyle *hc_paragraphStyle;
- (nullable NSParagraphStyle *)hc_paragraphStyleAtIndex:(NSUInteger)index;

#pragma mark - Get paragraph attribute as property
///=============================================================================
/// @name Get paragraph attribute as property
///=============================================================================

/**
 The text alignment (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion Natural text alignment is realized as left or right alignment 
 depending on the line sweep direction of the first script contained in the paragraph.
 @discussion Default is NSTextAlignmentNatural.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) NSTextAlignment hc_alignment;
- (NSTextAlignment)hc_alignmentAtIndex:(NSUInteger)index;

/**
 The mode that should be used to break lines (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the line break mode to be used laying out the paragraph's text.
 @discussion Default is NSLineBreakByWordWrapping.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) NSLineBreakMode hc_lineBreakMode;
- (NSLineBreakMode)hc_lineBreakModeAtIndex:(NSUInteger)index;

/**
 The distance in points between the bottom of one line fragment and the top of the next.
 (A wrapper for NSParagraphStyle) (read-only)
 
 @discussion This value is always nonnegative. This value is included in the line 
 fragment heights in the layout manager.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_lineSpacing;
- (CGFloat)hc_lineSpacingAtIndex:(NSUInteger)index;

/**
 The space after the end of the paragraph (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the space (measured in points) added at the 
 end of the paragraph to separate it from the following paragraph. This value must
 be nonnegative. The space between paragraphs is determined by adding the previous 
 paragraph's paragraphSpacing and the current paragraph's paragraphSpacingBefore.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_paragraphSpacing;
- (CGFloat)hc_paragraphSpacingAtIndex:(NSUInteger)index;

/**
 The distance between the paragraph's top and the beginning of its text content.
 (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the space (measured in points) between the 
 paragraph's top and the beginning of its text content.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_paragraphSpacingBefore;
- (CGFloat)hc_paragraphSpacingBeforeAtIndex:(NSUInteger)index;

/**
 The indentation of the first line (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the distance (in points) from the leading margin 
 of a text container to the beginning of the paragraph's first line. This value 
 is always nonnegative.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_firstLineHeadIndent;
- (CGFloat)hc_firstLineHeadIndentAtIndex:(NSUInteger)index;

/**
 The indentation of the receiver's lines other than the first. (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the distance (in points) from the leading margin 
 of a text container to the beginning of lines other than the first. This value is 
 always nonnegative.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_headIndent;
- (CGFloat)hc_headIndentAtIndex:(NSUInteger)index;

/**
 The trailing indentation (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion If positive, this value is the distance from the leading margin 
 (for example, the left margin in left-to-right text). If 0 or negative, it's the 
 distance from the trailing margin.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_tailIndent;
- (CGFloat)hc_tailIndentAtIndex:(NSUInteger)index;

/**
 The receiver's minimum height (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the minimum height in points that any line in 
 the receiver will occupy, regardless of the font size or size of any attached graphic. 
 This value must be nonnegative.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_minimumLineHeight;
- (CGFloat)hc_minimumLineHeightAtIndex:(NSUInteger)index;

/**
 The receiver's maximum line height (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the maximum height in points that any line in 
 the receiver will occupy, regardless of the font size or size of any attached graphic. 
 This value is always nonnegative. Glyphs and graphics exceeding this height will 
 overlap neighboring lines; however, a maximum height of 0 implies no line height limit. 
 Although this limit applies to the line itself, line spacing adds extra space between adjacent lines.
 @discussion Default is 0 (no limit).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_maximumLineHeight;
- (CGFloat)hc_maximumLineHeightAtIndex:(NSUInteger)index;

/**
 The line height multiple (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property contains the line break mode to be used laying out the paragraph's text.
 @discussion Default is 0 (no multiple).
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) CGFloat hc_lineHeightMultiple;
- (CGFloat)hc_lineHeightMultipleAtIndex:(NSUInteger)index;

/**
 The base writing direction (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion If you specify NSWritingDirectionNaturalDirection, the receiver resolves 
 the writing direction to either NSWritingDirectionLeftToRight or NSWritingDirectionRightToLeft, 
 depending on the direction for the user's `language` preference setting.
 @discussion Default is NSWritingDirectionNatural.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readonly) NSWritingDirection hc_baseWritingDirection;
- (NSWritingDirection)hc_baseWritingDirectionAtIndex:(NSUInteger)index;

/**
 The paragraph's threshold for hyphenation. (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion Valid values lie between 0.0 and 1.0 inclusive. Hyphenation is attempted 
 when the ratio of the text width (as broken without hyphenation) to the width of the 
 line fragment is less than the hyphenation factor. When the paragraph's hyphenation 
 factor is 0.0, the layout manager's hyphenation factor is used instead. When both 
 are 0.0, hyphenation is disabled.
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nonatomic, readonly) float hc_hyphenationFactor;
- (float)hc_hyphenationFactorAtIndex:(NSUInteger)index;

/**
 The document-wide default tab interval (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion This property represents the default tab interval in points. Tabs after the 
 last specified in tabStops are placed at integer multiples of this distance (if positive).
 @discussion Default is 0.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:7.0  UIKit:7.0  hcText:7.0
 */
@property (nonatomic, readonly) CGFloat hc_defaultTabInterval;
- (CGFloat)hc_defaultTabIntervalAtIndex:(NSUInteger)index;

/**
 An array of NSTextTab objects representing the receiver's tab stops.
 (A wrapper for NSParagraphStyle). (read-only)
 
 @discussion The NSTextTab objects, sorted by location, define the tab stops for 
 the paragraph style.
 @discussion Default is 12 TabStops with 28.0 tab interval.
 @discussion Get this property returns the first character's attribute.
 @since CoreText:7.0  UIKit:7.0  hcText:7.0
 */
@property (nullable, nonatomic, copy, readonly) NSArray<NSTextTab *> *hc_tabStops;
- (nullable NSArray<NSTextTab *> *)hc_tabStopsAtIndex:(NSUInteger)index;

#pragma mark - Get hcText attribute as property
///=============================================================================
/// @name Get hcText attribute as property
///=============================================================================

/**
 The text shadow. (read-only)
 
 @discussion Default value is nil (no shadow).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextShadow *hc_textShadow;
- (nullable HCTextShadow *)hc_textShadowAtIndex:(NSUInteger)index;

/**
 The text inner shadow. (read-only)
 
 @discussion Default value is nil (no shadow).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextShadow *hc_textInnerShadow;
- (nullable HCTextShadow *)hc_textInnerShadowAtIndex:(NSUInteger)index;

/**
 The text underline. (read-only)
 
 @discussion Default value is nil (no underline).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextDecoration *hc_textUnderline;
- (nullable HCTextDecoration *)hc_textUnderlineAtIndex:(NSUInteger)index;

/**
 The text strikethrough. (read-only)
 
 @discussion Default value is nil (no strikethrough).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextDecoration *hc_textStrikethrough;
- (nullable HCTextDecoration *)hc_textStrikethroughAtIndex:(NSUInteger)index;

/**
 The text border. (read-only)
 
 @discussion Default value is nil (no border).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextBorder *hc_textBorder;
- (nullable HCTextBorder *)hc_textBorderAtIndex:(NSUInteger)index;

/**
 The text background border. (read-only)
 
 @discussion Default value is nil (no background border).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readonly) HCTextBorder *hc_textBackgroundBorder;
- (nullable HCTextBorder *)hc_textBackgroundBorderAtIndex:(NSUInteger)index;

/**
 The glyph transform. (read-only)
 
 @discussion Default value is CGAffineTransformIdentity (no transform).
 @discussion Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nonatomic, readonly) CGAffineTransform hc_textGlyphTransform;
- (CGAffineTransform)hc_textGlyphTransformAtIndex:(NSUInteger)index;


#pragma mark - Query for hcText
///=============================================================================
/// @name Query for hcText
///=============================================================================

/**
 Returns the plain text from a range.
 If there's `HCTextBackedStringAttributeName` attribute, the backed string will
 replace the attributed string range.
 
 @param range A range in receiver.
 @return The plain text.
 */
- (nullable NSString *)hc_plainTextForRange:(NSRange)range;


#pragma mark - Create attachment string for hcText
///=============================================================================
/// @name Create attachment string for hcText
///=============================================================================

/**
 Creates and returns an attachment.
 
 @param content      The attachment (UIImage/UIView/CALayer).
 @param contentMode  The attachment's content mode.
 @param width        The attachment's container width in layout.
 @param ascent       The attachment's container ascent in layout.
 @param descent      The attachment's container descent in layout.
 
 @return An attributed string, or nil if an error occurs.
 @since hcText:6.0
 */
+ (NSMutableAttributedString *)hc_attachmentStringWithContent:(nullable id)content
                                                  contentMode:(UIViewContentMode)contentMode
                                                        width:(CGFloat)width
                                                       ascent:(CGFloat)ascent
                                                      descent:(CGFloat)descent;

/**
 Creates and returns an attachment.
 
 
 Example: ContentMode:bottom Alignment:Top.
 
      The text      The attachment holder
         ↓                ↓
     ─────────┌──────────────────────┐───────
        / \   │                      │ / ___|
       / _ \  │                      │| |
      / ___ \ │                      │| |___     ←── The text line
     /_/   \_\│    ██████████████    │ \____|
     ─────────│    ██████████████    │───────
              │    ██████████████    │
              │    ██████████████ ←───────────────── The attachment content
              │    ██████████████    │
              └──────────────────────┘

 @param content        The attachment (UIImage/UIView/CALayer).
 @param contentMode    The attachment's content mode in attachment holder
 @param attachmentSize The attachment holder's size in text layout.
 @param fontSize       The attachment will align to this font.
 @param alignment      The attachment holder's alignment to text line.
 
 @return An attributed string, or nil if an error occurs.
 @since hcText:6.0
 */
+ (NSMutableAttributedString *)hc_attachmentStringWithContent:(nullable id)content
                                                  contentMode:(UIViewContentMode)contentMode
                                               attachmentSize:(CGSize)attachmentSize
                                                  alignToFont:(UIFont *)font
                                                    alignment:(HCTextVerticalAlignment)alignment;

/**
 Creates and returns an attahment from a fourquare image as if it was an emoji.
 
 @param image     A fourquare image.
 @param fontSize  The font size.
 
 @return An attributed string, or nil if an error occurs.
 @since hcText:6.0
 */
+ (nullable NSMutableAttributedString *)hc_attachmentStringWithEmojiImage:(UIImage *)image
                                                                 fontSize:(CGFloat)fontSize;

#pragma mark - Utility
///=============================================================================
/// @name Utility
///=============================================================================

/**
 Returns NSMakeRange(0, self.length).
 */
- (NSRange)hc_rangeOfAll;

/**
 If YES, it share the same attribute in entire text range.
 */
- (BOOL)hc_isSharedAttributesInAllRange;

/**
 If YES, it can be drawn with the [drawWithRect:options:context:] method or displayed with UIKit.
 If NO, it should be drawn with CoreText or hcText.
 
 @discussion If the method returns NO, it means that there's at least one attribute 
 which is not supported by UIKit (such as CTParagraphStyleRef). If display this string
 in UIKit, it may lose some attribute, or even crash the app.
 */
- (BOOL)hc_canDrawWithUIKit;

@end




/**
 Set pre-defined attributes to attributed string.
 All properties defined in UIKit, CoreText and hcText are included.
 */
@interface NSMutableAttributedString (HCText)

#pragma mark - Set character attribute
///=============================================================================
/// @name Set character attribute
///=============================================================================

/**
 Sets the attributes to the entire text string.
 
 @discussion The old attributes will be removed.
 
 @param attributes  A dictionary containing the attributes to set, or nil to remove all attributes.
 */
- (void)hc_setAttributes:(nullable NSDictionary<NSString *, id> *)attributes;
- (void)setHc_attributes:(nullable NSDictionary<NSString *, id> *)attributes;

/**
 Sets an attribute with the given name and value to the entire text string.
 
 @param name   A string specifying the attribute name.
 @param value  The attribute value associated with name. Pass `nil` or `NSNull` to
 remove the attribute.
 */
- (void)hc_setAttribute:(NSString *)name value:(nullable id)value;

/**
 Sets an attribute with the given name and value to the characters in the specified range.
 
 @param name   A string specifying the attribute name.
 @param value  The attribute value associated with name. Pass `nil` or `NSNull` to
 remove the attribute.
 @param range  The range of characters to which the specified attribute/value pair applies.
 */
- (void)hc_setAttribute:(NSString *)name value:(nullable id)value range:(NSRange)range;

/**
 Removes all attributes in the specified range.
 
 @param range  The range of characters.
 */
- (void)hc_removeAttributesInRange:(NSRange)range;


#pragma mark - Set character attribute as property
///=============================================================================
/// @name Set character attribute as property
///=============================================================================

/**
 The font of the text.
 
 @discussion Default is Helvetica (Neue) 12.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) UIFont *hc_font;
- (void)hc_setFont:(nullable UIFont *)font range:(NSRange)range;

/**
 A kerning adjustment.
 
 @discussion Default is standard kerning. The kerning attribute indicate how many 
 points the following character should be shifted from its default offset as 
 defined by the current character's font in points; a positive kern indicates a 
 shift farther along and a negative kern indicates a shift closer to the current 
 character. If this attribute is not present, standard kerning will be used. 
 If this attribute is set to 0.0, no kerning will be done at all.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_kern;
- (void)hc_setKern:(nullable NSNumber *)kern range:(NSRange)range;

/**
 The foreground color.
 
 @discussion Default is Black.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) UIColor *hc_color;
- (void)hc_setColor:(nullable UIColor *)color range:(NSRange)range;

/**
 The background color.
 
 @discussion Default is nil (or no background).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nullable, nonatomic, strong, readwrite) UIColor *hc_backgroundColor;
- (void)hc_setBackgroundColor:(nullable UIColor *)backgroundColor range:(NSRange)range;

/**
 The stroke width.
 
 @discussion Default value is 0.0 (no stroke). This attribute, interpreted as
 a percentage of font point size, controls the text drawing mode: positive 
 values effect drawing with stroke only; negative values are for stroke and fill.
 A typical value for outlined text is 3.0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_strokeWidth;
- (void)hc_setStrokeWidth:(nullable NSNumber *)strokeWidth range:(NSRange)range;

/**
 The stroke color.
 
 @discussion Default value is nil (same as foreground color).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) UIColor *hc_strokeColor;
- (void)hc_setStrokeColor:(nullable UIColor *)strokeColor range:(NSRange)range;

/**
 The text shadow.
 
 @discussion Default value is nil (no shadow).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSShadow *hc_shadow;
- (void)hc_setShadow:(nullable NSShadow *)shadow range:(NSRange)range;

/**
 The strikethrough style.
 
 @discussion Default value is NSUnderlineStyleNone (no strikethrough).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nonatomic, readwrite) NSUnderlineStyle hc_strikethroughStyle;
- (void)hc_setStrikethroughStyle:(NSUnderlineStyle)strikethroughStyle range:(NSRange)range;

/**
 The strikethrough color.
 
 @discussion Default value is nil (same as foreground color).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) UIColor *hc_strikethroughColor;
- (void)hc_setStrikethroughColor:(nullable UIColor *)strikethroughColor range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 The underline style.
 
 @discussion Default value is NSUnderlineStyleNone (no underline).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0
 */
@property (nonatomic, readwrite) NSUnderlineStyle hc_underlineStyle;
- (void)hc_setUnderlineStyle:(NSUnderlineStyle)underlineStyle range:(NSRange)range;

/**
 The underline color.
 
 @discussion Default value is nil (same as foreground color).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) UIColor *hc_underlineColor;
- (void)hc_setUnderlineColor:(nullable UIColor *)underlineColor range:(NSRange)range;

/**
 Ligature formation control.
 
 @discussion Default is int value 1. The ligature attribute determines what kinds 
 of ligatures should be used when displaying the string. A value of 0 indicates 
 that only ligatures essential for proper rendering of text should be used, 
 1 indicates that standard ligatures should be used, and 2 indicates that all 
 available ligatures should be used. Which ligatures are standard depends on the 
 script and possibly the font.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:3.2  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_ligature;
- (void)hc_setLigature:(nullable NSNumber *)ligature range:(NSRange)range;

/**
 The text effect.
 
 @discussion Default is nil (no effect). The only currently supported value
 is NSTextEffectLetterpressStyle.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) NSString *hc_textEffect;
- (void)hc_setTextEffect:(nullable NSString *)textEffect range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 The skew to be applied to glyphs. 
 
 @discussion Default is 0 (no skew).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_obliqueness;
- (void)hc_setObliqueness:(nullable NSNumber *)obliqueness range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 The log of the expansion factor to be applied to glyphs.
 
 @discussion Default is 0 (no expansion).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_expansion;
- (void)hc_setExpansion:(nullable NSNumber *)expansion range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 The character's offset from the baseline, in points. 
 
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:7.0
 */
@property (nullable, nonatomic, strong, readwrite) NSNumber *hc_baselineOffset;
- (void)hc_setBaselineOffset:(nullable NSNumber *)baselineOffset range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 Glyph orientation control.
 
 @discussion Default is NO. A value of NO indicates that horizontal glyph forms 
 are to be used, YES indicates that vertical glyph forms are to be used.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:4.3  hcText:6.0
 */
@property (nonatomic, readwrite) BOOL hc_verticalGlyphForm;
- (void)hc_setVerticalGlyphForm:(BOOL)verticalGlyphForm range:(NSRange)range;

/**
 Specifies text language.
 
 @discussion Value must be a NSString containing a locale identifier. Default is 
 unset. When this attribute is set to a valid identifier, it will be used to select 
 localized glyphs (if supported by the font) and locale-specific line breaking rules.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:7.0  hcText:7.0
 */
@property (nullable, nonatomic, strong, readwrite) NSString *hc_language;
- (void)hc_setLanguage:(nullable NSString *)language range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 Specifies a bidirectional override or embedding.
 
 @discussion See alse NSWritingDirection and NSWritingDirectionAttributeName.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:7.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSArray<NSNumber *> *hc_writingDirection;
- (void)hc_setWritingDirection:(nullable NSArray<NSNumber *> *)writingDirection range:(NSRange)range;

/**
 An NSParagraphStyle object which is used to specify things like
 line alignment, tab rulers, writing direction, etc.
 
 @discussion Default is nil ([NSParagraphStyle defaultParagraphStyle]).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) NSParagraphStyle *hc_paragraphStyle;
- (void)hc_setParagraphStyle:(nullable NSParagraphStyle *)paragraphStyle range:(NSRange)range;


#pragma mark - Set paragraph attribute as property
///=============================================================================
/// @name Set paragraph attribute as property
///=============================================================================

/**
 The text alignment (A wrapper for NSParagraphStyle).
 
 @discussion Natural text alignment is realized as left or right alignment
 depending on the line sweep direction of the first script contained in the paragraph.
 @discussion Default is NSTextAlignmentNatural.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) NSTextAlignment hc_alignment;
- (void)hc_setAlignment:(NSTextAlignment)alignment range:(NSRange)range;

/**
 The mode that should be used to break lines (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the line break mode to be used laying out the paragraph's text.
 @discussion Default is NSLineBreakByWordWrapping.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) NSLineBreakMode hc_lineBreakMode;
- (void)hc_setLineBreakMode:(NSLineBreakMode)lineBreakMode range:(NSRange)range;

/**
 The distance in points between the bottom of one line fragment and the top of the next.
 (A wrapper for NSParagraphStyle)
 
 @discussion This value is always nonnegative. This value is included in the line
 fragment heights in the layout manager.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_lineSpacing;
- (void)hc_setLineSpacing:(CGFloat)lineSpacing range:(NSRange)range;

/**
 The space after the end of the paragraph (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the space (measured in points) added at the
 end of the paragraph to separate it from the following paragraph. This value must
 be nonnegative. The space between paragraphs is determined by adding the previous
 paragraph's paragraphSpacing and the current paragraph's paragraphSpacingBefore.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_paragraphSpacing;
- (void)hc_setParagraphSpacing:(CGFloat)paragraphSpacing range:(NSRange)range;

/**
 The distance between the paragraph's top and the beginning of its text content.
 (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the space (measured in points) between the
 paragraph's top and the beginning of its text content.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_paragraphSpacingBefore;
- (void)hc_setParagraphSpacingBefore:(CGFloat)paragraphSpacingBefore range:(NSRange)range;

/**
 The indentation of the first line (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the distance (in points) from the leading margin
 of a text container to the beginning of the paragraph's first line. This value
 is always nonnegative.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_firstLineHeadIndent;
- (void)hc_setFirstLineHeadIndent:(CGFloat)firstLineHeadIndent range:(NSRange)range;

/**
 The indentation of the receiver's lines other than the first. (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the distance (in points) from the leading margin
 of a text container to the beginning of lines other than the first. This value is
 always nonnegative.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_headIndent;
- (void)hc_setHeadIndent:(CGFloat)headIndent range:(NSRange)range;

/**
 The trailing indentation (A wrapper for NSParagraphStyle).
 
 @discussion If positive, this value is the distance from the leading margin
 (for example, the left margin in left-to-right text). If 0 or negative, it's the
 distance from the trailing margin.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_tailIndent;
- (void)hc_setTailIndent:(CGFloat)tailIndent range:(NSRange)range;

/**
 The receiver's minimum height (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the minimum height in points that any line in
 the receiver will occupy, regardless of the font size or size of any attached graphic.
 This value must be nonnegative.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_minimumLineHeight;
- (void)hc_setMinimumLineHeight:(CGFloat)minimumLineHeight range:(NSRange)range;

/**
 The receiver's maximum line height (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the maximum height in points that any line in
 the receiver will occupy, regardless of the font size or size of any attached graphic.
 This value is always nonnegative. Glyphs and graphics exceeding this height will
 overlap neighboring lines; however, a maximum height of 0 implies no line height limit.
 Although this limit applies to the line itself, line spacing adds extra space between adjacent lines.
 @discussion Default is 0 (no limit).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_maximumLineHeight;
- (void)hc_setMaximumLineHeight:(CGFloat)maximumLineHeight range:(NSRange)range;

/**
 The line height multiple (A wrapper for NSParagraphStyle).
 
 @discussion This property contains the line break mode to be used laying out the paragraph's text.
 @discussion Default is 0 (no multiple).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) CGFloat hc_lineHeightMultiple;
- (void)hc_setLineHeightMultiple:(CGFloat)lineHeightMultiple range:(NSRange)range;

/**
 The base writing direction (A wrapper for NSParagraphStyle).
 
 @discussion If you specify NSWritingDirectionNaturalDirection, the receiver resolves
 the writing direction to either NSWritingDirectionLeftToRight or NSWritingDirectionRightToLeft,
 depending on the direction for the user's `language` preference setting.
 @discussion Default is NSWritingDirectionNatural.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:6.0  UIKit:6.0  hcText:6.0
 */
@property (nonatomic, readwrite) NSWritingDirection hc_baseWritingDirection;
- (void)hc_setBaseWritingDirection:(NSWritingDirection)baseWritingDirection range:(NSRange)range;

/**
 The paragraph's threshold for hyphenation. (A wrapper for NSParagraphStyle).
 
 @discussion Valid values lie between 0.0 and 1.0 inclusive. Hyphenation is attempted
 when the ratio of the text width (as broken without hyphenation) to the width of the
 line fragment is less than the hyphenation factor. When the paragraph's hyphenation
 factor is 0.0, the layout manager's hyphenation factor is used instead. When both
 are 0.0, hyphenation is disabled.
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since UIKit:6.0
 */
@property (nonatomic, readwrite) float hc_hyphenationFactor;
- (void)hc_setHyphenationFactor:(float)hyphenationFactor range:(NSRange)range;

/**
 The document-wide default tab interval (A wrapper for NSParagraphStyle).
 
 @discussion This property represents the default tab interval in points. Tabs after the
 last specified in tabStops are placed at integer multiples of this distance (if positive).
 @discussion Default is 0.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:7.0  UIKit:7.0  hcText:7.0
 */
@property (nonatomic, readwrite) CGFloat hc_defaultTabInterval;
- (void)hc_setDefaultTabInterval:(CGFloat)defaultTabInterval range:(NSRange)range NS_AVAILABLE_IOS(7_0);

/**
 An array of NSTextTab objects representing the receiver's tab stops.
 (A wrapper for NSParagraphStyle).
 
 @discussion The NSTextTab objects, sorted by location, define the tab stops for
 the paragraph style.
 @discussion Default is 12 TabStops with 28.0 tab interval.
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since CoreText:7.0  UIKit:7.0  hcText:7.0
 */
@property (nullable, nonatomic, copy, readwrite) NSArray<NSTextTab *> *hc_tabStops;
- (void)hc_setTabStops:(nullable NSArray<NSTextTab *> *)tabStops range:(NSRange)range NS_AVAILABLE_IOS(7_0);

#pragma mark - Set hcText attribute as property
///=============================================================================
/// @name Set hcText attribute as property
///=============================================================================

/**
 The text shadow.
 
 @discussion Default value is nil (no shadow).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextShadow *hc_textShadow;
- (void)hc_setTextShadow:(nullable HCTextShadow *)textShadow range:(NSRange)range;

/**
 The text inner shadow.
 
 @discussion Default value is nil (no shadow).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextShadow *hc_textInnerShadow;
- (void)hc_setTextInnerShadow:(nullable HCTextShadow *)textInnerShadow range:(NSRange)range;

/**
 The text underline.
 
 @discussion Default value is nil (no underline).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextDecoration *hc_textUnderline;
- (void)hc_setTextUnderline:(nullable HCTextDecoration *)textUnderline range:(NSRange)range;

/**
 The text strikethrough.
 
 @discussion Default value is nil (no strikethrough).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextDecoration *hc_textStrikethrough;
- (void)hc_setTextStrikethrough:(nullable HCTextDecoration *)textStrikethrough range:(NSRange)range;

/**
 The text border.
 
 @discussion Default value is nil (no border).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextBorder *hc_textBorder;
- (void)hc_setTextBorder:(nullable HCTextBorder *)textBorder range:(NSRange)range;

/**
 The text background border.
 
 @discussion Default value is nil (no background border).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nullable, nonatomic, strong, readwrite) HCTextBorder *hc_textBackgroundBorder;
- (void)hc_setTextBackgroundBorder:(nullable HCTextBorder *)textBackgroundBorder range:(NSRange)range;

/**
 The glyph transform.
 
 @discussion Default value is CGAffineTransformIdentity (no transform).
 @discussion Set this property applies to the entire text string.
             Get this property returns the first character's attribute.
 @since hcText:6.0
 */
@property (nonatomic, readwrite) CGAffineTransform hc_textGlyphTransform;
- (void)hc_setTextGlyphTransform:(CGAffineTransform)textGlyphTransform range:(NSRange)range;


#pragma mark - Set discontinuous attribute for range
///=============================================================================
/// @name Set discontinuous attribute for range
///=============================================================================

- (void)hc_setSuperscript:(nullable NSNumber *)superscript range:(NSRange)range;
- (void)hc_setGlyphInfo:(nullable CTGlyphInfoRef)glyphInfo range:(NSRange)range;
- (void)hc_setCharacterShape:(nullable NSNumber *)characterShape range:(NSRange)range;
- (void)hc_setRunDelegate:(nullable CTRunDelegateRef)runDelegate range:(NSRange)range;
- (void)hc_setBaselineClass:(nullable CFStringRef)baselineClass range:(NSRange)range;
- (void)hc_setBaselineInfo:(nullable CFDictionaryRef)baselineInfo range:(NSRange)range;
- (void)hc_setBaselineReferenceInfo:(nullable CFDictionaryRef)referenceInfo range:(NSRange)range;
- (void)hc_setRubyAnnotation:(nullable CTRubyAnnotationRef)ruby range:(NSRange)range NS_AVAILABLE_IOS(8_0);
- (void)hc_setAttachment:(nullable NSTextAttachment *)attachment range:(NSRange)range NS_AVAILABLE_IOS(7_0);
- (void)hc_setLink:(nullable id)link range:(NSRange)range NS_AVAILABLE_IOS(7_0);
- (void)hc_setTextBackedString:(nullable HCTextBackedString *)textBackedString range:(NSRange)range;
- (void)hc_setTextBinding:(nullable HCTextBinding *)textBinding range:(NSRange)range;
- (void)hc_setTextAttachment:(nullable HCTextAttachment *)textAttachment range:(NSRange)range;
- (void)hc_setTextHighlight:(nullable HCTextHighlight *)textHighlight range:(NSRange)range;
- (void)hc_setTextBlockBorder:(nullable HCTextBorder *)textBlockBorder range:(NSRange)range;
- (void)hc_setTextRubyAnnotation:(nullable HCTextRubyAnnotation *)ruby range:(NSRange)range NS_AVAILABLE_IOS(8_0);


#pragma mark - Convenience methods for text highlight
///=============================================================================
/// @name Convenience methods for text highlight
///=============================================================================

/**
 Convenience method to set text highlight
 
 @param range           text range
 @param color           text color (pass nil to ignore)
 @param backgroundColor text background color when highlight
 @param userInfo        user information dictionary (pass nil to ignore)
 @param tapAction       tap action when user tap the highlight (pass nil to ignore)
 @param longPressAction long press action when user long press the highlight (pass nil to ignore)
 */
- (void)hc_setTextHighlightRange:(NSRange)range
                           color:(nullable UIColor *)color
                 backgroundColor:(nullable UIColor *)backgroundColor
                        userInfo:(nullable NSDictionary *)userInfo
                       tapAction:(nullable HCTextAction)tapAction
                 longPressAction:(nullable HCTextAction)longPressAction;

/**
 Convenience method to set text highlight
 
 @param range           text range
 @param color           text color (pass nil to ignore)
 @param backgroundColor text background color when highlight
 @param tapAction       tap action when user tap the highlight (pass nil to ignore)
 */
- (void)hc_setTextHighlightRange:(NSRange)range
                           color:(nullable UIColor *)color
                 backgroundColor:(nullable UIColor *)backgroundColor
                       tapAction:(nullable HCTextAction)tapAction;

/**
 Convenience method to set text highlight
 
 @param range           text range
 @param color           text color (pass nil to ignore)
 @param backgroundColor text background color when highlight
 @param userInfo        tap action when user tap the highlight (pass nil to ignore)
 */
- (void)hc_setTextHighlightRange:(NSRange)range
                           color:(nullable UIColor *)color
                 backgroundColor:(nullable UIColor *)backgroundColor
                        userInfo:(nullable NSDictionary *)userInfo;

#pragma mark - Utilities
///=============================================================================
/// @name Utilities
///=============================================================================

/**
 Inserts into the receiver the characters of a given string at a given location.
 The new string inherit the attributes of the first replaced character from location.
 
 @param string  The string to insert into the receiver, must not be nil.
 @param location The location at which string is inserted. The location must not 
    exceed the bounds of the receiver.
 @throw Raises an NSRangeException if the location out of bounds.
 */
- (void)hc_insertString:(NSString *)string atIndex:(NSUInteger)location;

/**
 Adds to the end of the receiver the characters of a given string.
 The new string inherit the attributes of the receiver's tail.
 
 @param string  The string to append to the receiver, must not be nil.
 */
- (void)hc_appendString:(NSString *)string;

/**
 Set foreground color with [UIColor clearColor] in joined-emoji range.
 Emoji drawing will not be affected by the foreground color.
 
 @discussion In iOS 8.3, Apple releases some new diversified emojis. 
 There's some single emoji which can be assembled to a new 'joined-emoji'.
 The joiner is unicode character 'ZERO WIDTH JOINER' (U+200D).
 For example: 👨👩👧👧 -> 👨‍👩‍👧‍👧.
 
 When there are more than 5 'joined-emoji' in a same CTLine, CoreText may render some
 extra glyphs above the emoji. It's a bug in CoreText, try this method to avoid.
 This bug is fixed in iOS 9.
 */
- (void)hc_setClearColorToJoinedEmoji;

/**
 Removes all discontinuous attributes in a specified range.
 See `allDiscontinuousAttributeKeys`.
 
 @param range A text range.
 */
- (void)hc_removeDiscontinuousAttributesInRange:(NSRange)range;

/**
 Returns all discontinuous attribute keys, such as RunDelegate/Attachment/Ruby.
 
 @discussion These attributes can only set to a specified range of text, and
 should not extend to other range when editing text.
 */
+ (NSArray<NSString *> *)hc_allDiscontinuousAttributeKeys;

@end

NS_ASSUME_NONNULL_END
