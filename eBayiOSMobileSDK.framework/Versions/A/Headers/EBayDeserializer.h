//
//  EBayDeserializer.h
//  eBayMobileSDK
//
//  Created on 9/21/10.
//

#import <Foundation/Foundation.h>

/**
	The protocol that must be implemented by a custom deserializer.
	A custom deserializer can be set in the service configuration file in the <binding> section of the XML.

	@code
	<binding name="json">
		<deserializer-factory>
			<class-name>MyJSONDeserializer</class-name>
			<option name="opName">opValue</option>
		</deserializer-factory>
	</binding>
	@endcode

	You can create your own custom deserialization for new bindings or to replace the default implementation for supported bindings.
	The data bindings for requests and responses can be different. They can be specified in the configuration file.
 
	@code
	<default-request-data-binding>json</default-request-data-binding>
	<default-response-data-binding>xml</default-response-data-binding>
	@endcode
 
	@see EBaySerializer.
 
	@ingroup extensibility
 */
@protocol EBayDeserializer<NSObject>

@required

/**
	Initialize with options.
 
	@param[in] options	Key-value pairs of NSStrings. They can be set in the configuration file under 
	the component they customize (e.g. <option name="OptionKey">OptionValue</option>).
	@return An initialized instance of this class.
 
	@throw EBayException If the deserializer could not be instantiated or configured.
 */
-(id) initWithOptions:(NSDictionary*)options;

/**
	Deserialize object.
 
	@param data	 The serialized object data.
	@param class The serialized object class.
	@return The deserialized object.
 
	@attention The class must implements the EbayNs_Bindable protocol.
 */
-(id) deserialize:(NSData*)data toClass:(Class)class;

@end
