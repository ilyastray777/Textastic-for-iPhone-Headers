/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>

@class ABImmutableStack, OnigRegexp;
@protocol ABSyntaxParserDelegate, ABSyntaxParserDataSource;

@interface ABSyntaxParser : NSObject {
	const char* _currentLine;
	const char* _currentLinePos;
	const char* _currentLineEnd;
	OnigRegexp* _endMatchRegEx1;
	OnigRegexp* _endMatchRegEx2;
	unsigned _currentLineLocation;
	id<ABSyntaxParserDataSource> _dataSource;
	id<ABSyntaxParserDelegate> _delegate;
	ABImmutableStack* _currentStack;
}
@property(retain, nonatomic) ABImmutableStack* currentStack;
@property(assign, nonatomic) id<ABSyntaxParserDelegate> delegate;
@property(assign, nonatomic) id<ABSyntaxParserDataSource> dataSource;
-(id)scopeOfStack:(id)stack;
-(void)continueParsingWithStack:(id)stack;
-(void)parseLine:(id)line;
-(void)syntaxNode:(id)node parseCaptures:(id)captures matchResult:(id)result matchRange:(NSRange)range;
-(BOOL)syntaxNode:(id)node firstPatternMatchUntil:(const char*)until withReturnSyntaxNode:(id*)returnSyntaxNode returnMatchResult:(id*)result;
-(id)syntaxNode:(id)node endMatchWithBeginMatch:(id)beginMatch;
-(BOOL)syntaxNodeHasEndMatchWithBackReference:(id)backReference;
-(void)parseWithRootSyntaxNode:(id)rootSyntaxNode;
-(void)dealloc;
-(id)init;
@end
