/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface ABCodeEditorScalingView : UIView {
	NSMutableArray* _tiles;
	float _scale;
	BOOL _rotating;
	BOOL _drawSynchronously;
	BOOL _scaleChanged;
}
@property(readonly, assign, nonatomic) BOOL scaleChanged;
@property(assign, nonatomic) BOOL drawSynchronously;
@property(assign, nonatomic) BOOL rotating;
@property(assign, nonatomic) float scale;
-(void)tileVisibleRect;
-(void)drawScaledContentInContext:(CGContextRef)context operation:(id)operation;
-(void)establishTransformToViewSpace:(CGContextRef)viewSpace;
-(CGPoint)convertPointToViewSpace:(CGPoint)viewSpace;
-(CGPoint)convertPointFromViewSpace:(CGPoint)viewSpace;
-(CGRect)convertRectToViewSpace:(CGRect)viewSpace;
-(CGRect)convertRectFromViewSpace:(CGRect)viewSpace;
-(CGAffineTransform)transformFromViewSpace;
-(CGAffineTransform)transformToViewSpace;
-(CGPoint)viewPointForTouch:(id)touch;
-(CGPoint)viewPointForTouchPoint:(CGPoint)touchPoint;
-(void)displayLayer:(id)layer;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)setNeedsDisplay;
-(void)cancelBackgroundDrawing;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

