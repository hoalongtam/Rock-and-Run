//
//  EBaySerializer.h
//  eBayMobileSDK
//
//  Created on 9/21/10.
//

#import <Foundation/Foundation.h>

/**
	The protocol that must be implemented by a custom serializer.
	A custom serializer can be set in the service configuration file in the <binding> section of the XML.

	@code
	<binding name="json">
		<serializer-factory>
			<class-name>MyJSONSerializer</class-name>
			<option name="opName">opValue</option>
		</serializer-factory>
	</binding>
	@endcode

	You can create your own custom serialization for new bindings or to replace the default implementation for supported bindings.
	The data bindings for requests and responses can be different. They can be specified in the configuration file.
 
	@code
		<default-request-data-binding>json</default-request-data-binding>
		<default-response-data-binding>xml</default-response-data-binding>
	@endcode

	@see EBayDeserializer.

	@ingroup extensibility
 */
@protocol EBaySerializer<NSObject>

@required

/**
	Initialize with options.
 
	@param[in] options	Key-value pairs of NSStrings. They can be set in the configuration file under 
	the component they customize (e.g. <option name="OptionKey">OptionValue</option>).
	@return An initialized instance of this class.
 
	@throw EBayException If the serializer could not be instantiated or configured.
 */
-(id) initWithOptions:(NSDictionary*)options;

/**
	Serialize object.
	@param object The object to serialize.
	@returns The serialized object data.

	@attention The object being serialized must implement the EbayNs_Bindable protocol.
 */
-(NSData*) serialize:(id)object;

@optional
/**
	Serialize an object to name-value array of elements.
	The array has the format: [name, value, name, value,..., name, value].
 
	@param object	The object to be serialized.
	@returns An array with the name-value elements in succession.
 
	@attention The object being serialized must implement the EbayNs_Bindable protocol.
 */
-(NSArray*) serializeToNameValueArray:(id)object;

@end
