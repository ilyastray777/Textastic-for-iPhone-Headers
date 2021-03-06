/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "UIWebViewDelegate.h"

@class NSURL, UILabel, UIWebView, UIActivityIndicatorView, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface InfoViewController : UIViewController <UIWebViewDelegate> {
	UIWebView* webView;
	NSURL* url;
	BOOL showsUI;
	UIBarButtonItem* backButton;
	UIActivityIndicatorView* activityIndicator;
	UILabel* requestLabel;
	BOOL isFeedback;
}
@property(assign, nonatomic) BOOL isFeedback;
@property(retain, nonatomic) UIWebView* webView;
-(void)dealloc;
-(void)doneButtonAction:(id)action;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showUI;
-(void)viewWillAppear:(BOOL)view;
-(void)tocButtonAction:(id)action;
-(id)flexibleSpace;
-(void)viewDidLoad;
-(void)loadFile:(id)file;
@end

