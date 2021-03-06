/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPURLRequestParameter.h"


__attribute__((visibility("hidden")))
@interface MPOAuthSignatureParameter : MPURLRequestParameter {
}
+(id)HMAC_SHA1SignatureForText:(id)text usingSecret:(id)secret;
+(id)signatureBaseStringUsingParameterString:(id)string forRequest:(id)request;
-(oneway void)dealloc;
-(id)initUsingHMAC_SHA1WithText:(id)text andSecret:(id)secret forRequest:(id)request;
-(id)initWithText:(id)text andSecret:(id)secret forRequest:(id)request usingMethod:(id)method;
@end

