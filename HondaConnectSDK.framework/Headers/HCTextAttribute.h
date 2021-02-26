//
//  HCTextAttribute.h
//  HCText <https://github.com/ibireme/HCText>
//
//  Created by ibireme on 14/10/26.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum Define

/// The attribute type
typedef NS_OPTIONS(NSInteger, HCTextAttributeType) {
    HCTextAttributeTypeNone     = 0,
    HCTextAttributeTypeUIKit    = 1 << 0, ///< UIKit attributes, such as UILabel/UITextField/drawInRect.
    HCTextAttributeTypeCoreText = 1 << 1, ///< CoreText attributes, used by CoreText.
    HCTextAttributeTypeHCText   = 1 << 2, ///< HCText attributes, used by HCText.
};

/// Get the attribute type from an attribute name.
extern HCTextAttributeType HCTextAttributeGetType(NSString *attributeName);

/**
 Line style in HCText (similar to NSUnderlineStyle).
 */
typedef NS_OPTIONS (NSInteger, HCTextLineStyle) {
    // basic style (bitmask:0xFF)
    HCTextLineStyleNone       = 0x00, ///< (        ) Do not draw a line (Default).
    HCTextLineStyleSingle     = 0x01, ///< (──────) Draw a single line.
    HCTextLineStyleThick      = 0x02, ///< (━━━━━━━) Draw a thick line.
    HCTextLineStyleDouble     = 0x09, ///< (══════) Draw a double line.
    
    // style pattern (bitmask:0xF00)
    HCTextLineStylePatternSolid      = 0x000, ///< (────────) Draw a solid line (Default).
    HCTextLineStylePatternDot        = 0x100, ///< (‑ ‑ ‑ ‑ ‑ ‑) Draw a line of dots.
    HCTextLineStylePatternDash       = 0x200, ///< (— — — —) Draw a line of dashes.
    HCTextLineStylePatternDashDot    = 0x300, ///< (— ‑ — ‑ — ‑) Draw a line of alternating dashes and dots.
    HCTextLineStylePatternDashDotDot = 0x400, ///< (— ‑ ‑ — ‑ ‑) Draw a line of alternating dashes and two dots.
    HCTextLineStylePatternCircleDot  = 0x900, ///< (••••••••••••) Draw a line of small circle dots.
};

/**
 Text vertical alignment.
 */
typedef NS_ENUM(NSInteger, HCTextVerticalAlignment) {
    HCTextVerticalAlignmentTop =    0, ///< Top alignment.
    HCTextVerticalAlignmentCenter = 1, ///< Center alignment.
    HCTextVerticalAlignmentBottom = 2, ///< Bottom alignment.
};

/**
 The direction define in HCText.
 */
typedef NS_OPTIONS(NSUInteger, HCTextDirection) {
    HCTextDirectionNone   = 0,
    HCTextDirectionTop    = 1 << 0,
    HCTextDirectionRight  = 1 << 1,
    HCTextDirectionBottom = 1 << 2,
    HCTextDirectionLeft   = 1 << 3,
};

/**
 The trunction type, tells the truncation engine which type of truncation is being requested.
 */
typedef NS_ENUM (NSUInteger, HCTextTruncationType) {
    /// No truncate.
    HCTextTruncationTypeNone   = 0,
    
    /// Truncate at the beginning of the line, leaving the end portion visible.
    HCTextTruncationTypeStart  = 1,
    
    /// Truncate at the end of the line, leaving the start portion visible.
    HCTextTruncationTypeEnd    = 2,
    
    /// Truncate in the middle of the line, leaving both the start and the end portions visible.
    HCTextTruncationTypeMiddle = 3,
};



#pragma mark - Attribute Name Defined in HCText

/// The value of this attribute is a `HCTextBackedString` object.
/// Use this attribute to store the original plain text if it is replaced by something else (such as attachment).
UIKIT_EXTERN NSString *const HCTextBackedStringAttributeName;

