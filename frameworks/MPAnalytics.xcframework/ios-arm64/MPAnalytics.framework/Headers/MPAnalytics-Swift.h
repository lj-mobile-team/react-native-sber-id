// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef MPANALYTICS_SWIFT_H
#define MPANALYTICS_SWIFT_H
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
@import CoreData;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MPAnalytics",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("DataManaged")
@interface DataManaged : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class EventPropertyManaged;
@class NSIndexSet;
@class NSOrderedSet;

@interface DataManaged (SWIFT_EXTENSION(MPAnalytics))
- (void)insertObject:(EventPropertyManaged * _Nonnull)value inPropertiesAtIndex:(NSInteger)idx;
- (void)removeObjectFromPropertiesAtIndex:(NSInteger)idx;
- (void)insertProperties:(NSArray<EventPropertyManaged *> * _Nonnull)values atIndexes:(NSIndexSet * _Nonnull)indexes;
- (void)removePropertiesAtIndexes:(NSIndexSet * _Nonnull)indexes;
- (void)replaceObjectInPropertiesAtIndex:(NSInteger)idx withObject:(EventPropertyManaged * _Nonnull)value;
- (void)replacePropertiesAtIndexes:(NSIndexSet * _Nonnull)indexes withProperties:(NSArray<EventPropertyManaged *> * _Nonnull)values;
- (void)addPropertiesObject:(EventPropertyManaged * _Nonnull)value;
- (void)removePropertiesObject:(EventPropertyManaged * _Nonnull)value;
- (void)addProperties:(NSOrderedSet * _Nonnull)values;
- (void)removeProperties:(NSOrderedSet * _Nonnull)values;
@end

@class EventsMeta;
@class EventsProfile;

@interface DataManaged (SWIFT_EXTENSION(MPAnalytics))
@property (nonatomic, copy) NSString * _Nullable batteryLevel;
@property (nonatomic, copy) NSString * _Nullable cellularProvider;
@property (nonatomic, copy) NSString * _Nullable connectionType;
@property (nonatomic, copy) NSString * _Nullable eventAction;
@property (nonatomic, copy) NSString * _Nullable eventCategory;
@property (nonatomic, copy) NSString * _Nullable eventType;
@property (nonatomic, copy) NSString * _Nullable geoLatitude;
@property (nonatomic, copy) NSString * _Nullable geoLongitude;
@property (nonatomic, copy) NSString * _Nullable internalIP;
@property (nonatomic, copy) NSDate * _Nullable timeStamp;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic) BOOL isBeingSent;
@property (nonatomic, strong) EventsMeta * _Nullable meta;
@property (nonatomic, strong) EventsProfile * _Nullable profile;
@property (nonatomic, strong) NSOrderedSet * _Nullable properties;
@end



SWIFT_CLASS_NAMED("EventPropertyManaged")
@interface EventPropertyManaged : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface EventPropertyManaged (SWIFT_EXTENSION(MPAnalytics))
@property (nonatomic, copy) NSString * _Nullable key;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, strong) DataManaged * _Nullable data;
@end


SWIFT_CLASS_NAMED("EventsMeta")
@interface EventsMeta : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSSet;

@interface EventsMeta (SWIFT_EXTENSION(MPAnalytics))
- (void)addEventsObject:(DataManaged * _Nonnull)value;
- (void)removeEventsObject:(DataManaged * _Nonnull)value;
- (void)addEvents:(NSSet * _Nonnull)values;
- (void)removeEvents:(NSSet * _Nonnull)values;
@end


@interface EventsMeta (SWIFT_EXTENSION(MPAnalytics))
@property (nonatomic, copy) NSString * _Nullable apiKey;
@property (nonatomic) int64_t deviceMemorySize;
@property (nonatomic, copy) NSString * _Nullable deviceModel;
@property (nonatomic, copy) NSString * _Nullable deviceVendor;
@property (nonatomic, copy) NSString * _Nullable operationSystem;
@property (nonatomic, copy) NSString * _Nullable operationSystemVersion;
@property (nonatomic, copy) NSString * _Nullable platform;
@property (nonatomic, copy) NSString * _Nullable sberId;
@property (nonatomic, copy) NSString * _Nullable screenSize;
@property (nonatomic, copy) NSString * _Nullable systemLanguage;
@property (nonatomic, strong) NSSet * _Nullable events;
@end


SWIFT_CLASS_NAMED("EventsProfile")
@interface EventsProfile : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface EventsProfile (SWIFT_EXTENSION(MPAnalytics))
- (void)addEventsObject:(DataManaged * _Nonnull)value;
- (void)removeEventsObject:(DataManaged * _Nonnull)value;
- (void)addEvents:(NSSet * _Nonnull)values;
- (void)removeEvents:(NSSet * _Nonnull)values;
@end


