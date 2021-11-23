#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class InstacoverHelpersCompanion, WKWebView;

@protocol InstacoverInstaListener;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface InstacoverBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface InstacoverBase (InstacoverBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface InstacoverMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface InstacoverMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorInstacoverKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface InstacoverNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface InstacoverByte : InstacoverNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface InstacoverUByte : InstacoverNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface InstacoverShort : InstacoverNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface InstacoverUShort : InstacoverNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface InstacoverInt : InstacoverNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface InstacoverUInt : InstacoverNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface InstacoverLong : InstacoverNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface InstacoverULong : InstacoverNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface InstacoverFloat : InstacoverNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface InstacoverDouble : InstacoverNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface InstacoverBoolean : InstacoverNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Helpers")))
@interface InstacoverHelpers : InstacoverBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) InstacoverHelpersCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Helpers.Companion")))
@interface InstacoverHelpersCompanion : InstacoverBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InstacoverHelpersCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)buildUrlSessionId:(NSString *)sessionId __attribute__((swift_name("buildUrl(sessionId:)")));
@end;

__attribute__((swift_name("InstaListener")))
@protocol InstacoverInstaListener
@required
- (void)onInsufficientPermissions __attribute__((swift_name("onInsufficientPermissions()")));
- (void)onProcessDone __attribute__((swift_name("onProcessDone()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstacoverIntegration")))
@interface InstacoverInstacoverIntegration : InstacoverBase
- (instancetype)initWithSessionId:(NSString *)sessionId __attribute__((swift_name("init(sessionId:)"))) __attribute__((objc_designated_initializer));
- (WKWebView *)createWebViewStateChangeListener:(id<InstacoverInstaListener> _Nullable)stateChangeListener __attribute__((swift_name("createWebView(stateChangeListener:)")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MessageHandler")))
@interface InstacoverMessageHandler : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HelpersKt")))
@interface InstacoverHelpersKt : InstacoverBase
@property (class, readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
