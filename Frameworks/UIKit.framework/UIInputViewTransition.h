/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputViewAnimationStyle, UIInputViewSet;



@interface UIInputViewTransition : NSObject 
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
    UIInputViewAnimationStyle *animationStyle;
    BOOL cancelled;
    BOOL animationDidStart;
    double animationStartTime;
    BOOL skipNotifications;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } beginFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } endFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } beginFrameScreen;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } endFrameScreen;
}

@property(readonly) NSInteger beginState;
@property(readonly) NSInteger transitioningState;
@property(readonly) NSInteger endState;
@property(readonly) CGRect deprecatedBounds;
@property(readonly) CGPoint deprecatedCenterBegin;
@property(readonly) CGPoint deprecatedCenterEnd;
@property CGRect endFrameScreen;
@property CGRect beginFrameScreen;
@property CGRect endFrame;
@property CGRect beginFrame;
@property BOOL skipNotifications;
@property double animationStartTime;
@property BOOL animationDidStart;
@property BOOL cancelled;
@property(retain) UIInputViewAnimationStyle *animationStyle;
@property(retain) UIInputViewSet *newSet;
@property(retain) UIInputViewSet *oldSet;


- (id)oldSet;
- (id)newSet;
- (double)animationStartTime;
- (BOOL)skipNotifications;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })beginFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })beginFrameScreen;
- (struct CGPoint { float x1; float x2; })deprecatedCenterEnd;
- (struct CGPoint { float x1; float x2; })deprecatedCenterBegin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deprecatedBounds;
- (NSInteger)transitioningState;
- (NSInteger)beginState;
- (NSInteger)endState;
- (BOOL)isAlmostDone;
- (BOOL)requiresAutomaticAppearanceEnabled;
- (void)setEndFrameScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBeginFrameScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSkipNotifications:(BOOL)arg1;
- (void)setAnimationDidStart:(BOOL)arg1;
- (void)setNewSet:(id)arg1;
- (void)setOldSet:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrameScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrame;
- (BOOL)animationDidStart;
- (BOOL)cancelled;
- (BOOL)subsumesTransition:(id)arg1;
- (void)postNotificationsForTransitionStart;
- (void)postNotificationsForTransitionEnd;
- (BOOL)canAnimate;
- (id)animationStyle;
- (void)setAnimationStyle:(id)arg1;
- (void)setAnimationStartTime:(double)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)dealloc;

@end