@interface EventsProfile (SWIFT_EXTENSION(MPAnalytics))
@property (nonatomic, copy) NSString * _Nullable adId;
@property (nonatomic, copy) NSString * _Nullable appId;
@property (nonatomic, copy) NSString * _Nullable applicationLanguage;
@property (nonatomic, copy) NSString * _Nullable appVersion;
@property (nonatomic, copy) NSString * _Nullable clientBlock;
@property (nonatomic, copy) NSString * _Nullable cookie;
@property (nonatomic, copy) NSString * _Nullable deviceId;
@property (nonatomic, copy) NSString * _Nullable hashEfsId;
@property (nonatomic, copy) NSString * _Nullable hashEpkId;
@property (nonatomic, copy) NSString * _Nullable hashUserLoginId;
@property (nonatomic, copy) NSString * _Nullable sapId;
@property (nonatomic, copy) NSString * _Nullable sessionId;
@property (nonatomic, copy) NSString * _Nullable subId;
@property (nonatomic, copy) NSString * _Nullable utm;
@property (nonatomic, strong) NSSet * _Nullable events;
@end



/// Тело запроса, который будет отправляться через <code>Network Service</code>.Только для ObjC кода!!
/// attention:
/// Только для СБОЛa!!!
SWIFT_CLASS_NAMED("ObjcBody")
@interface MPABody : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MPADeviceConfiguration;

/// Протокол обновления конфигурации
/// attention:
/// Только для СБОЛa!!!
SWIFT_PROTOCOL_NAMED("ObjcConfigurable")
@protocol MPAConfigurable
/// Обновить конфигурацию устройства.
/// \param deviceConfiguration Новая конфигурация устройства.
///
- (void)updateWithDeviceConfiguration:(MPADeviceConfiguration * _Nonnull)deviceConfiguration;
@end

@class MPAProfile;

/// Информация об устройстве пользователя,
/// использующаяся при отправки событий в аналитические системы.
/// attention:
/// Только для СБОЛа!!!
SWIFT_CLASS_NAMED("ObjcDeviceConfiguration")
@interface MPADeviceConfiguration : NSObject
/// Конфигурация устройства.
/// \param profile Профиль утсройства.
///
- (nonnull instancetype)initWithProfile:(MPAProfile * _Nonnull)profile OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;
@class CLLocation;
@class NSError;
@class NSURLResponse;
@class NSURLSessionTaskMetrics;

/// Потокол, декларирующий контракт отправки событий.
/// attention:
/// Только для СБОЛа!!!
SWIFT_PROTOCOL_NAMED("ObjcEventTracker")
@protocol MPAEventTracker
/// Добавляет событие в аналитический сервис.
/// \param eventName Имя события.
///
/// \param params Параметры события.
///
/// \param properties Массив неупорядоченных аналитических данных, не уточненных в схеме.
///
/// \param storable В случае  <code>true</code> разрешается использование постоянного хранилища
/// на устройстве. В случае <code>false</code> события будут храниться только в оперативной памяти,
/// что приводит к поялвлению вероятности потери событий.
///
/// \param location Местоположение устройста.
///
/// \param completion Closure для получения сообщения об успехе или неудаче.
///
- (void)sendEventWithEventName:(NSString * _Nonnull)eventName params:(NSDictionary<NSString *, NSString *> * _Nullable)params properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties storable:(BOOL)storable location:(CLLocation * _Nullable)location completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Добавляет событие ошибок сетевого слоя в аналитический сервис.
/// warning:
/// один из параметров не должен быть <code>nil</code>.
/// \param urlSessionTaskResponse Ответ сетевого запроса.
///
/// \param transportError Ошибка запроса (клиентская).
///
/// \param completion Closure для получения сообщения об успехе или неудаче.
///
- (void)sendEventWithUrlSessionTaskResponse:(NSURLResponse * _Nullable)urlSessionTaskResponse transportError:(NSError * _Nullable)transportError completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Добавляет событие сетевых метрик в аналитический сервис
/// warning:
/// <code>sessionTaskMetrics</code> не должены быть пустыми.
/// \param sessionTaskMetrics Сетевые метрики.
///
/// \param completion Closure для получения сообщения об успехе или неудаче.
///
- (void)sendEventWithSessionTaskMetrics:(NSURLSessionTaskMetrics * _Nonnull)sessionTaskMetrics completion:(void (^ _Nullable)(NSError * _Nullable))completion;
@end


/// Протокол аналитического фасада для Objective-C.
/// attention:
/// Только для СБОЛа!!!
SWIFT_PROTOCOL_NAMED("ObjcMPAnalyticsProtocol")
@protocol MPAnalyticsProtocol <MPAConfigurable, MPAEventTracker>
/// Тогл включения/отключения метрик производительности.
@property (nonatomic) BOOL shoulUsePerformanceAnalyzer;
@end

@protocol MPANetworkServiceProtocol;

