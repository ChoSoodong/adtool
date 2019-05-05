






#import <UIKit/UIKit.h>

/**
 启动广告页面
 */

static NSString *const adImageName = @"adImageName";
static NSString *const adUrl = @"adUrl";

typedef void(^TapBlock)();

@interface SDAdPageView : UIView

- (instancetype)initWithFrame:(CGRect)frame tapBlock:(TapBlock)tapBlock;

/** 显示广告页面方法*/
- (void)show;

/** 图片路径*/
@property (nonatomic, copy) NSString *filePath;

@end