/// The value of this attribute is a `HCTextBinding` object.
/// Use this attribute to bind a range of text together, as if it was a single charactor.
UIKIT_EXTERN NSString *const HCTextBindingAttributeName;

/// The value of this attribute is a `HCTextShadow` object.
/// Use this attribute to add shadow to a range of text.
/// Shadow will be drawn below text glyphs. Use HCTextShadow.subShadow to add multi-shadow.
UIKIT_EXTERN NSString *const HCTextShadowAttributeName;

/// The value of this attribute is a `HCTextShadow` object.
/// Use this attribute to add inner shadow to a range of text.
/// Inner shadow will be drawn above text glyphs. Use HCTextShadow.subShadow to add multi-shadow.
UIKIT_EXTERN NSString *const HCTextInnerShadowAttributeName;

/// The value of this attribute is a `HCTextDecoration` object.
/// Use this attribute to add underline to a range of text.
/// The underline will be drawn below text glyphs.
UIKIT_EXTERN NSString *const HCTextUnderlineAttributeName;

/// The value of this attribute is a `HCTextDecoration` object.
/// Use this attribute to add strikethrough (delete line) to a range of text.
/// The strikethrough will be drawn above text glyphs.
UIKIT_EXTERN NSString *const HCTextStrikethroughAttributeName;

/// The value of this attribute is a `HCTextBorder` object.
/// Use this attribute to add cover border or cover color to a range of text.
/// The border will be drawn above the text glyphs.
UIKIT_EXTERN NSString *const HCTextBorderAttributeName;

/// The value of this attribute is a `HCTextBorder` object.
/// Use this attribute to add background border or background color to a range of text.
/// The border will be drawn below the text glyphs.
UIKIT_EXTERN NSString *const HCTextBackgroundBorderAttributeName;

/// The value of this attribute is a `HCTextBorder` object.
/// Use this attribute to add a code block border to one or more line of text.
/// The border will be drawn below the text glyphs.
UIKIT_EXTERN NSString *const HCTextBlockBorderAttributeName;

/// The value of this attribute is a `HCTextAttachment` object.
/// Use this attribute to add attachment to text.
/// It should be used in conjunction with a CTRunDelegate.
UIKIT_EXTERN NSString *const HCTextAttachmentAttributeName;

/// The value of this attribute is a `HCTextHighlight` object.
/// Use this attribute to add a touchable highlight state to a range of text.
UIKIT_EXTERN NSString *const HCTextHighlightAttributeName;

/// The value of this attribute is a `NSValue` object stores CGAffineTransform.
/// Use this attribute to add transform to each glyph in a range of text.
UIKIT_EXTERN NSString *const HCTextGlyphTransformAttributeName;



#pragma mark - String Token Define

UIKIT_EXTERN NSString *const HCTextAttachmentToken; ///< Object replacement character (U+FFFC), used for text attachment.
UIKIT_EXTERN NSString *const HCTextTruncationToken; ///< Horizontal ellipsis (U+2026), used for text truncation  "…".



#pragma mark - Attribute Value Define

/**
 The tap/long press action callback defined in HCText.
 
 @param containerView The text container view (such as HCLabel/HCTextView).
 @param text          The whole text.
 @param range         The text range in `text` (if no range, the range.location is NSNotFound).
 @param rect          The text frame in `containerView` (if no data, the rect is CGRectNull).
 */
typedef void(^HCTextAction)(UIView *containerView, NSAttributedString *text, NSRange range, CGRect rect);


/**
 HCTextBackedString objects are used by the NSAttributedString class cluster
 as the values for text backed string attributes (stored in the attributed 
 string under the key named HCTextBackedStringAttributeName).
 
 It may used for copy/paste plain text from attributed string.
 Example: If :) is replace by a custom emoji (such as😊), the backed string can be set to @":)".
 */
@interface HCTextBackedString : NSObject <NSCoding, NSCopying>
+ (instancetype)stringWithString:(nullable NSString *)string;
@property (nullable, nonatomic, copy) NSString *string; ///< backed string
@end


