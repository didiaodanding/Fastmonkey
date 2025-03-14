// Generated by Apple Swift version 4.1.2 effective-3.3.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import XCTest;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Nimble",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;
@class NSValue;
@class NSNumber;

/// A simple NSException subclass. It’s not required to subclass NSException (since the exception type is represented in the name) but this helps for identifying the exception through runtime type.
SWIFT_CLASS_NAMED("BadInstructionException")
@interface BadInstructionException : NSException
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// An Objective-C callable function, invoked from the <code>mach_exc_server</code> callback function <code>catch_mach_exception_raise_state</code> to push the <code>raiseBadInstructionException</code> function onto the stack.
+ (NSNumber * _Nonnull)receiveReply:(NSValue * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSExceptionName _Nonnull)aName reason:(NSString * _Nullable)aReason userInfo:(NSDictionary * _Nullable)aUserInfo SWIFT_UNAVAILABLE;
@end

@class XCTestCase;

/// Helper class providing access to the currently executing XCTestCase instance, if any
SWIFT_CLASS("_TtC6Nimble22CurrentTestCaseTracker")
@interface CurrentTestCaseTracker : NSObject <XCTestObservation>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CurrentTestCaseTracker * _Nonnull sharedInstance;)
+ (CurrentTestCaseTracker * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)testCaseWillStart:(XCTestCase * _Nonnull)testCase;
- (void)testCaseDidFinish:(XCTestCase * _Nonnull)testCase;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Encapsulates the failure message that matchers can report to the end user.
/// This is shared state between Nimble and matchers that mutate this value.
SWIFT_CLASS("_TtC6Nimble14FailureMessage")
@interface FailureMessage : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_PROTOCOL("_TtP6Nimble13NMBComparable_")
@protocol NMBComparable
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end

@protocol NMBMatcher;

SWIFT_CLASS("_TtC6Nimble14NMBExpectation")
@interface NMBExpectation : NSObject
- (nonnull instancetype)initWithActualBlock:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock negative:(BOOL)negative file:(NSString * _Nonnull)file line:(NSUInteger)line OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull withTimeout)(NSTimeInterval);
@property (nonatomic, readonly, copy) void (^ _Nonnull to)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNot)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNotWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull notTo)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull notToWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventually)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyNot)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyNotWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNotEventually)(id <NMBMatcher> _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNotEventuallyWithDescription)(id <NMBMatcher> _Nonnull, NSString * _Nonnull);
+ (void)failWithMessage:(NSString * _Nonnull)message file:(NSString * _Nonnull)file line:(NSUInteger)line;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble21NMBExpectationMessage")
@interface NMBExpectationMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class SourceLocation;

/// Objective-C interface to the Swift variant of Matcher.
SWIFT_PROTOCOL("_TtP6Nimble10NMBMatcher_")
@protocol NMBMatcher
- (BOOL)matches:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (BOOL)doesNotMatch:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC6Nimble23NMBObjCBeCloseToMatcher")
@interface NMBObjCBeCloseToMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * _Nullable (^ _Nonnull)(void))actualExpression failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (BOOL)doesNotMatch:(NSObject * _Nullable (^ _Nonnull)(void))actualExpression failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NMBObjCBeCloseToMatcher * _Nonnull (^ _Nonnull within)(double);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble14NMBObjCMatcher")
@interface NMBObjCMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (BOOL)doesNotMatch:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NMBObjCRaiseExceptionMatcher;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCRaiseExceptionMatcher * _Nonnull)raiseExceptionMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)haveCountMatcher:(NSNumber * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end

@class NMBPredicate;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)satisfyAnyOfMatcher:(NSArray<id <NMBMatcher>> * _Nonnull)matchers SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)endWithMatcher:(id _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beNilMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)satisfyAllOfMatcher:(NSArray<id <NMBMatcher>> * _Nonnull)matchers SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beEmptyMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beIdenticalToMatcher:(NSObject * _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beginWithMatcher:(id _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beGreaterThanOrEqualToMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)containMatcher:(NSArray<NSObject *> * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beGreaterThanMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beLessThanMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> _Nonnull)equalMatcher:(NSObject * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)containElementSatisfyingMatcher:(BOOL (^ _Nonnull)(NSObject * _Nonnull))predicate SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> _Nonnull)matchMatcher:(NSString * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)allPassMatcher:(id <NMBMatcher> _Nonnull)matcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> _Nonnull)beAnInstanceOfMatcher:(Class _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beLessThanOrEqualToMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCBeCloseToMatcher * _Nonnull)beCloseToMatcher:(NSNumber * _Nonnull)expected within:(double)within SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> _Nonnull)beAKindOfMatcher:(Class _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * _Nonnull)beTruthyMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBObjCMatcher * _Nonnull)beFalsyMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBObjCMatcher * _Nonnull)beTrueMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBObjCMatcher * _Nonnull)beFalseMatcher SWIFT_WARN_UNUSED_RESULT;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC6Nimble28NMBObjCRaiseExceptionMatcher")
@interface NMBObjCRaiseExceptionMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (BOOL)doesNotMatch:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * _Nonnull (^ _Nonnull named)(NSString * _Nonnull);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * _Nonnull (^ _Nonnull reason)(NSString * _Nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * _Nonnull (^ _Nonnull userInfo)(NSDictionary * _Nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * _Nonnull (^ _Nonnull satisfyingBlock)(void (^ _Nullable)(NSException * _Nonnull));
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble12NMBPredicate")
@interface NMBPredicate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble)) <NMBMatcher>
- (BOOL)matches:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (BOOL)doesNotMatch:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock failureMessage:(FailureMessage * _Nonnull)failureMessage location:(SourceLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC6Nimble18NMBPredicateResult")
@interface NMBPredicateResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble18NMBPredicateStatus")
@interface NMBPredicateStatus : NSObject
@property (nonatomic, readonly) NSInteger hashValue;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble11NMBStringer")
@interface NMBStringer : NSObject
+ (NSString * _Nonnull)stringify:(id _Nullable)obj SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Only classes, protocols, methods, properties, and subscript declarations can be
/// bridges to Objective-C via the @objc keyword. This class encapsulates callback-style
/// asynchronous waiting logic so that it may be called from Objective-C and Swift.
SWIFT_CLASS("_TtC6Nimble7NMBWait")
@interface NMBWait : NSObject
+ (void)untilTimeout:(NSTimeInterval)timeout file:(NSString * _Nonnull)file line:(NSUInteger)line action:(void (^ _Nonnull)(void (^ _Nonnull)(void)))action;
+ (void)untilFile:(NSString * _Nonnull)file line:(NSUInteger)line action:(void (^ _Nonnull)(SWIFT_NOESCAPE void (^ _Nonnull)(void)))action;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


























@interface NSNumber (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end








@interface NSString (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC6Nimble14SourceLocation")
@interface SourceLocation : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
