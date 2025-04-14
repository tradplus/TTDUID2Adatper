

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TTDUID2ManagerAdatper : NSObject

+ (TTDUID2ManagerAdatper *)sharedInstance;
///启动SDK
- (void)startWithCallback:(void (^)( NSError * _Nullable error))callback;
///获取token
- (NSString * _Nullable)getToken;
///重置所有的配置
- (void)resetSetting;

@property (nonatomic,strong)NSString *_Nullable email;
@property (nonatomic,strong)NSString *_Nullable emailHash;
@property (nonatomic,strong)NSString *_Nullable phone;
@property (nonatomic,strong)NSString *_Nullable phoneHash;
@property (nonatomic,strong)NSString *_Nullable subscriptionID;
@property (nonatomic,strong)NSString *_Nullable serverPublicKey;
@property (nonatomic,strong)NSString *_Nullable appName;
@property (nonatomic,strong)NSString *_Nullable customURLString;

@property (nonatomic,assign)BOOL isTestMode;
@end

NS_ASSUME_NONNULL_END
