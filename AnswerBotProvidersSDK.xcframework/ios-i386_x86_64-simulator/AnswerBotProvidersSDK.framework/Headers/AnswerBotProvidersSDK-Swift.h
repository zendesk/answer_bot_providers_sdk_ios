#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
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
#include <Foundation/Foundation.h>
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AnswerBotProvidersSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class ZDKAnswerBotProvider;
@class ZDKZendesk;
@class ZDKSupport;

/// ZDKAnswerBot is responsible for initialization of
/// the SDK and manages the backend configuration.
SWIFT_CLASS_NAMED("AnswerBot")
@interface ZDKAnswerBot : NSObject
/// AnswerBot Provider access
@property (nonatomic, readonly, strong) ZDKAnswerBotProvider * _Nonnull provider;
/// Initializes AnswerBot with Zendesk instance and Support - e.g. AnswerBot.initialize(withZendesk: Zendesk.instance, support: Support.instance!)
/// \param zendesk An instance of <code>ZDKZendesk</code>.
///
/// \param support An instance of <code>ZDKSupport</code>.
///
+ (void)initializeWithZendesk:(ZDKZendesk * _Nullable)zendesk support:(ZDKSupport * _Nonnull)support;
/// Returns an instance of <code>AnswerBot</code> (singleton)
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKAnswerBot * _Nullable instance;)
+ (ZDKAnswerBot * _Nullable)instance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSHTTPURLResponse;

SWIFT_CLASS_NAMED("AnswerBotDispatcherResponse")
@interface ZDKAnswerBotDispatcherResponse : NSObject
@property (nonatomic, readonly, strong) NSHTTPURLResponse * _Nonnull response;
@property (nonatomic, readonly, copy) NSData * _Nullable data;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("AnswerBotProvider")
@interface ZDKAnswerBotProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ZDKDeflectionResponse;
enum ZDKRejectionReason : NSInteger;

@interface ZDKAnswerBotProvider (SWIFT_EXTENSION(AnswerBotProvidersSDK))
/// Gets a DeflectionResponse for the given query String. The DeflectionResponse
/// contains an array of DeflectionArticles that match the query. The list is empty if no
/// articles matched the query, and a maximum of 3 articles can be returned.
/// \param query The String query sent to Answer Bot
///
/// \param callback Callback that will deliver the DeflectionResponse
///
- (void)getDeflectionForQueryWithQuery:(NSString * _Nonnull)query callback:(void (^ _Nonnull)(ZDKDeflectionResponse * _Nullable, NSError * _Nullable))callback;
/// Marks a DeflectionArticle as helpful and indicates that the article successfully
/// resolved the users issue.
/// \param deflectionID the deflectionID
///
/// \param articleID the articleID that successfully resolved the users issue.
///
/// \param interactionAccessToken InteractionAccessToken from DeflectionResponse
///
/// \param callback Callback that will deliver result
///
- (void)resolveWithArticleWithDeflectionId:(int64_t)deflectionId articleId:(int64_t)articleId interactionAccessToken:(NSString * _Nonnull)interactionAccessToken callback:(void (^ _Nonnull)(ZDKAnswerBotDispatcherResponse * _Nullable, NSError * _Nullable))callback;
/// Marks a deflection article as unhelpful and indicates that it did not resolve the user’s issue
/// \param deflectionID The deflectionID
///
/// \param articleID The articleID that did not resolve the users issue
///
/// \param interactionAccessToken InteractionAccessToken from DeflectionResponse
///
/// \param reason The Reason the article was not helpful
///
/// \param callback Callback that will deliver the result
///
- (void)rejectWithArticleWithDeflectionId:(int64_t)deflectionId articleId:(int64_t)articleId interactionAccessToken:(NSString * _Nonnull)interactionAccessToken reason:(enum ZDKRejectionReason)reason callback:(void (^ _Nonnull)(ZDKAnswerBotDispatcherResponse * _Nullable, NSError * _Nullable))callback;
@end


