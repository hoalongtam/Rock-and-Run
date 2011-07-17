//
//  EBayServiceClientConfig.h
//  eBayMobileSDK
//
//  Created on 9/20/10.
//

#import <Foundation/Foundation.h>

#import "EBayServiceType.h"

@protocol EBayTransport;
@protocol EBayErrorResolver;
@protocol EBaySerializer;
@protocol EBayDeserializer;
@protocol EBayServiceAccessPolicy;

/**
	This class encapsulates the service specific configuration details loaded from file or specified at runtime.
	There is one instance for each created service.
 
	It describes the configuration of the client runtime system for consuming the services, 
	for example, what are the handlers to be invoked, what are the serializers to use for 
	serialization/deserialization etc… Some of these settings can be changed at runtime, 
	but are rather static in nature; most of the time they usually require design-time change
	and not in a per-call basis. 
 
	@attention	Do not change runtime settings while there are request invoked on the service.
 
	@ingroup extensibility
 */
@interface EBayServiceClientConfig : NSObject
{
	NSString *defaultRequestBinding_;
	NSString *defaultResponseBinding_;
	NSString *defaultServiceLocation_;

	NSDictionary *operationToResponseMap_;
	NSDictionary *requestToOperationMap_;

	NSMutableDictionary *bindingToSerializerMap_;
	NSMutableDictionary *bindingToDeserializerMap_;

	NSMutableArray *requestHandlers_;
	NSMutableArray *responseHandlers_;

	id<EBayTransport> transport_;

	id<EBayErrorResolver> errorResolver_;
	id<EBayServiceAccessPolicy> accessPolicy_;

	EBayServiceType serviceType_;

	NSDictionary *customHeaders_;
	NSDictionary *customQueryParameters_;

	BOOL debugMode_;
	NSString *environment_;
	NSString *serviceLocation_;
	
	NSString *localeIdentifier_;
}

/**
	The default data binding (XML, JSON etc…) to use when sending a request.
 
	Can be set in the service configuration file in the <default-request-binding> section of the XML.
	@code 
	<default-request-data-binding>XML</default-request-data-binding>
	@endcode

	@remark If not specified in the file, will default to XML.
 */
@property (readonly) NSString *defaultRequestBinding;

/**
	The default data binding (XML, JSON etc…) expected when receiving a response.
 
	Can be set in the service configuration file in the <default-response-binding> section of the XML.
	@code
	<default-response-data-binding>XML</default-response-data-binding>
	@endcode
 
	@remark If not specified in the file, will default to XML.
 */
@property (readonly) NSString *defaultResponseBinding;

/**
	The list of handlers to be invoked when sending a request.

	They can be specified in the service configuration file in the <request-pipeline> section of the XML.
	@code
	<request-pipeline>
		<handler name="ConnectionMonitorHandler">
			<class-name>ConnectionMonitorHandler</class-name>
		</handler>
		<handler name="SecurityHandler">
			<class-name>MySecurityHandler</class-name>  
		</handler>
		<handler name="eBayServiceInvocationHandler">
			<class-name>eBayServiceInvocationHandler</class-name>
		</handler>
	</request-pipeline>
	@endcode
 
	@see EBayPipelineHandler
 */
@property (readonly) NSArray *requestHandlers;

/**
	The list handlers to be invoked when receiving a response.
 
	They can be specified in the service configuration file in the <request-pipeline> section of the XML.
	@code
	<response-pipeline>
		<handler name="MyCustomResponseLogger">
			<class-name>MyCustomResponseLogger</class-name>
		</handler>
		<handler name="MyCustomTimingReporting">
			<class-name>MyCustomTimingReporting</class-name>  
		</handler>
	</response-pipeline>
	@endcode

	@see EBayPipelineHandler
 */
@property (readonly) NSArray *responseHandlers;

/**
	The transport used for requests/responses.

	A custom transport can be set in the service configuration file in the <transport> section of the XML.
	@see EBayTransport
 */
@property (readonly) id<EBayTransport> transport;

/**
	The error resolver used for a received response.
 
	A custom error resolver can be specified in the service's configuration file in the <error-resolver> section of the XML.
	@see EBayErrorResolver
 */
