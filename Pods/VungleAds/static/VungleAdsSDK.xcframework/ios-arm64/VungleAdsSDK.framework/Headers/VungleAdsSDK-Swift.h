#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef VUNGLEADSSDK_SWIFT_H
#define VUNGLEADSSDK_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VungleAdsSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
typedef SWIFT_ENUM(NSInteger, BannerSize, open) {
/// 320x50
  BannerSizeRegular = 0,
/// 300x50
  BannerSizeShort = 1,
/// 728x90
  BannerSizeLeaderboard = 2,
/// 300x250
  BannerSizeMrec = 3,
};

@class NSString;
@class VungleAdsExtras;

SWIFT_CLASS("_TtC12VungleAdsSDK12BasePublicAd")
@interface BasePublicAd : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull appId;
@property (nonatomic, readonly, copy) NSString * _Nonnull placementId;
@property (nonatomic, readonly, copy) NSString * _Nonnull eventId;
@property (nonatomic, readonly, copy) NSString * _Nonnull creativeId;
- (void)setWithExtras:(VungleAdsExtras * _Nonnull)extras;
/// This method returns the playability status of the ad for the specified placement.
///
/// returns:
/// Bool value to determine if this ad can be played at this time.
- (BOOL)canPlayAd SWIFT_WARN_UNUSED_RESULT;
/// This method prepares an ad with the provided bid payload, if provided.
/// If the bid payload is nil, the waterfall flow will be executed.
/// This method will always invoke a <code>DidLoad</code> or a <code>DidFailToLoad</code> callback
/// \param bidPayload The bid payload for bidding feature.
///
- (void)load:(NSString * _Nullable)bidPayload;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ConsentStatus, open) {
  ConsentStatusAccepted = 0,
  ConsentStatusDenied = 1,
};

@class NSCoder;

/// A MediaView to display the ad’s image or video
SWIFT_CLASS("_TtC12VungleAdsSDK9MediaView")
@interface MediaView : UIView
/// The aspect ratio of the content. Returns 0.0 if no ad is currently loaded.
@property (nonatomic, readonly) CGFloat aspectRatio;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, NativeAdOptionsPosition, open) {
  NativeAdOptionsPositionTopLeft = 1,
  NativeAdOptionsPositionTopRight = 2,
  NativeAdOptionsPositionBottomLeft = 3,
  NativeAdOptionsPositionBottomRight = 4,
};




@class NSError;

SWIFT_CLASS("_TtC12VungleAdsSDK9VungleAds")
@interface VungleAds : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersion;)
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// This method initializes the Vungle SDK with the provided app id and calls the completion block
/// when finished.
/// \param appId The Vungle App ID.
///
/// \param completion The completion block that will be called when initialization finishes.
/// If there are no errors during initialization, the returned value will be nil. And vice versa.
///
+ (void)initWithAppId:(NSString * _Nonnull)appId completion:(void (^ _Nonnull)(NSError * _Nullable))completion SWIFT_METHOD_FAMILY(none);
/// This method returns the bool to check if the SDK has already been initialized successfully or not.
///
/// returns:
/// Bool to check if the SDK has already been initialized successfully or not.
+ (BOOL)isInitialized SWIFT_WARN_UNUSED_RESULT;
/// This method returns the encoded token to be used for the bidding feature.
///
/// returns:
/// The encoded string token
/// Note: The current bidding token version is 3. And, the format is:
/// “<biddingTokenVersionPrefix> + “:” <compressed/encoded token data>”
+ (NSString * _Nonnull)getBiddingToken SWIFT_WARN_UNUSED_RESULT;
/// This method sets the plugin name and version for internal identification purposes.
/// \param integrationName The plugin or adapter name.
///
/// \param version The version of the plugin or adapter.
///
+ (void)setIntegrationName:(NSString * _Nonnull)integrationName version:(NSString * _Nonnull)version;
/// This method allows a publisher to enable or disable debug logging. While in development, this
/// can be used to see info and error messages from the VungleAdsSDK in the Xcode console.
/// \param isDebugLoggingEnabled Bool flag - true enables debug logging, false disables it
///
+ (void)setDebugLoggingEnabled:(BOOL)isDebugLoggingEnabled;
@end


