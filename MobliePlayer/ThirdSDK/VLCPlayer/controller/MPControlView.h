//
//  MPControlView.h
//  MobliePlayer
//
//  Created by zyyt on 17/4/5.
//  Copyright © 2017年 conglei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MPSlider.h"

@protocol MPControlViewDelegate <NSObject>
/** 播放按钮 */
- (void)DelegatePlayBtn:(UIButton *)play;
/** 全屏 */
- (void)DelegateFullScreenBtn:(UIButton *)fullScreen;
/** 关闭视频 */
- (void)DelegateCloseBtn:(UIButton *)close;
- (void)DelegateProgressSlider:(UISlider *)slider;
- (void)DelegateProgressSliderFinish;
- (void)DelegateFontSliderTapped:(UITapGestureRecognizer *)tapGesture;
/** 处理双击操作 */
-(void)DelegateDoubleTap:(UITapGestureRecognizer*)recognizer;
@end



@interface MPControlView : UIView

/** 播放按钮 */
@property (strong,nonatomic) UIButton *playBtn;
/** 全屏按钮 */
@property (strong,nonatomic) UIButton *fullScreenBtn;
/** 关闭视频 */
@property (strong,nonatomic) UIButton *closeBtn;
/** 播放进度条 */
@property (strong,nonatomic) UISlider *playProgress;
/** 播放进度条默认 */
@property (strong,nonatomic) MPSlider *bottomProgress;
/** 播放的时间 */
@property (strong,nonatomic) UILabel *playTimeLabel;
/** 总的时间 */
@property (strong,nonatomic) UILabel *videoTimeLabel;
/** 暂停 */
@property (strong,nonatomic) UITapGestureRecognizer *doubleStop;
/** topImage */
@property (strong,nonatomic) UIImageView *topImage;
/** bottomImage */
@property (strong,nonatomic) UIImageView *bottomImage;
/** 加载失败按钮 */
@property (strong,nonatomic) UIButton *failBtn;
/** 是否隐藏 */
@property (assign,nonatomic) BOOL isHiddenControl;
@property (weak, nonatomic) id<MPControlViewDelegate>delegate;

+ (id)controlView;
- (void)showAnimation;
- (void)hideAnimation;

/** 快进 */
- (void)MPPlayerManagerProgress:(CGFloat)progress time:(NSString *)time value:(CGFloat)value;


@end
