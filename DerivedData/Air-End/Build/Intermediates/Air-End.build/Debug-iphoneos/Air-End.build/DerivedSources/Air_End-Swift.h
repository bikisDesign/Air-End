// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import CoreLocation;
@import RealmSwift;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC7Air_End11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
@property (nonatomic, strong) NSURL * __nonnull applicationDocumentsDirectory;
@property (nonatomic, strong) NSManagedObjectModel * __nonnull managedObjectModel;
@property (nonatomic, strong) NSPersistentStoreCoordinator * __nonnull persistentStoreCoordinator;
@property (nonatomic, strong) NSManagedObjectContext * __nonnull managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MKMapItem;

SWIFT_CLASS("_TtC7Air_End9CloseTask")
@interface CloseTask : NSObject
@property (nonatomic, strong) MKMapItem * __nullable mapItem;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UISegmentedControl;
@class UITableView;
@class Task;
@class CLLocationManager;
@class CLLocation;
@class UIStoryboardSegue;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7Air_End6ListVC")
@interface ListVC : UIViewController
@property (nonatomic, strong) IBOutlet UISegmentedControl * __null_unspecified segmentedControl;
@property (nonatomic, strong) IBOutlet UITableView * __null_unspecified tableView;
@property (nonatomic, readonly, strong) Task * __nonnull taskManager;
@property (nonatomic, copy) NSDictionary<NSString *, NSArray<MKMapItem *> *> * __nonnull closeMapItems;
@property (nonatomic, readonly, strong) CLLocationManager * __nonnull locationManager;
@property (nonatomic, strong) CLLocation * __nullable currentLocation;
@property (nonatomic, strong) Task * __nullable selectedTask;
@property (nonatomic, strong) MKMapItem * __nullable selectedClosestTask;
- (void)viewDidLoad;
- (void)getLocation;
- (void)viewWillAppear:(BOOL)animated;
- (void)setUpUI;
- (void)segmentDueSoon;
- (void)segmentCloseTasks;
- (void)segmentFullList;
- (IBAction)segmentedControlValueChanged:(UISegmentedControl * __nonnull)sender;
- (void)addItemButtonWasTapped;
- (IBAction)unwindToListVC:(UIStoryboardSegue * __nonnull)segue;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSIndexPath;
@class UITableViewCell;

@interface ListVC (SWIFT_EXTENSION(Air_End)) <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
@end

@class MKLocalSearchRequest;

@interface ListVC (SWIFT_EXTENSION(Air_End)) <CLLocationManagerDelegate>
- (BOOL)determineLocationAuthorizationStatus;
- (void)locationManager:(CLLocationManager * __nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManager:(CLLocationManager * __nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * __nonnull)locations;
- (void)findCloseLocationsMatchingNoun:(NSString * __nonnull)nounDescriptor;
- (NSString * __nullable)findClosestLocationNameForTask:(Task * __nonnull)task;
- (MKLocalSearchRequest * __nullable)initalizeRequestWithDescriptor:(NSString * __nonnull)nounDescriptor;
@end

@class UIDatePicker;
@class UIView;
@class UIButton;
@class UITextField;
@class NSDate;

SWIFT_CLASS("_TtC7Air_End9NewTaskVC")
@interface NewTaskVC : UIViewController
@property (nonatomic, strong) IBOutlet UIDatePicker * __null_unspecified datePicker;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified sendButtonContainer;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified dateContainer;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified nounContainer;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified taskContainer;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified sendButton;
@property (nonatomic, strong) IBOutlet UITextField * __null_unspecified nounTextField;
@property (nonatomic, strong) IBOutlet UITextField * __null_unspecified taskTextField;
@property (nonatomic, strong) NSDate * __nonnull date;
@property (nonatomic, copy) NSArray<UITextField *> * __nonnull textFields;
@property (nonatomic, copy) NSArray<UIView *> * __nonnull containers;
@property (nonatomic, strong) Task * __nonnull task;
- (void)viewDidLoad;
- (void)setUpUI;
- (void)handleSingleTap;
- (IBAction)datePickerChanged:(UIDatePicker * __nonnull)sender;
- (IBAction)sendButtonWasTapped:(UIButton * __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NewTaskVC (SWIFT_EXTENSION(Air_End)) <UITextFieldDelegate>
@end

@class RLMRealm;
@class RLMObjectSchema;
@class RLMSchema;

SWIFT_CLASS("_TtC7Air_End4Noun")
@interface Noun : RealmSwiftObject
@property (nonatomic, copy) NSString * __nullable descriptor;
@property (nonatomic, strong) Task * __nullable parentTask;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id __nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * __nonnull)realm schema:(RLMObjectSchema * __nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id __nonnull)value schema:(RLMSchema * __nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7Air_End4Task")
@interface Task : RealmSwiftObject
@property (nonatomic, copy) NSString * __nonnull id;
@property (nonatomic, copy) NSString * __nonnull name;
@property (nonatomic, strong) NSDate * __nonnull dueDate;
@property (nonatomic, strong) Noun * __nullable hashtag;
@property (nonatomic) BOOL isCompleted;
+ (NSString * __nullable)primaryKey;
- (void)createNewTaskWith:(NSString * __nonnull)id name:(NSString * __nonnull)name dueDate:(NSDate * __nonnull)dueDate noun:(Noun * __nonnull)noun withCompletionHandler:(void (^ __nullable)(Task * __nonnull))handler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id __nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * __nonnull)realm schema:(RLMObjectSchema * __nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id __nonnull)value schema:(RLMSchema * __nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class MKMapView;
@class MKPointAnnotation;

SWIFT_CLASS("_TtC7Air_End9TaskMapVC")
@interface TaskMapVC : UIViewController
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified taskLabel;
@property (nonatomic, strong) IBOutlet MKMapView * __null_unspecified taskMapView;
@property (nonatomic, strong) Task * __nullable task;
@property (nonatomic, strong) MKMapItem * __nullable closestTask;
- (void)viewDidLoad;
- (void)setUpUI;
- (void)dropPinsForTask;
- (MKPointAnnotation * __nonnull)calculateCloseTaskAnnotation;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UITableView (SWIFT_EXTENSION(Air_End))
@end


@interface UIViewController (SWIFT_EXTENSION(Air_End))
- (NSString * __nonnull)generateRandomPassCode;
- (BOOL)allTextFieldsAreFilled:(NSArray<UITextField *> * __nonnull)textFields;
- (void)animateTextField:(UITextField * __nonnull)textField;
@end


@interface UIViewController (SWIFT_EXTENSION(Air_End))
@end


@interface UIViewController (SWIFT_EXTENSION(Air_End))
- (NSInteger)convertBooltoInt:(BOOL)bool_;
- (NSString * __nonnull)convertNSDateToString:(NSDate * __nonnull)date;
- (NSDate * __nonnull)convertStringToNSDate:(NSString * __nonnull)date;
@end

#pragma clang diagnostic pop