SWIFT_CLASS("_TtC12VungleAdsSDK15VungleAdsExtras")
@interface VungleAdsExtras : NSObject
- (void)setWithWatermark:(NSString * _Nonnull)watermark;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol VungleBannerDelegate;

SWIFT_CLASS("_TtC12VungleAdsSDK12VungleBanner")
@interface VungleBanner : BasePublicAd
/// The delegate to receive banner ad lifecycle callbacks
@property (nonatomic, weak) id <VungleBannerDelegate> _Nullable delegate;
/// This method initializes the Vungle banner ad object.
/// \param placementId The placement id of the banner ad.
///
/// \param size The desired banner size for the banner ad.
///
- (nonnull instancetype)initWithPlacementId:(NSString * _Nonnull)placementId size:(enum BannerSize)size OBJC_DESIGNATED_INITIALIZER;
/// This method will present the banner ad in the provided UIView.
/// This view container may be placed in random positions.
/// If presentation fails, the <code>DidFailToPresent</code> callback will be invoked.
/// \param publisherView The UIView container for the banner ad.
/// The size of this container should match the specified size when this object is created.
///
- (void)presentOn:(UIView * _Nonnull)publisherView;
@end



SWIFT_PROTOCOL("_TtP12VungleAdsSDK20VungleBannerDelegate_")
@protocol VungleBannerDelegate <NSObject>
@optional
- (void)bannerAdDidLoad:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidFailToLoad:(VungleBanner * _Nonnull)banner withError:(NSError * _Nonnull)withError;
- (void)bannerAdWillPresent:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidPresent:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidFailToPresent:(VungleBanner * _Nonnull)banner withError:(NSError * _Nonnull)withError;
- (void)bannerAdWillClose:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidClose:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidTrackImpression:(VungleBanner * _Nonnull)banner;
- (void)bannerAdDidClick:(VungleBanner * _Nonnull)banner;
- (void)bannerAdWillLeaveApplication:(VungleBanner * _Nonnull)banner;
@end