/// The AnswerBot Settings model
SWIFT_CLASS_NAMED("AnswerBotSettings")
@interface ZDKAnswerBotSettings : NSObject
/// A <code>Bool</code> indicates whether Answer Bot is enabled
@property (nonatomic, readonly) BOOL enabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <ul>
///   <li>
///     The <code>ZDKAnswerBotSettingsProvider</code> is used to fetch the latest settings from the network/local cache.
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("AnswerBotSettingsProvider")
@interface ZDKAnswerBotSettingsProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Fetches an <code>AnswerBotSettings</code> from the network/local cache.
/// \param callback A callback that takes a optional <code>AnswerBotSettings</code> object
///
+ (void)getSettingsWithCallback:(void (^ _Nonnull)(ZDKAnswerBotSettings * _Nullable))callback;
@end


SWIFT_CLASS_NAMED("Deflection")
@interface ZDKDeflection : NSObject
@property (nonatomic, readonly) int64_t deflectionID;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("DeflectionArticle")
@interface ZDKDeflectionArticle : NSObject
@property (nonatomic, readonly) int64_t id;
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nonnull htmlURL;
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull labelNames;
@property (nonatomic, readonly, copy) NSString * _Nonnull body;
@property (nonatomic, readonly) int64_t articleId;
@property (nonatomic, readonly, copy) NSString * _Nonnull locale;
@property (nonatomic, readonly) int64_t brandId;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly, copy) NSString * _Nonnull snippet;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("DeflectionResponse")
@interface ZDKDeflectionResponse : NSObject
@property (nonatomic, readonly, strong) ZDKDeflection * _Nonnull deflection;
@property (nonatomic, readonly, copy) NSArray<ZDKDeflectionArticle *> * _Nonnull deflectionArticles;
@property (nonatomic, readonly, copy) NSString * _Nonnull interactionAccessToken;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKRejectionReason, "RejectionReason", open) {
  ZDKRejectionReasonUnknown = 0,
  ZDKRejectionReasonNotRelated = 1,
  ZDKRejectionReasonRelatedButDidntAnswer = 2,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
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
#include <Foundation/Foundation.h>
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AnswerBotProvidersSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class ZDKAnswerBotProvider;
@class ZDKZendesk;
@class ZDKSupport;

/// ZDKAnswerBot is responsible for initialization of
/// the SDK and manages the backend configuration.
SWIFT_CLASS_NAMED("AnswerBot")
@interface ZDKAnswerBot : NSObject
/// AnswerBot Provider access
@property (nonatomic, readonly, strong) ZDKAnswerBotProvider * _Nonnull provider;
/// Initializes AnswerBot with Zendesk instance and Support - e.g. AnswerBot.initialize(withZendesk: Zendesk.instance, support: Support.instance!)
/// \param zendesk An instance of <code>ZDKZendesk</code>.
///
/// \param support An instance of <code>ZDKSupport</code>.
///
+ (void)initializeWithZendesk:(ZDKZendesk * _Nullable)zendesk support:(ZDKSupport * _Nonnull)support;
/// Returns an instance of <code>AnswerBot</code> (singleton)
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKAnswerBot * _Nullable instance;)
+ (ZDKAnswerBot * _Nullable)instance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSHTTPURLResponse;

SWIFT_CLASS_NAMED("AnswerBotDispatcherResponse")
@interface ZDKAnswerBotDispatcherResponse : NSObject
@property (nonatomic, readonly, strong) NSHTTPURLResponse * _Nonnull response;
@property (nonatomic, readonly, copy) NSData * _Nullable data;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("AnswerBotProvider")
@interface ZDKAnswerBotProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ZDKDeflectionResponse;
enum ZDKRejectionReason : NSInteger;