/**
 HCTextBinding objects are used by the NSAttributedString class cluster
 as the values for shadow attributes (stored in the attributed string under
 the key named HCTextBindingAttributeName).
 
 Add this to a range of text will make the specified characters 'binding together'.
 HCTextView will treat the range of text as a single character during text
 selection and edit.
 */
@interface HCTextBinding : NSObject <NSCoding, NSCopying>
+ (instancetype)bindingWithDeleteConfirm:(BOOL)deleteConfirm;
@property (nonatomic) BOOL deleteConfirm; ///< confirm the range when delete in HCTextView
@end


/**
 HCTextShadow objects are used by the NSAttributedString class cluster
 as the values for shadow attributes (stored in the attributed string under
 the key named HCTextShadowAttributeName or HCTextInnerShadowAttributeName).
 
 It's similar to `NSShadow`, but offers more options.
 */
@interface HCTextShadow : NSObject <NSCoding, NSCopying>
+ (instancetype)shadowWithColor:(nullable UIColor *)color offset:(CGSize)offset radius:(CGFloat)radius;

@property (nullable, nonatomic, strong) UIColor *color; ///< shadow color
@property (nonatomic) CGSize offset;                    ///< shadow offset
@property (nonatomic) CGFloat radius;                   ///< shadow blur radius
@property (nonatomic) CGBlendMode blendMode;            ///< shadow blend mode
@property (nullable, nonatomic, strong) HCTextShadow *subShadow;  ///< a sub shadow which will be added above the parent shadow

+ (instancetype)shadowWithNSShadow:(NSShadow *)nsShadow; ///< convert NSShadow to HCTextShadow
- (NSShadow *)nsShadow; ///< convert HCTextShadow to NSShadow
@end


/**
 HCTextDecorationLine objects are used by the NSAttributedString class cluster
 as the values for decoration line attributes (stored in the attributed string under
 the key named HCTextUnderlineAttributeName or HCTextStrikethroughAttributeName).
 
 When it's used as underline, the line is drawn below text glyphs;
 when it's used as strikethrough, the line is drawn above text glyphs.
 */
@interface HCTextDecoration : NSObject <NSCoding, NSCopying>
+ (instancetype)decorationWithStyle:(HCTextLineStyle)style;
+ (instancetype)decorationWithStyle:(HCTextLineStyle)style width:(nullable NSNumber *)width color:(nullable UIColor *)color;
@property (nonatomic) HCTextLineStyle style;                   ///< line style
@property (nullable, nonatomic, strong) NSNumber *width;       ///< line width (nil means automatic width)
@property (nullable, nonatomic, strong) UIColor *color;        ///< line color (nil means automatic color)
@property (nullable, nonatomic, strong) HCTextShadow *shadow;  ///< line shadow
@end


/**
 HCTextBorder objects are used by the NSAttributedString class cluster
 as the values for border attributes (stored in the attributed string under
 the key named HCTextBorderAttributeName or HCTextBackgroundBorderAttributeName).
 
 It can be used to draw a border around a range of text, or draw a background
 to a range of text.
 
 Example:
    ╭──────╮
    │ Text │
    ╰──────╯
 */
@interface HCTextBorder : NSObject <NSCoding, NSCopying>
+ (instancetype)borderWithLineStyle:(HCTextLineStyle)lineStyle lineWidth:(CGFloat)width strokeColor:(nullable UIColor *)color;
+ (instancetype)borderWithFillColor:(nullable UIColor *)color cornerRadius:(CGFloat)cornerRadius;
@property (nonatomic) HCTextLineStyle lineStyle;              ///< border line style
@property (nonatomic) CGFloat strokeWidth;                    ///< border line width
@property (nullable, nonatomic, strong) UIColor *strokeColor; ///< border line color
@property (nonatomic) CGLineJoin lineJoin;                    ///< border line join
@property (nonatomic) UIEdgeInsets insets;                    ///< border insets for text bounds
@property (nonatomic) CGFloat cornerRadius;                   ///< border corder radius
@property (nullable, nonatomic, strong) HCTextShadow *shadow; ///< border shadow
@property (nullable, nonatomic, strong) UIColor *fillColor;   ///< inner fill color
@end


