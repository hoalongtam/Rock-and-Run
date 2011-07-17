//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Basic type for specifying measures and the system of measurement.
 A decimal value (e.g., 10.25) is meaningful
 as a measure when accompanied by a definition of the unit of measure (e.g., Pounds),
 in which case the value specifies the quantity of that unit.
 A MeasureType expresses both the value (a decimal) and, optionally, the unit and
 the system of measurement.
 Details such as shipping weights are specified as measure types.
 
 
 @ingroup Trading
*/
@interface Trading_MeasureType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *value;
    NSString *unit;
    NSString *measurementSystem;

}


/**
 (public property)
 
 type : NSNumber, wrapper for primitive double
*/
@property (nonatomic, retain) NSNumber *value;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *unit;

/**
 (public property)
 
 type: string constant in Trading_MeasurementSystemCodeType.h
*/
@property (nonatomic, retain) NSString *measurementSystem;


@end
