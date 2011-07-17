//
//  EbayNs_ClassSchema.h
//  OCXB
//
//  Created by William Yang on 8/29/10.
//  Copyright 2010 eBay CDC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EbayNs_ClassSchema : NSObject {
	
@private
	// xml name
	NSString *xmlName;
	// namespace URI
	NSString *nsURI;
	// namespace prefix
	NSString *nsPrefix;
}

@property (nonatomic, assign) NSString *xmlName;
@property (nonatomic, assign) NSString *nsURI;
@property (nonatomic, assign) NSString *nsPrefix;

-(id)initWithXmlName:(NSString *)name nsUri: (NSString *)uri nsPrefix: (NSString *)prefix;

@end