/// Фасад для работы с анатиликой.
/// Должен быть удержан <code>strong</code> ссылкой.
/// attention:
/// Только для СБОЛа!!!
SWIFT_CLASS_NAMED("ObjcMPAnalytics")
@interface MPAnalytics : NSObject <MPAnalyticsProtocol>
@property (nonatomic) BOOL shoulUsePerformanceAnalyzer;
/// Инициализатор фасада для работы с аналитикой
/// \param networkService Сервис для работы с траспортным слоем.
///
/// \param deviceConfiguration Информация об устройстве пользователя.
///
- (nonnull instancetype)initWithNetworkService:(id <MPANetworkServiceProtocol> _Nonnull)networkService deviceConfiguration:(MPADeviceConfiguration * _Nonnull)deviceConfiguration;
/// \param networkService Сервис для работы с траспортным слоем.
///
/// \param deviceConfiguration Информация об устройстве пользователя.
///
/// \param deleteAllEventsOlderThanTimeInterval Интервал для удаления всех событий.
/// Все события старше этого временного промежутка (в секундах) удаляются.
/// Должно иметь положительное значение. (Сработает при инициализации библиотеки)
///
- (nonnull instancetype)initWithNetworkService:(id <MPANetworkServiceProtocol> _Nonnull)networkService deviceConfiguration:(MPADeviceConfiguration * _Nonnull)deviceConfiguration deleteAllEventsOlderThanTimeInterval:(NSTimeInterval)deleteAllEventsOlderThanTimeInterval;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MPAnalytics (SWIFT_EXTENSION(MPAnalytics)) <MPAConfigurable>
- (void)updateWithDeviceConfiguration:(MPADeviceConfiguration * _Nonnull)deviceConfiguration;
@end


@interface MPAnalytics (SWIFT_EXTENSION(MPAnalytics)) <MPAEventTracker>
- (void)sendEventWithEventName:(NSString * _Nonnull)eventName params:(NSDictionary<NSString *, NSString *> * _Nullable)params properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties storable:(BOOL)storable location:(CLLocation * _Nullable)location completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)sendEventWithUrlSessionTaskResponse:(NSURLResponse * _Nullable)urlSessionTaskResponse transportError:(NSError * _Nullable)transportError completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)sendEventWithSessionTaskMetrics:(NSURLSessionTaskMetrics * _Nonnull)sessionTaskMetrics completion:(void (^ _Nullable)(NSError * _Nullable))completion;
@end


@class NSHTTPURLResponse;

/// Протокол для работы с сетью.Только для ObjC кода!!
/// attention:
/// Только для СБОЛа!!!
SWIFT_PROTOCOL_NAMED("ObjcNetworkService")
@protocol MPANetworkServiceProtocol
/// ID приложения (идентификатор для маршрутизации пакетов данных на бэк).
@property (nonatomic, readonly, copy) NSString * _Nonnull apiKey;
/// Выполнить запрос.
/// Данный метод вызывается с определённой периодичностью на background потоке.
/// В случае успешного выполнения запроса, необходимо вызвать <code>successHandler</code>,
/// чтобы удалить отправленные данные из хранилища.
/// \param body Тело запроса с инкапсулированными данными, которое необходимо отправить.
///
/// \param completionHandler Коллбэк с <code>response</code> или <code>error</code>.
///
- (void)sendWithBody:(MPABody * _Nonnull)body completionHandler:(void (^ _Nonnull)(NSHTTPURLResponse * _Nullable, NSError * _Nullable))completionHandler;
@end


/// Модель данных пользователя.Только для ObjC кода!!
/// attention:
/// Только для СБОЛа!!!
SWIFT_CLASS_NAMED("ObjcProfile")
@interface MPAProfile : NSObject
@property (nonatomic, strong) NSString * _Nullable appVersion;
@property (nonatomic, strong) NSString * _Nullable applicationLanguage;
@property (nonatomic, strong) NSString * _Nullable sessionId;
@property (nonatomic, strong) NSString * _Nullable clientBlock;
@property (nonatomic, strong) NSString * _Nullable hashUserLoginId;
@property (nonatomic, strong) NSString * _Nullable deviceId;
@property (nonatomic, strong) NSString * _Nullable hashEpkId;
@property (nonatomic, strong) NSString * _Nullable hashEfsId;
@property (nonatomic, strong) NSString * _Nullable subId;
@property (nonatomic, strong) NSString * _Nullable appId;
@property (nonatomic, strong) NSString * _Nullable sapId;
@property (nonatomic, strong) NSString * _Nullable adId;
@property (nonatomic, strong) NSString * _Nullable cookie;
@property (nonatomic, strong) NSString * _Nullable utm;
@property (nonatomic, readonly) NSUInteger hash;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface MPAProfile (SWIFT_EXTENSION(MPAnalytics)) <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
