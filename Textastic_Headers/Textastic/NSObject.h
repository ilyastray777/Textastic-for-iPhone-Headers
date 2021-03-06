/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>


@protocol NSObject
-(id)debugDescription;
-(id)description;
-(unsigned)retainCount;
-(id)autorelease;
-(oneway void)release;
-(id)retain;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)conformsToProtocol:(id)protocol;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isProxy;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector;
-(NSZone*)zone;
-(id)self;
-(Class)class;
-(Class)superclass;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

@interface NSObject (DDExtensions)
-(id)dd_invokeOnMainThreadAndWaitUntilDone:(BOOL)done;
-(id)dd_invokeOnMainThread;
@end

@interface NSObject (JRSwizzle)
+(BOOL)jr_swizzleClassMethod:(SEL)method withClassMethod:(SEL)classMethod error:(id*)error;
+(BOOL)jr_swizzleMethod:(SEL)method withMethod:(SEL)method2 error:(id*)error;
@end

@interface NSObject (NSObject_SBJSON)
-(id)JSONRepresentation;
-(id)JSONFragment;
@end

