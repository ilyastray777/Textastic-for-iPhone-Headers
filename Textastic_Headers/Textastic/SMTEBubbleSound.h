/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface SMTEBubbleSound : NSObject {
	NSURL* bubbleSoundURL;
	unsigned bubbleSoundID;
}
+(id)bubbleSound;
-(id)init;
-(void)dealloc;
-(void)appWillTerminate:(id)app;
-(void)bloop;
@end

