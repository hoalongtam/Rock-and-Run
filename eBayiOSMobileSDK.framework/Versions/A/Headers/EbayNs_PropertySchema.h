//
//  EbayNs_PropertySchema.h
//  OCXB
//
//  Created by William Yang on 8/29/10.
//  Copyright 2010 eBay CDC. All rights reserved.
//

@interface EbayNs_PropertySchema : NSObject {
	
@private
	// property kind
	NSString *propertyKind;
	// xml name
	NSString *xmlName;
	// property name
	NSString *propertyName;
	// property type
	NSString *propertyType;
	// class name of the type
	Class clazz;
}

@property (nonatomic, assign) NSString *propertyKind;
@property (nonatomic, assign) NSString *xmlName;
@property (nonatomic, assign) NSString *propertyName;
@property (nonatomic, assign) NSString *propertyType;
@property (nonatomic, assign) Class clazz;

-(id)initWithKind: (NSString *)pKind xmlName: (NSString *)xName propertyName: (NSString *)proName type: (NSString *)pType clazz: (Class)clz;



@end