@interface ZDKAnswerBotProvider (SWIFT_EXTENSION(AnswerBotProvidersSDK))
/// Gets a DeflectionResponse for the given query String. The DeflectionResponse
/// contains an array of DeflectionArticles that match the query. The list is empty if no
/// articles matched the query, and a maximum of 3 articles can be returned.
/// \param query The String query sent to Answer Bot
///
/// \param callback Callback that will deliver the DeflectionResponse
///
- (void)getDeflectionForQueryWithQuery:(NSString * _Nonnull)query callback:(void (^ _Nonnull)(ZDKDeflectionResponse * _Nullable, NSError * _Nullable))callback;
/// Marks a DeflectionArticle as helpful and indicates that the article successfully
/// resolved the users issue.
/// \param deflectionID the deflectionID
///
/// \param articleID the articleID that successfully resolved the users issue.
///
/// \param interactionAccessToken InteractionAccessToken from DeflectionResponse
///
/// \param callback Callback that will deliver result
///
- (void)resolveWithArticleWithDeflectionId:(int64_t)deflectionId articleId:(int64_t)articleId interactionAccessToken:(NSString * _Nonnull)interactionAccessToken callback:(void (^ _Nonnull)(ZDKAnswerBotDispatcherResponse * _Nullable, NSError * _Nullable))callback;
/// Marks a deflection article as unhelpful and indicates that it did not resolve the user’s issue
/// \param deflectionID The deflectionID
///
/// \param articleID The articleID that did not resolve the users issue
///
/// \param interactionAccessToken InteractionAccessToken from DeflectionResponse
///
/// \param reason The Reason the article was not helpful
///
/// \param callback Callback that will deliver the result
///
- (void)rejectWithArticleWithDeflectionId:(int64_t)deflectionId articleId:(int64_t)articleId interactionAccessToken:(NSString * _Nonnull)interactionAccessToken reason:(enum ZDKRejectionReason)reason callback:(void (^ _Nonnull)(ZDKAnswerBotDispatcherResponse * _Nullable, NSError * _Nullable))callback;
@end


/// The AnswerBot Settings model
SWIFT_CLASS_NAMED("AnswerBotSettings")
@interface ZDKAnswerBotSettings : NSObject
/// A <code>Bool</code> indicates whether Answer Bot is enabled
@property (nonatomic, readonly) BOOL enabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <ul>
///   <li>
///     The <code>ZDKAnswerBotSettingsProvider</code> is used to fetch the latest settings from the network/local cache.
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("AnswerBotSettingsProvider")
@interface ZDKAnswerBotSettingsProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Fetches an <code>AnswerBotSettings</code> from the network/local cache.
/// \param callback A callback that takes a optional <code>AnswerBotSettings</code> object
///
+ (void)getSettingsWithCallback:(void (^ _Nonnull)(ZDKAnswerBotSettings * _Nullable))callback;
@end


SWIFT_CLASS_NAMED("Deflection")
@interface ZDKDeflection : NSObject
@property (nonatomic, readonly) int64_t deflectionID;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("DeflectionArticle")
@interface ZDKDeflectionArticle : NSObject
@property (nonatomic, readonly) int64_t id;
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nonnull htmlURL;
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull labelNames;
@property (nonatomic, readonly, copy) NSString * _Nonnull body;
@property (nonatomic, readonly) int64_t articleId;
@property (nonatomic, readonly, copy) NSString * _Nonnull locale;
@property (nonatomic, readonly) int64_t brandId;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly, copy) NSString * _Nonnull snippet;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("DeflectionResponse")
@interface ZDKDeflectionResponse : NSObject
@property (nonatomic, readonly, strong) ZDKDeflection * _Nonnull deflection;
@property (nonatomic, readonly, copy) NSArray<ZDKDeflectionArticle *> * _Nonnull deflectionArticles;
@property (nonatomic, readonly, copy) NSString * _Nonnull interactionAccessToken;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKRejectionReason, "RejectionReason", open) {
  ZDKRejectionReasonUnknown = 0,
  ZDKRejectionReasonNotRelated = 1,
  ZDKRejectionReasonRelatedButDidntAnswer = 2,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