typedef SWIFT_ENUM(NSInteger, VungleError, open) {
/// This shouldn’t be used. If an error is being logged, the context is already known.
  VungleErrorUnknownError = 0,
/// The app id fails SDK validation, like empty string
  VungleErrorInvalidAppID = 1,
/// The SDK is already initializing when another call is made
  VungleErrorCurrentlyInitializing = 2,
/// The SDK is already successfully initialized when another call is made
  VungleErrorAlreadyInitialized = 3,
/// Returned if any public API is called before initialization, if it requires initialization
  VungleErrorSdkNotInitialized = 4,
/// The error in retrieving webView user agent
  VungleErrorUserAgentError = 5,
/// Server error getting a response from an api call. Message contains the URL
  VungleErrorApiRequestError = 6,
/// Server didn’t send any data in the api call. Message contains the URL
  VungleErrorApiResponseDataError = 7,
/// SDK failed to decode the response into the expected object. Message contains the URL
  VungleErrorApiResponseDecodeError = 8,
/// The status code from an API call (like config, ads, etc) returned something not 2xx. Message contains the URL
  VungleErrorApiFailedStatusCode = 9,
/// The template url is nil, empty or invalid url. Message contains the URL
  VungleErrorInvalidTemplateURL = 10,
/// Failed to create a URL object to the targeted endpoint. Message contains the URL
  VungleErrorInvalidRequestBuilderError = 11,
/// Failed to unarchive the template file
  VungleErrorTemplateUnzipError = 12,
/// The CTA URL is an invalid url or it failed to open. Message contains the URL
  VungleErrorInvalidCtaURL = 13,
/// The URL from the cacheable replacements is invalid. Message contains the URL
  VungleErrorInvalidAssetURL = 14,
/// The asset failed to download or Apple didn’t return to us the temporary location. Message contains the URL
  VungleErrorAssetRequestError = 15,
/// Apple returned an unexpected response object or failed to load the downloaded data.
  VungleErrorAssetResponseDataError = 16,
/// Failed to save the downloaded asset to disk.
  VungleErrorAssetWriteError = 17,
/// The index.html doesn’t exist or there’s an issue with the event id to lookup the html file
  VungleErrorInvalidIndexURL = 18,
/// Failed to gzip the token data for the bidding token
  VungleErrorGzipEncodeError = 19,
/// The status code from the asset download didn’t return 200. Message contains the URL
  VungleErrorAssetFailedStatusCode = 20,
/// Failed to serialize the protobuf object for the request body
  VungleErrorProtobufSerializationError = 21,
/// Failed to encode the json object for the bidding token or into the request body.
  VungleErrorJsonEncodeError = 22,
/// Failed to create the TPAT URL object or send it. Message contains the URL
  VungleErrorTpatError = 23,
/// The ads endpoint doesn’t exist in the config response body
  VungleErrorInvalidAdsEndpoint = 24,
/// The ri endpoint doesn’t exist in the config response body
  VungleErrorInvalidRiEndpoint = 25,
/// The error_logs endpoint doesn’t exist in the config response body
  VungleErrorInvalidLogErrorEndpoint = 26,
/// The metrics endpoint doesn’t exist in the config response body
  VungleErrorInvalidMetricsEndpoint = 27,
  VungleErrorAssetFailedInsufficientSpace = 28,
  VungleErrorAssetFailedMaxSpaceExceeded = 29,
  VungleErrorInvalidTpatKey = 30,
  VungleErrorEmptyTpatError = 31,
/// MRAID JS file download failed
  VungleErrorMraidDownloadJsError = 32,
/// Failed to save MRAID JS files to disk
  VungleErrorMraidJsWriteFailed = 33,
/// OMSDK JS file download failed
  VungleErrorOmsdkDownloadJsError = 34,
/// Failed to save OMSDK JS files to disk
  VungleErrorOmsdkJsWriteFailed = 35,
/// Failed to get the App/play store region
  VungleErrorStoreRegionCodeError = 36,
/// Empty config response body
  VungleErrorInvalidConfigResponse = 37,
/// Failed to open privacy url
  VungleErrorPrivacyURLError = 38,
/// Failed to send tpat on a tpat retry
  VungleErrorTpatRetryFailed = 39,
/// Failed to refresh config
  VungleErrorConfigRefreshFailed = 40,
/// The event id in the ads response is invalid or the local URL can’t be created from it
  VungleErrorInvalidEventIDError = 41,
/// The placement id in the ad object is empty or not part of the config response
  VungleErrorInvalidPlacementID = 42,
/// Pub attempted to load when the ad is already marked as completed
  VungleErrorAdConsumed = 43,
/// Pub called load to a currently loading ad object
  VungleErrorAdIsLoading = 44,
/// Pub called load when the ad object already loaded successfully
  VungleErrorAdAlreadyLoaded = 45,
/// Pub called load, play or canPlay to an already playing ad object
  VungleErrorAdIsPlaying = 46,
/// Pub called load on a failed ad object
  VungleErrorAdAlreadyFailed = 47,
/// The template type in the ad object mismatch
  VungleErrorPlacementAdTypeMismatch = 48,
/// The bid payload doesn’t contain a valid ads response
  VungleErrorInvalidBidPayload = 49,
/// The bid payload was unable decode the payload into the json objects
  VungleErrorInvalidJsonBidPayload = 50,
/// The pub didnt’ call the load API before the play or it didn’t finish loading.
  VungleErrorAdNotLoaded = 51,
/// The platform returned a sleeping response
  VungleErrorPlacementSleep = 52,
/// Failed to decode the ad unit from the bid payload
  VungleErrorInvalidAdunitBidPayload = 53,
/// Failed to ungzip the ad from the bid payload
  VungleErrorInvalidGzipBidPayload = 54,
/// Ad metadata not found in response
  VungleErrorAdResponseEmpty = 55,
  VungleErrorAdResponseInvalidTemplateType = 56,
/// Time out error for /ads request
  VungleErrorAdResponseTimedOut = 57,
/// MRAID JS file not available
  VungleErrorMraidJsDoesNotExist = 58,
/// MRAID JS copy to ad directory failed
  VungleErrorMraidJsCopyFailed = 59,
/// Failed to load ad due to server busy with retry after timer.
  VungleErrorAdResponseRetryAfter = 60,
/// Failed to load ad due to server busy while retry after duration is active.
  VungleErrorAdLoadFailRetryAfter = 61,
/// Failed to load ad due to invalid Waterfall placement id.
  VungleErrorInvalidWaterfallPlacementID = 62,
/// Server returned “No fill”.
  VungleErrorAdNoFill = 63,
/// Server returned “Ad load is too frequently”.
  VungleErrorAdLoadTooFrequently = 64,
/// Load shedding error is occurring on the server side.
  VungleErrorAdServerError = 65,
/// App or placement is not correct.
  VungleErrorAdPublisherMismatch = 66,
/// Integration error occurring on the server side.
  VungleErrorAdInternalIntegrationError = 67,
/// For logging errors provided from the template
  VungleErrorMraidError = 68,
/// The IFA changed values between loading and playing the ad object.
  VungleErrorInvalidIfaStatus = 69,
/// The ad response expired. This is fired immediately when the timer detects that it has expired.
  VungleErrorAdExpired = 70,
/// Failed to load the index html
  VungleErrorMraidBridgeError = 71,
/// The ad response expired. This is fired when the pub calls play on an expired ad object.
  VungleErrorAdExpiredOnPlay = 72,
/// Failed to send the win notification url. Message contains the URL
  VungleErrorAdWinNotificationError = 73,
/// Logged if asset fails to be removed on cleanup
  VungleErrorAssetFailedToDelete = 74,
/// Logged if load fails just before ad play
  VungleErrorAdHtmlFailedToLoad = 75,
/// MRAID JS event does not include expected value
  VungleErrorMraidJsCallEmpty = 76,
/// Unable to open deep link URL
  VungleErrorDeeplinkOpenFailed = 77,
/// Failed to evaluate javascript
  VungleErrorEvaluateJavascriptFailed = 78,
/// Failed to open the mraid link command
  VungleErrorLinkCommandOpenFailed = 79,
/// Failed to get the json string from json data
  VungleErrorJsonParamsEncodeError = 80,
/// Failed to generate json data from params dictionary
  VungleErrorGenerateJsonDataError = 81,
/// Template close due to Fatal error reported by template
  VungleErrorAdClosedTemplateError = 82,
/// Missing HeartBeat error
  VungleErrorAdClosedMissingHeartbeat = 83,
/// Pub attempted to call play on a fullscreen ad object with another already playing
  VungleErrorConcurrentPlaybackUnsupported = 84,
/// Pub provided a different size mount for the banner
  VungleErrorBannerViewInvalidSize = 85,
/// missing critical native ad assets
  VungleErrorNativeAssetError = 86,
  VungleErrorWebViewWebContentProcessDidTerminate = 87,
  VungleErrorWebViewFailedNavigation = 88,
  VungleErrorStoreKitLoadError = 89,
  VungleErrorOmsdkCopyError = 90,
  VungleErrorStoreOverlayLoadError = 91,
  VungleErrorReachabilityInitializationFailed = 92,
  VungleErrorUnknownRadioAccessTechnology = 93,
  VungleErrorStoreKitPresentationError = 94,
  VungleErrorStoreOverlayPresentationError = 95,
/// Memory Checks
  VungleErrorOutOfMemory = 96,
};

