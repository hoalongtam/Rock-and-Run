//
//  EBayErrorCodes.h
//  eBayMobileSDK
//
//  Created on 10/14/10.
//

#define EBAY_ERROR_ID_BASE						0
#define EBAY_ERROR_ID_CONFIGURATION				(EBAY_ERROR_ID_BASE +  1000)
#define EBAY_ERROR_ID_HANDLER					(EBAY_ERROR_ID_BASE +  2000)
#define EBAY_ERROR_ID_BINDING					(EBAY_ERROR_ID_BASE +  3000)
#define EBAY_ERROR_ID_TRANSPORT					(EBAY_ERROR_ID_BASE +  4000)
#define EBAY_ERROR_ID_INVOCATION				(EBAY_ERROR_ID_BASE +  5000)
#define EBAY_ERROR_ID_SECURITY					(EBAY_ERROR_ID_BASE +  6000)
#define EBAY_ERROR_ID_ERROR_HANDLING			(EBAY_ERROR_ID_BASE +  7000)
#define EBAY_ERROR_ID_SYSTEM					(EBAY_ERROR_ID_BASE + 10000)

// Configuration errors
#define EBAY_ERROR_ID_MISSING_CONFIGURATION_FILE		(EBAY_ERROR_ID_CONFIGURATION + 1) /**< The configuration file for the service was not found. */
#define EBAY_ERROR_ID_CONFIGURATION_FILE_READ_ERROR		(EBAY_ERROR_ID_CONFIGURATION + 2) /**< The configuration file for the service could not be read. */
#define EBAY_ERROR_ID_CONFIGURATION_MALFORMED_FILE		(EBAY_ERROR_ID_CONFIGURATION + 3) /**< The configuration file is malformed. */
#define EBAY_ERROR_ID_CONFIGURATION_ERROR				(EBAY_ERROR_ID_CONFIGURATION + 4) /**< The configuration specified in the file is invalid. For example, a custom handler specified in the file is not found at runtime. */
#define EBAY_ERROR_ID_HANDLER_CONFIGURATION_ERROR		(EBAY_ERROR_ID_CONFIGURATION + 5) /**< A pipeline handler could not be configured with the specified options. */

// Transport errors
#define EBAY_ERROR_ID_CONNECTION_FAILED			(EBAY_ERROR_ID_TRANSPORT + 1) /**< A connection using the active service location could not be established. */
#define EBAY_ERROR_ID_MALFORMED_URL				(EBAY_ERROR_ID_TRANSPORT + 2) /**< The provided service location is not valid. Please note that the service location must be prefixed by the protocol (e.g. https://) */
#define EBAY_ERROR_ID_UNSUPPORTED_URL			(EBAY_ERROR_ID_TRANSPORT + 3) /**< The provided service location cannot be handled. This can happen for example when the protocol specified cannot be handled by the system. */
#define EBAY_ERROR_ID_SERVER_ERROR_RESPONSE		(EBAY_ERROR_ID_TRANSPORT + 4) /**< The server responded to the request with an error (3456xx response code for HTTP requests). */
#define EBAY_ERROR_ID_CONNECTION_TIMED_OUT		(EBAY_ERROR_ID_TRANSPORT + 5) /**< The connection timed out. */

// Invocation errors
#define EBAY_ERROR_ID_INVALID_REQUEST_OBJECT		(EBAY_ERROR_ID_INVOCATION + 1) /**< The object passed to the invoker is not a valid request object. */
#define EBAY_ERROR_ID_INVALID_CANCEL_REQUEST		(EBAY_ERROR_ID_INVOCATION + 2) /**< Cancel was called for a request that is not executing. */
#define EBAY_ERROR_ID_INVALID_REQUEST_CONFIGURATION	(EBAY_ERROR_ID_INVOCATION + 3) /**< The request was configured the wrong way (e.g. json request binding for request that uploads a picture, as only xml is supported for this.). */
#define EBAY_ERROR_ID_HOST_UNREACHABLE				(EBAY_ERROR_ID_INVOCATION + 4) /**< The host identified by the service location is not reachable. Check your network connectivity and the validity of the service location. */

// Security errors
#define EBAY_ERROR_ID_OAUTH_UNKNOWN_ERROR				(EBAY_ERROR_ID_SECURITY + 1) /**< An unidentified error occurred during the authentication process. */
#define EBAY_ERROR_ID_OAUTH_PAGE_LOADING_ERROR			(EBAY_ERROR_ID_SECURITY + 2) /**< The a web page could not be loaded during the sign-in process. */
#define EBAY_ERROR_ID_OAUTH_INVALID_REQUEST				(EBAY_ERROR_ID_SECURITY + 3) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_INVALID_CLIENT				(EBAY_ERROR_ID_SECURITY + 4) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_UNAUTHORIZED_CLIENT			(EBAY_ERROR_ID_SECURITY + 5) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_REDIRECT_URI_MISMATCH		(EBAY_ERROR_ID_SECURITY + 6) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_UNSUPPORTED_RESPONSE_TYPE	(EBAY_ERROR_ID_SECURITY + 7) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_INVALID_SCOPE				(EBAY_ERROR_ID_SECURITY + 8) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_OAUTH_CANCELED					(EBAY_ERROR_ID_SECURITY + 9) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_INVALID_TOKEN						(EBAY_ERROR_ID_SECURITY + 10) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_EXPIRED_TOKEN						(EBAY_ERROR_ID_SECURITY + 11) /**< OAuth 2.0 error. See http://tools.ietf.org/html/draft-ietf-oauth-v2-10#section-3.2.1 */
#define EBAY_ERROR_ID_APPLICATION_NOT_ALLOWED			(EBAY_ERROR_ID_SECURITY + 12) /**< The application is not authorized to use the eBayiOSMobileSDK. ApplicationID is not valid. */
#define EBAY_ERROR_ID_USER_ABORTED          			(EBAY_ERROR_ID_SECURITY + 13) /**< User has been aborted the sign in process */
#define EBAY_ERROR_ID_OAUTH_REDIRECT_URL_VERIFICATION_ERROR    (EBAY_ERROR_ID_SECURITY + 14) /** OAuth redirect URL verification error*/

// System errors
#define EBAY_ERROR_ID_RUNTIME_EXCEPTION			(EBAY_ERROR_ID_SYSTEM + 1) /**< A runtime exception has occurred, e.g. in low memory conditions. */