@property (readonly) id<EBayErrorResolver> errorResolver;

/**
	The access policy for the service. It cannot be configured, it is provided by the library.
	@see EBayServiceAccessPolicy
 */
@property (readonly) id<EBayServiceAccessPolicy> accessPolicy;

/**
	The type of service the configuration describes.
 */
@property (readonly) EBayServiceType serviceType;

/**
	The custom headers the users set to be added to each request.
	They should take precedence over the ones that are added by the library.
 */
@property (nonatomic, retain) NSDictionary *customHeaders;

/**
	The custom query parameters the users set to be added to each request.
	They should take precedence over the ones that are added by the library.
 */
@property (nonatomic, retain) NSDictionary *customQueryParameters;

/**
	Specifies if debug mode is enabled or not. Should be set only by the user of the library, not internally.
 */
@property (nonatomic) BOOL debugMode;

/**
	Specifies the environment the service is being run against (e.g. production, sandbox).
	The environment can be changed by the user at runtime. Changing the environment causes
    the service location to be changed as well, as specified in the access policy.

	@attention If a custom service location is specified, it takes precedence over the one from the access policy.
			   The service location must be set to nil in order for the environment one to be used.
 
	@see serviceLocation
	@see EBayServiceAccessPolicy
 */
@property (nonatomic,copy) NSString *environment;

/**	
	Specifies a custom service location that should be used for all requests, no matter the set environment.
	This is a runtime override the user can specify. Must be set to nil to disable it.
 */
@property (nonatomic,copy) NSString *serviceLocation;

/**
    Specifies a locale identifier(such as 'en_US', 'de_DE') that should be used by SDK to figure out locale specific signin endpoint.
    The SDK will automatically figure out locale specific signin endpoint based on this setting, if this is
    not set or is set to nil, locale setting on device will be used by SDK to figure out the locale specific sigin endpoint address.
    Note: this setting will be ignored if the signin endpoint for this locale is not support.
    This is a runtime override the user can specify. Must be set to nil to disable it.
 */
@property (nonatomic,copy) NSString *localeIdentifier;

/**
	Loads the configuration of a service from the given file.
	For un-configured parameters default values are provided.
 
	@param[in] filePath The full path to the configuration file.
	@param[in] serviceType The eBay service type the configuration is for.
	@param[in] accessPolicy The accessPolicy for the service being configured.
	@return An initialized instance of the calls.
 
	@throw EBayException if the file cannot be read or the configuration file is invalid.
 */
-(id) initFromFile:(NSString*)filePath forServiceType:(EBayServiceType)serviceType andPolicy:(id<EBayServiceAccessPolicy>)accessPolicy;

/**
	Obtains the class of a response object for the given operation.

	@param[in] operation The name of the operation performed.
	@return The Class of the corresponding response object or nil if not found.
 */
-(Class) responseClassForOperation:(NSString*)operation;

/**
	Obtains the operation name for the given request type.

	@param[in] requestClass The class of the request object.
	@return The operation name the request performs or nil if not found.
 */
-(NSString*) operationForRequestClass:(Class)requestClass;

/**
	Obtains the used serializer for the given binding.

	@param[in] binding The type of binding for the serializer. E.g. @"xml", @"json".
	@return The serializer that handles the specified binding or nil if none is found.
 */
-(id<EBaySerializer>) serializerForBinding:(NSString*)binding;

/**
	Obtains the used deserializer for the given binding.

	@param[in] binding The type of binding for the deserializer. E.g. @"xml", @"json".
	@return The deserializer that handles the specified binding or nil if none is found.
 */
-(id<EBayDeserializer>) deserializerForBinding:(NSString*)binding;

/**
	Gets the address where to send the request to. This is obtained from the environment default URL 
	or from the user specified serviceLocation which takes precedence.
 
	@return The service providers host address.
 */
-(NSString*) serviceHostAddress;

/**
   Gets the endpoint address for OAuth. This is specific to environment and locale
 
   @return The authenticate endpoint address.
 */
-(NSString*) authenticateEndpointAddress;

@end