@protocol VungleInterstitialDelegate;
@class UIViewController;

SWIFT_CLASS("_TtC12VungleAdsSDK18VungleInterstitial")
@interface VungleInterstitial : BasePublicAd
/// The delegate to receive interstitial ad lifecycle callbacks
@property (nonatomic, weak) id <VungleInterstitialDelegate> _Nullable delegate;
- (nonnull instancetype)initWithPlacementId:(NSString * _Nonnull)placementId OBJC_DESIGNATED_INITIALIZER;
/// This method will play the ad unit, presenting it over the <code>viewController</code> parameter
/// If presentation fails, the <code>DidFailToPresent</code> callback will be invoked.
/// \param viewController The UIViewController for presenting the interstitial ad.
/// This viewController should correspond to the ViewController at the top of the ViewController hierarchy.
///
- (void)presentWith:(UIViewController * _Nonnull)viewController;
@end



SWIFT_PROTOCOL("_TtP12VungleAdsSDK26VungleInterstitialDelegate_")
@protocol VungleInterstitialDelegate <NSObject>
@optional
- (void)interstitialAdDidLoad:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidFailToLoad:(VungleInterstitial * _Nonnull)interstitial withError:(NSError * _Nonnull)withError;
- (void)interstitialAdWillPresent:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidPresent:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidFailToPresent:(VungleInterstitial * _Nonnull)interstitial withError:(NSError * _Nonnull)withError;
- (void)interstitialAdWillClose:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidClose:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidTrackImpression:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdDidClick:(VungleInterstitial * _Nonnull)interstitial;
- (void)interstitialAdWillLeaveApplication:(VungleInterstitial * _Nonnull)interstitial;
@end