/**
 HCTextAttachment objects are used by the NSAttributedString class cluster
 as the values for attachment attributes (stored in the attributed string under 
 the key named HCTextAttachmentAttributeName).
 
 When display an attributed string which contains `HCTextAttachment` object,
 the content will be placed in text metric. If the content is `UIImage`, 
 then it will be drawn to CGContext; if the content is `UIView` or `CALayer`, 
 then it will be added to the text container's view or layer.
 */
@interface HCTextAttachment : NSObject<NSCoding, NSCopying>
+ (instancetype)attachmentWithContent:(nullable id)content;
@property (nullable, nonatomic, strong) id content;             ///< Supported type: UIImage, UIView, CALayer
@property (nonatomic) UIViewContentMode contentMode;            ///< Content display mode.
@property (nonatomic) UIEdgeInsets contentInsets;               ///< The insets when drawing content.
@property (nullable, nonatomic, strong) NSDictionary *userInfo; ///< The user information dictionary.
@end


/**
 HCTextHighlight objects are used by the NSAttributedString class cluster
 as the values for touchable highlight attributes (stored in the attributed string
 under the key named HCTextHighlightAttributeName).
 
 When display an attributed string in `HCLabel` or `HCTextView`, the range of
 highlight text can be toucheds down by users. If a range of text is turned into 
 highlighted state, the `attributes` in `HCTextHighlight` will be used to modify
 (set or remove) the original attributes in the range for display.
 */
@interface HCTextHighlight : NSObject <NSCoding, NSCopying>

/**
 Attributes that you can apply to text in an attributed string when highlight.
 Key:   Same as CoreText/HCText Attribute Name.
 Value: Modify attribute value when highlight (NSNull for remove attribute).
 */
@property (nullable, nonatomic, copy) NSDictionary<NSString *, id> *attributes;

/**
 Creates a highlight object with specified attributes.
 
 @param attributes The attributes which will replace original attributes when highlight,
        If the value is NSNull, it will removed when highlight.
 */
+ (instancetype)highlightWithAttributes:(nullable NSDictionary<NSString *, id> *)attributes;

/**
 Convenience methods to create a default highlight with the specifeid background color.
 
 @param color The background border color.
 */
+ (instancetype)highlightWithBackgroundColor:(nullable UIColor *)color;

// Convenience methods below to set the `attributes`.
- (void)setFont:(nullable UIFont *)font;
- (void)setColor:(nullable UIColor *)color;
- (void)setStrokeWidth:(nullable NSNumber *)width;
- (void)setStrokeColor:(nullable UIColor *)color;
- (void)setShadow:(nullable HCTextShadow *)shadow;
- (void)setInnerShadow:(nullable HCTextShadow *)shadow;
- (void)setUnderline:(nullable HCTextDecoration *)underline;
- (void)setStrikethrough:(nullable HCTextDecoration *)strikethrough;
- (void)setBackgroundBorder:(nullable HCTextBorder *)border;
- (void)setBorder:(nullable HCTextBorder *)border;
- (void)setAttachment:(nullable HCTextAttachment *)attachment;

/**
 The user information dictionary, default is nil.
 */
@property (nullable, nonatomic, copy) NSDictionary *userInfo;

/**
 Tap action when user tap the highlight, default is nil.
 If the value is nil, HCTextView or HCLabel will ask it's delegate to handle the tap action.
 */
@property (nullable, nonatomic, copy) HCTextAction tapAction;

/**
 Long press action when user long press the highlight, default is nil.
 If the value is nil, HCTextView or HCLabel will ask it's delegate to handle the long press action.
 */
@property (nullable, nonatomic, copy) HCTextAction longPressAction;

@end

NS_ASSUME_NONNULL_END
