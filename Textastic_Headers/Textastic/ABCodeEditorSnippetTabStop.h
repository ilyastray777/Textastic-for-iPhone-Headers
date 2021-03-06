/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class ABUnsignedIntegerArray;

@interface ABCodeEditorSnippetTabStop : NSObject {
	unsigned _intervalIndex;
	ABUnsignedIntegerArray* _mirrorIntervalIndexes;
	ABUnsignedIntegerArray* _transformIndexes;
	ABUnsignedIntegerArray* _childTabStopIndexes;
	ABUnsignedIntegerArray* _childTransformIndexes;
	ABUnsignedIntegerArray* _childMirrorIndexes;
}
@property(readonly, assign, nonatomic) ABUnsignedIntegerArray* childMirrorIndexes;
@property(readonly, assign, nonatomic) ABUnsignedIntegerArray* childTransformIndexes;
@property(readonly, assign, nonatomic) ABUnsignedIntegerArray* childTabStopIndexes;
@property(readonly, assign, nonatomic) ABUnsignedIntegerArray* transformIndexes;
@property(readonly, assign, nonatomic) ABUnsignedIntegerArray* mirrorIntervalIndexes;
@property(assign, nonatomic) unsigned intervalIndex;
+(id)tabStop;
-(void)dealloc;
-(id)init;
@end