@protocol VungleNativeDelegate;
@class UIImage;
@class UIImageView;

SWIFT_CLASS("_TtC12VungleAdsSDK12VungleNative")
@interface VungleNative : BasePublicAd
/// The delegate to receive native ad lifecycle callbacks
@property (nonatomic, weak) id <VungleNativeDelegate> _Nullable delegate;
/// The application name that the ad advertises.
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
/// The description of the application that the ad advertises.
@property (nonatomic, readonly, copy) NSString * _Nonnull bodyText;
/// The call to action phrase of the ad.
@property (nonatomic, readonly, copy) NSString * _Nonnull callToAction;
/// The rating for the application that the ad advertises.
@property (nonatomic, readonly) double adStarRating;
/// The sponsored text, normally “sponsored by”.
@property (nonatomic, readonly, copy) NSString * _Nonnull sponsoredText;
/// The app icon image of the ad.
@property (nonatomic, readonly, strong) UIImage * _Nullable iconImage;
/// The position for the ad choices icon. Default is TOP_RIGHT.
@property (nonatomic) enum NativeAdOptionsPosition adOptionsPosition;
- (nonnull instancetype)initWithPlacementId:(NSString * _Nonnull)placementId OBJC_DESIGNATED_INITIALIZER;
/// Pass UIViews and UIViewController to prepare and display a Native ad.
/// \param view a container view in which a native ad will be displayed. This view will be clickable. 
///
/// \param mediaView a MediaView to display the ad’s image or video 
///
/// \param iconImageView a UIImageView to display the app icon 
///
/// \param viewController a UIViewController to present SKStoreProductViewController 
///
- (void)registerViewForInteractionWithView:(UIView * _Nonnull)view mediaView:(MediaView * _Nonnull)mediaView iconImageView:(UIImageView * _Nullable)iconImageView viewController:(UIViewController * _Nullable)viewController;
/// Pass UIViews and UIViewController to prepare and display a Native ad.
/// \param view a container view in which a native ad will be displayed. 
///
/// \param mediaView a MediaView to display the ad’s image or video. 
///
/// \param iconImageView a UIImageView to display the app icon. 
///
/// \param viewController a UIViewController to present SKStoreProductViewController. 
///
/// \param clickableViews an array of UIViews that you would like to set clickable. 
/// If nil or empty, the mediaView will be clickable.
///
- (void)registerViewForInteractionWithView:(UIView * _Nonnull)view mediaView:(MediaView * _Nonnull)mediaView iconImageView:(UIImageView * _Nullable)iconImageView viewController:(UIViewController * _Nullable)viewController clickableViews:(NSArray<UIView *> * _Nullable)clickableViews;
/// Dismiss the currently displaying Native ad.
- (void)unregisterView;
/// Performs ClickEvent on the currently displaying Native ad.
- (void)performCTA;
@end



