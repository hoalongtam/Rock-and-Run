//
//  EBayServiceInvokerFactory.h
//  eBayMobileSDK
//
//  Created on 9/20/10.
//

#import <Foundation/Foundation.h>

#import "EBayServiceType.h"

@class EBayServiceInvoker;

/**
	Creates concrete instances of EBayServiceInvoker.
	@ingroup services
 */
@interface EBayServiceInvokerFactory : NSObject
{
}

/**
	Creates a concrete service invoker for the specified service type.

	@param[in] serviceType The type of the service. See EBayServiceType for supported values.
	@return	An instance of the requested service or nil if the type is invalid.
	@throws EBayException if the service cannot be created or configured.

	@remark Upon creation, the service is configured based on the configuration file that should 
	reside in the application main bundle. The configuration file is an xml and must be named: 
	<b>\<ServiceName\>ClientConfig.xml</b>, where <b>\<ServiceName\></b> is the name of the service 
	(e.g. FindingService, ShoppingService or TradingService).
 
	@remark The factory reuses already created instances. Requesting the service of a certain type twice will return the same instance.
 */
+(EBayServiceInvoker*) serviceForType: (EBayServiceType)serviceType;

@end
