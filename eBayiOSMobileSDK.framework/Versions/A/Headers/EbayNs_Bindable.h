//
//  EbayNs_Bindable.h
//  ocxb
//
//  Created by William Yang on 9/29/10.
//  Copyright 2010 eBay CDC. All rights reserved.
//

#import <Foundation/Foundation.h>

//
// To make a class marshallable/unmarshallable by ocxb,
// it must implement EbayNs_Bindable prototol
// 

@class EbayNs_ClassSchema;
@protocol EbayNs_Bindable

+(EbayNs_ClassSchema *)getClassMetaData;
+(NSMutableDictionary *)getPropertyMetaData;

@end