SWIFT_PROTOCOL("_TtP12VungleAdsSDK20VungleNativeDelegate_")
@protocol VungleNativeDelegate <NSObject>
@optional
- (void)nativeAdDidLoad:(VungleNative * _Nonnull)native;
- (void)nativeAdDidFailToLoad:(VungleNative * _Nonnull)native withError:(NSError * _Nonnull)withError;
- (void)nativeAdDidFailToPresent:(VungleNative * _Nonnull)native withError:(NSError * _Nonnull)withError;
- (void)nativeAdDidTrackImpression:(VungleNative * _Nonnull)native;
- (void)nativeAdDidClick:(VungleNative * _Nonnull)native;
@end


SWIFT_CLASS("_TtC12VungleAdsSDK21VunglePrivacySettings")
@interface VunglePrivacySettings : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)setGDPRStatus:(BOOL)optIn;
+ (void)setGDPRMessageVersion:(NSString * _Nonnull)version;
+ (void)setCCPAStatus:(BOOL)optIn;
+ (void)setCOPPAStatus:(BOOL)isUserCoppa;
+ (void)setPublishIdfv:(BOOL)publish;
@end

@protocol VungleRewardedDelegate;

SWIFT_CLASS("_TtC12VungleAdsSDK14VungleRewarded")
@interface VungleRewarded : BasePublicAd
/// The delegate to receive rewarded ad lifecycle callbacks
@property (nonatomic, weak) id <VungleRewardedDelegate> _Nullable delegate;
- (nonnull instancetype)initWithPlacementId:(NSString * _Nonnull)placementId OBJC_DESIGNATED_INITIALIZER;
/// This method will play the ad unit, presenting it over the <code>viewController</code> parameter
/// If presentation fails, the <code>DidFailToPresent</code> callback will be invoked.
/// \param viewController The UIViewController for presenting the interstitial ad.
/// This viewController should correspond to the ViewController at the top of the ViewController hierarchy.
///
- (void)presentWith:(UIViewController * _Nonnull)viewController;
- (void)setUserIdWithUserId:(NSString * _Nonnull)userId;
- (void)setAlertTitleText:(NSString * _Nonnull)text;
- (void)setAlertBodyText:(NSString * _Nonnull)text;
- (void)setAlertCloseButtonText:(NSString * _Nonnull)text;
- (void)setAlertContinueButtonText:(NSString * _Nonnull)text;
@end



SWIFT_PROTOCOL("_TtP12VungleAdsSDK22VungleRewardedDelegate_")
@protocol VungleRewardedDelegate <NSObject>
@optional
- (void)rewardedAdDidLoad:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidFailToLoad:(VungleRewarded * _Nonnull)rewarded withError:(NSError * _Nonnull)withError;
- (void)rewardedAdWillPresent:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidPresent:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidFailToPresent:(VungleRewarded * _Nonnull)rewarded withError:(NSError * _Nonnull)withError;
- (void)rewardedAdWillClose:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidClose:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidTrackImpression:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidClick:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdWillLeaveApplication:(VungleRewarded * _Nonnull)rewarded;
- (void)rewardedAdDidRewardUser:(VungleRewarded * _Nonnull)rewarded;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
