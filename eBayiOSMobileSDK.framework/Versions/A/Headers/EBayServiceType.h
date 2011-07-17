/*
 *  EBayServiceType.h
 *  eBayMobileSDK
 *
 *  Created on 9/22/10.
 */

/**
	eBay Web Service Types.
	@ingroup services
 */
typedef enum EBayServiceType
{
	kEBayServiceTypeFinding = 1,	/**< Finding service	*/
	kEBayServiceTypeShopping = 2,	/**< Shopping service	*/
	kEBayServiceTypeTrading = 3,	/**< Trading service	*/

	kEBayServiceTypeDeviceConfiguration = 4, /**< Device configuration service. For internal use only. */
} EBayServiceType;
