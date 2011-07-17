//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Shopping_DistanceType;
@class Shopping_ProductIDType;
@class Shopping_ShippingCostSummaryType;
@class Shopping_SimpleUserType;
@class Shopping_BusinessSellerDetailsType;
@class Shopping_StorefrontType;
@class Shopping_ReturnPolicyType;
@class Shopping_AmountType;
@class Shopping_CharityType;
@class Shopping_VariationsType;
@class Shopping_NameValueListArrayType;

/**
 (public class)
 
 @ingroup Shopping
*/
@interface Shopping_SimpleItemType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *bestOfferEnabled;
    Shopping_AmountType *buyItNowPrice;
    NSString *description;
    NSString *itemID;
    NSNumber *buyItNowAvailable;
    Shopping_AmountType *convertedBuyItNowPrice;
    NSDate *endTime;
    NSDate *startTime;
    NSString *viewItemURLForNaturalSearch;
    NSString *listingType;
    NSString *location;
    NSMutableArray *paymentMethods;
    NSString *galleryURL;
    NSMutableArray *pictureURL;
    NSString *postalCode;
    NSString *primaryCategoryID;
    NSString *primaryCategoryName;
    NSNumber *quantity;
    Shopping_SimpleUserType *seller;
    NSNumber *bidCount;
    Shopping_AmountType *convertedCurrentPrice;
    Shopping_AmountType *currentPrice;
    Shopping_SimpleUserType *highBidder;
    NSString *listingStatus;
    NSNumber *quantitySold;
    NSNumber *reserveMet;
    NSMutableArray *shipToLocations;
    NSString *site;
    NSString *timeLeft;
    NSString *title;
    Shopping_ShippingCostSummaryType *shippingCostSummary;
    Shopping_NameValueListArrayType *itemSpecifics;
    NSNumber *hitCount;
    NSString *subtitle;
    NSString *primaryCategoryIDPath;
    NSString *secondaryCategoryID;
    NSString *secondaryCategoryName;
    NSString *secondaryCategoryIDPath;
    Shopping_CharityType *charity;
    NSNumber *germanMotorsSearchable;
    NSNumber *getItFast;
    NSNumber *gift;
    NSNumber *pictureExists;
    NSNumber *recentListing;
    Shopping_StorefrontType *storefront;
    Shopping_DistanceType *distanceFromBuyer;
    NSString *country;
    NSNumber *watchCount;
    NSString *halfItemCondition;
    NSString *sellerComments;
    Shopping_ReturnPolicyType *returnPolicy;
    Shopping_AmountType *minimumToBid;
    Shopping_ProductIDType *productID;
    NSNumber *autoPay;
    Shopping_BusinessSellerDetailsType *businessSellerDetails;
    NSMutableArray *paymentAllowedSite;
    NSNumber *integratedMerchantCreditCardEnabled;
    Shopping_VariationsType *variations;
    NSNumber *handlingTime;
    NSNumber *lotSize;
    NSNumber *conditionID;
    NSString *conditionDisplayName;
    NSString *quantityAvailableHint;
    NSNumber *quantityThreshold;

}


/**
 
 Whether the seller will accept a best offer for this item.
 This feature enables a buyer to make a lower-priced binding offer on a
 fixed price item. Buyers can't see how many offers have been made
 (only the seller can see this information). To make a best offer on a
 listing, use the eBay Web site.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *bestOfferEnabled;

/**
 
 The Buy It Now price of the item, returned in the currency of the site
 on which the item was listed.
 <br />
 <br />
 For Chinese auctions (competitive bidding online auctions),
 Buy It Now lets a user purchase the item at a fixed price and
 end the auction immediately. On most sites, after a Chinese
 auction has bids, the listing is no longer eligible for Buy It Now.
 However, calls can return BuyItNowPrice if
 the seller originally listed the item with a Buy It Now option.
 Use the Item.BidCount field to determine whether an auction with
 Buy It Now has bids or not, and use Item.BuyItNowAvailable to see
 if the Buy It Now option is still available.
 <br />
 <br />
 Price fields are returned as doubles, not necessarily in the traditional
 monetary format of the site's country. For example, a US Dollar value might be
 returned as 3.880001 instead of 3.88.
 <br>
 <br />
 For fixed-price (FixedPriceItem) and Store Inventory listings
 (StoresFixedPrice), see CurrentPrice or ConvertedCurrentPrice instead.
 <br />
 <br />
 Returned only if an item was listed with a Buy It Now option.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *buyItNowPrice;

/**
 
 The seller's description of the item, if any. This can include
 HTML markup and JavaScript. See <a
 href="types/simpleTypes.html#string">string</a>
 in Simple Schema Types.
 <br>
 <br>
 Some sellers don't specify their own listing description.
 Instead, they use a stock description from a catalog available
 through eBay. (GetSingleItem doesn't return this stock information.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 The ID that uniquely identifies the item listing. eBay generates this ID
 when an item is listed. This ID is unique across all eBay sites.
 <br>
 <br>
 In search results (like the FindItemsAdvanced response), the same
 ItemID may be returned for multiple results if the results are
 variations from the same multi-variation listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Indicates whether the item has an active Buy It Now option. On most sites, the
 Buy It Now option is disabled once a valid bid for the item has been accepted.
 To see if the item was listed with a Buy It Now option, see if the response
 includes Item.BuyItNowPrice.
 <br />
 <br />
 This field is returned only if the value is true.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *buyItNowAvailable;

/**
 
 The listing's Buy It Now Price (if any), converted into the currency
 of the site to which you sent this request.
 <br />
 <br />
 Price fields are returned as doubles, not necessarily in the traditional
 monetary format of the site's country. For example, a US Dollar value might be
 returned as 3.880001 instead of 3.88.
 <br />
 <br />
 Some eBay sites also support multi-item Buy It Now auctions, where you can buy
 multiple items from the same listing at a fixed price. See Item.BuyItNowAvailable.
 <br>
 <br>
 For fixed-price (FixedPriceItem) and Store Inventory listings (StoresFixedPrice), see
 CurrentPrice or ConvertedCurrentPrice instead.
 <br>
 <br>
 Returned only if an item was listed with a Buy It Now option.
 <br>
 <br>
 For active items, refresh this value every 24 hours to pick up the current
 conversion rates (if this value has been converted).
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *convertedBuyItNowPrice;

/**
 
 Time stamp (in <a href="types/simpleTypes.html#dateTime">GMT</a>)
 of when the listing is scheduled to end, or time stamp of the actual end time
 (if the item ended). In FindItemsAdvanced and FindItems, for StoresFixedPrice
 items which are "Good Till Canceled," this value is 5 minutes later than the
 actual end time of the item. The discrepancy is intended to facilitate renewal
 every 30 days of such items' end times.
 <br>
 <br>
 In search results (like the FindItemsAdvanced response), the same
 EndTime may be returned for multiple results if the results are
 variations from the same multi-variation listing.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTime;

/**
 
 Time stamp (in <a href="types/simpleTypes.html#dateTime">GMT</a>) that
 eBay recorded as the moment that the listing was made available.
 The start time returned by a search call may vary
 from the value returned by GetSingleItem.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *startTime;

/**
 
 The URL to view this listing on eBay. This URL is optimized to support natural
 search. That is, this URL is designed to make items on eBay easier to find via
 popular Internet search engines. For example, this URL specifies the item title, and
 it is optimized for natural search: "_W0QQ" is like "?" (question mark), "QQ" is like
 "&" (ampersand), and "Z" is like "=" (equals sign). You shouldn't modify the
 query syntax in your application. For example, eBay won't recognize the URL if you
 change QQ to ?. In the Sandbox environment and on the Hong Kong site (site ID 201),
 the data returned in this field by FindItemsAdvanced is a standard ViewItem URL,
 rather than the ViewItem URL for natural search that generally is returned in the
 Production environment.
 <br>
 <br>
 In search results (like the FindItemsAdvanced response),if the
 result is a variation from a multi-variation listing, this link
 to the View Item page is configured to select the applicable
 variation.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *viewItemURLForNaturalSearch;

/**
 
 The format of the listing, such as online auction, fixed price,
 or advertisement format.
 
 
 type: string constant in Shopping_ListingTypeCodeType.h
*/
@property (nonatomic, retain) NSString *listingType;

/**
 
 Physical location of the item, as specified by the seller.
 (This gives a general indication of where the item will be
 shipped or delivered from.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *location;

/**
 
 Identifies the payment method (such as PayPal) the seller
 will accept when the buyer pays for the item. <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 If the seller only accepts PayPal, the buyer can still pay
 with a credit card. PayPal supports major credit cards.
 </span>
 <br>
 Payment methods are not applicable to eBay Real Estate advertisement
 listings, or other Classified Ad format listings.
 
 
 entry type : string constant in Shopping_BuyerPaymentMethodCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *paymentMethods;

/**
 
 URL for a picture used as the Gallery thumbnail, if any. The image uses
 one of the following graphics formats: JPEG, BMP, TIF, or GIF. Only
 returned if the seller chose to show a gallery image.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *galleryURL;

/**
 
 Contains the URL for an image associated with the item, if any.
 Returned only if the seller included at least one picture
 in their listing. Note that this element does not return the URLs of
 pictures that the seller included in the Description via HTML IMG tags.
 <br>
 <br>
 Items listed the main eBay site can have a maximum of 12 picture URLs
 hosted by eBay Picture Services, or a maximum of 6 picture URLs hosted by a
 third party (such as the a photo site). Note that a listing can have up to
 24 picture URLs on the US eBay Motors site (for all vehicle listings),
 and on the eBay Canada Motors site.
 <br>
 <br>
 eBay uses the seller's first picture at the top of the listing's
 View Item page.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *pictureURL;

/**
 
 Postal code indicating the physical location of the item,
 as specified by the seller. (This gives a general indication of where
 the item will be shipped or delivered from.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *postalCode;

/**
 
 Numeric ID of the first (or only) category in which the item is listed.
 (Listings can appear in more than one category.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *primaryCategoryID;

/**
 
 Display name of the first (or only) category in which the item is
 listed. This is a fully qualified category breadcrumb
 (e.g., Computers & Networking:Laptops, Notebooks).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *primaryCategoryName;

/**
 
 The number of items the seller is offering in the listing. (Subtract
 Item.QuantitySold from this value to calculate the number of items
 currently available for sale.)
 <br>
 <br>
 An online, comptetitive-bidding auction with a Quantity of 1 is referred to as a <
 i>Chinese</i> auction. Basic fixed-price and Store Inventory listings can
 have a Quantity of 1 or more.
 <br />
 <br />
 The listing's current or Buy It Now price is the price of the item in the
 listing.
 <br />
 <br />
 <span class="tablenote"><strong>Note:</strong>
 A seller can also offer multiple items for sale with a single
 price for all the items. For example, instead of listing 10 lightbulbs
 for US 2.00 each, they might list 10 lightbulbs for USD 20.00 (where
 you have to buy all 10). This is called a "lot."
 <br />
 <br />
 If the listing includes a lot, Quantity does not specify the lot size; it
 reflects how many lots are being sold. For example, if the original listing
 included 5 lots of 10 lightbulbs each, Quantity would be 5.
 </span>
 <br />
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;

/**
 
 Container for information about this listing's seller.
 
 
 type : class Shopping_SimpleUserType
*/
@property (nonatomic, retain) Shopping_SimpleUserType *seller;

/**
 
 The number of bids that have been placed on the item.
 <br>
 <br>
 On most sites, the Buy It Now Option becomes unavailable once an auction
 has a valid bid. Note that the bid must be above any reserve price.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *bidCount;

/**
 
 The listing's Buy It Now Price (if any), converted into the currency
 of the site to which you sent this request.
 <br />
 <br />
 Price fields are returned as doubles, not necessarily in the traditional
 monetary format of the site's country. For example, a US Dollar value might be
 returned as 3.880001 instead of 3.88.
 <br>
 <br />
 Some eBay sites also support multi-item Buy It Now auctions, where you can buy
 multiple items from the same listing at a fixed price. See Item.BuyItNowAvailable.
 <br>
 <br>
 For fixed-price (FixedPriceItem) and Store Inventory listings (StoresFixedPrice), see
 CurrentPrice or ConvertedCurrentPrice instead.
 <br>
 <br>
 Returned only if an item was listed with a Buy It Now option.
 <br>
 <br>
 For active items, refresh this value every 24 hours to pick up the current
 conversion rates (if this value has been converted).
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *convertedCurrentPrice;

/**
 
 The current price of the item in the currency of the site on which the item was
 listed. That is, CurrentPrice is in the original listing currency.
 <br>
 <br>
 For competitive-bidding auction listings, this is the current minimum bid price (if
 the listing has no bids) or the current high bid (if the listing has bids). This
 does not reflect the BuyItNow price.
 <br>
 <br>
 For Basic Fixed-Price (FixedPriceItem), Store Inventory
 (StoresFixedPrice), and Ad format (AdType) listings, this is the
 current fixed price.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *currentPrice;

/**
 
 The high bidder for comptetitive-bidding auctions that have ended and have a winning
 bidder. This indicates the user who purchased the item.
 <br>
 <br>
 Not returned for auctions that have received no bids, or for fixed price and
 Store Inventory listings that are still active.
 
 
 type : class Shopping_SimpleUserType
*/
@property (nonatomic, retain) Shopping_SimpleUserType *highBidder;

/**
 
 Specifies a listing's status in eBay's processing workflow.
 If an item's EndTime is in the past, but no details about the
 buyer or high bidder are shown (and the user is not anonymous),
 use this listing status information to determine whether eBay has
 finished processing the listing.
 
 
 type: string constant in Shopping_ListingStatusCodeType.h
*/
@property (nonatomic, retain) NSString *listingStatus;

/**
 
 Number of items purchased so far from this listing. (Subtract this value from
 Item.Quantity to calculate the number of items currently available for sale.)
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Indicates whether any bids on this item are greater than the seller's
 reserve price for the listing (if any).
 <br>
 <br>
 A reserve is the lowest price at which the seller is willing to sell
 the item. The reserve price is higher than the listing's opening bid
 (minimum bid) and lower than the Buy It Now price, if any.
 (The reserve price is only known to the seller.)
 Some sellers don't set a reserve at all. If a listing does have
 a reserve price, the highest bidder will only win
 the item if their bid is also above that price.
 <br>
 <br>
 Only returned for online auctions that have a reserve price. (Fixed price, Store
 Inventory, and classified ad listings don't have reserve prices.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *reserveMet;

/**
 
 An international location or region to which the seller is willing
 to ship this item. Returned only for items that have ShipToLocations
 specified.
 <br>
 <br>
 <strong>Applicable values</strong>:
 <p class="ename">&bull;&nbsp;&nbsp; Americas</p>
 <p class="edef">(North, South, or Latin America)</p>
 <p class="ename">&bull;&nbsp;&nbsp; Asia</p>
 <p class="ename">&bull;&nbsp;&nbsp; Caribbean</p>
 <p class="ename">&bull;&nbsp;&nbsp; Europe</p>
 <p class="ename">&bull;&nbsp;&nbsp; EuropeanUnion</p>
 <p class="ename">&bull;&nbsp;&nbsp; LatinAmerica</p>
 <p class="ename">&bull;&nbsp;&nbsp; MiddleEast</p>
 <p class="ename">&bull;&nbsp;&nbsp; NorthAmerica</p>
 <p class="ename">&bull;&nbsp;&nbsp; Oceania</p>
 <p class="edef">(Pacific region other than Asia)</p>
 <p class="ename">&bull;&nbsp;&nbsp; SouthAmerica</p>
 <p class="ename">&bull;&nbsp;&nbsp; WillNotShip</p>
 <p class="edef">(No shipping, buyer must pick up the item)</p>
 <p class="ename">&bull;&nbsp;&nbsp; Worldwide</p>
 <p class="edef">(Seller will ship worldwide)</p>
 <p class="ename">&bull;&nbsp;&nbsp; 2-letter country identifier</p>
 <p class="edef">(See CountryCodeType for values)</p>
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *shipToLocations;

/**
 
 The name of the eBay site on which the item was originally listed.
 For example, if the item is listed on the eBay US site,
 the value would be US. If it's listed on the eBay Germany site,
 the value would be Germany.
 <br>
 <br>
 The listing's original site can affect the values of converted
 (localized) prices (when your request specifies a site
 that is different from the listing's site).
 
 
 type: string constant in Shopping_SiteCodeType.h
*/
@property (nonatomic, retain) NSString *site;

/**
 
 Time left before the listing ends.
 The duration is represented in the ISO 8601 duration format (PnYnMnDTnHnMnS).
 For ended listings, the time left is PT0S (zero seconds).
 <br>
 <br>
 In search results (like the FindItemsAdvanced response), the same
 TimeLeft may be returned for multiple results if the results are
 variations from the same multi-variation listing.
 
 
 type : NSString, wrapper for primitive duration
*/
@property (nonatomic, retain) NSString *timeLeft;

/**
 
 Name of the item as it appears in the listing or in search and
 browse results.
 <br>
 <br>
 <b>For US eBay Motors vehicles only:</b> In item-retrieval
 calls (like GetSingleItem and GetMultipleItems), this value shows the
 vehicle Make and Model (e.g., "Buick : Skylark").
 <br>
 <br>
 In finding calls (like FindItemsAdvanced), this value concatenates several
 Item Specifics: The Make (e.g., "Buick"), Model (e.g., Skylark), Submodel
 (e.g., Limited), and the seller's customized subtitle (e.g., "Great
 deal!"). Call GetSingleItem with IncludeSelector=ItemSpecifics to see the
 individual Item Specifics (in Item.ItemSpecifics).
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 GetSingleItem and FindItemsAdvanced do not return the same Item.Title
 value for US eBay Motors listings. Here's why:
 <br>
 <br>
 In general, GetSingleItem maps to eBay's View Item page. The eBay Motors
 Web site's View Item page shows two vehicle titles in the title bar: One
 title is a label based on the Year, Make, Model, and Submodel (e.g.,
 "1996 Buick Skylark Limited"). The model is included unless it's "Other"
 or unspecified. The submodel is included if the seller specified a
 submodel. The other title is a path based on the Make and Model (e.g.,
 "Buick : Skylark"). The Item.Title value in GetSingleItem maps to this
 path.
 <br>
 <br>
 In general, FindItemsAdvanced maps to eBay's advanced search functionality. The
 Item.Title value described above for FindItemsAdvanced maps to the item's search
 result title in the eBay Motors search results page.
 </span>
 <br />
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *title;

/**
 
 Contains basic shipping-related costs for the item. If Item.Quantity
 is greater than 1, this is the shipping cost for one item.
 If the seller offers a choice of more than one shipping service
 (such as UPS Ground and USPS Media mail), this is the cost of the
 "first" shipping option (usually the lowest cost option).
 <br>
 <br>
 If a listing has shipping costs, use GetShippingCosts if you want to get
 more details about the services and costs that the seller is offering.
 
 
 type : class Shopping_ShippingCostSummaryType
*/
@property (nonatomic, retain) Shopping_ShippingCostSummaryType *shippingCostSummary;

/**
 
 Category-specific fields that the seller added to describe
 the listing. The names of these fields are different for items
 in different categories, so they're returned in a generic
 Name/Value structure. The field names are usually very well known
 within the category.
 <br>
 <br>
 For example, a book's item specifics might include a field like
 Publication Year=2007 (where Publication Year is returned in Name, and
 2007 is returned in Value), and a field like Format=Hardcover. But a car's
 item specifics would be different from a book's, with fields like Make=
 Toyota and Model=Prius. And a ticket's item specifics would be different
 from those of books and cars, with fields like EventType=Concerts and
 Venue=The Fillmore.
 <br>
 <br>
 One of the most common uses for item specifics is the item condition.
 <br>
 <br>
 Only returned if the seller included Item Specifics in the listing.<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 Starting in May 2010, many categories in Production and Sandbox
 will start returning the item condition in ConditionID and
 ConditionDisplayName instead, if the seller used ConditionID
 instead of ItemSpecifics.
 Monitor the eBay Developers Program
 newsletter for details and timing.</span>
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, retain) Shopping_NameValueListArrayType *itemSpecifics;

/**
 
 The number of times the listing's View Item page has been viewed (as determined by
 eBay). Only returned if the seller has chosen to include a hit counter in the
 listing, and if the seller has also chosen to make the listing's hit count publicly
 visible. This field is retrieved asynchronously. If you believe the item has a
 publicly visible hit count, but this field is not returned, retry the call.
 <br>
 <br>
 Not applicable to Half.com
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *hitCount;

/**
 
 Subtitle of the item. Only returned if the seller included a
 subtitle for the listing.
 <br>
 <br>
 For US eBay Motors passenger vehicle, motorcycle, and "other vehicle"
 categories or listings in CA eBay Motors passenger vehicle and
 motorcycle categories, the seller's subtitle is only available
 in the Item.ItemSpecifics node. Call GetSingleItem with
 IncludeSelector=ItemSpecifics to retrieve a listing's Item Specifics.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *subtitle;

/**
 
 The fully qualified ID breadcrumb (path) of the first category.
 For example, if the primary category ID is 45678, and its parent
 category's ID is 123, the breadcrumb (path) would be 123:45678.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *primaryCategoryIDPath;

/**
 
 ID of the second category in which the item is listed. Returned only if
 the seller listed a second category.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *secondaryCategoryID;

/**
 
 Name of the second category in which the item is listed. Returned only if
 the seller listed a second category.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *secondaryCategoryName;

/**
 
 The fully qualified ID breadcrumb (path) of the second category. For example, if the
 secondary category ID is 45678, and its parent category's ID is 123, the breadcrumb
 (path) would be 123:45678. Returned only if the seller listed a second category.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *secondaryCategoryIDPath;

/**
 
 Identifier for a Giving Works listing and the benefiting nonprofit charity
 organization.
 
 
 type : class Shopping_CharityType
*/
@property (nonatomic, retain) Shopping_CharityType *charity;

/**
 
 The item is featured in eBay search results on the mobile.de partner site.
 Applicable to eBay Germany.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *germanMotorsSearchable;

/**
 
 A Get It Fast listing.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *getItFast;

/**
 
 If true, a generic gift icon displays next the listing's title in search and
 browse pages.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *gift;

/**
 
 Returns true if the item has an associated picture. Not returned
 if value is false.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *pictureExists;

/**
 
 Returns true if the item listing is no more than one day old. Not returned
 if value is false.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *recentListing;

/**
 
 Returns the seller's store information if the seller has an eBay store.
 Returns a blank store if the seller does not have an eBay storefront.
 
 
 type : class Shopping_StorefrontType
*/
@property (nonatomic, retain) Shopping_StorefrontType *storefront;

/**
 
 The distance of the item from the buyer. The DistanceFromBuyer unit (miles
 or kilometers) varies by site. If the country whose site you are
 searching, e.g. India, uses kilometers, then the DistanceFromBuyer unit is
 kilometers. Otherwise, e.g. if the country is US or UK, then the
 DistanceFromBuyer unit is miles. DistanceFromBuyer is returned if a
 value for PostalCode is supplied in the request.
 
 
 type : class Shopping_DistanceType
*/
@property (nonatomic, retain) Shopping_DistanceType *distanceFromBuyer;

/**
 
 Two-letter ISO 3166 country code to indicate the country where the item is located.
 
 
 type: string constant in Shopping_CountryCodeType.h
*/
@property (nonatomic, retain) NSString *country;

/**
 
 Number of users who have placed the item on their Watch list.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *watchCount;

/**
 
 Returns the Half.com condition code for the item. For example, "brand new,"
 "used," etc.
 
 
 type: string constant in Shopping_HalfItemConditionCodeType.h
*/
@property (nonatomic, retain) NSString *halfItemCondition;

/**
 
 Notes that the Seller made when they listed the item. Not returned if the Seller
 did not make any comments.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerComments;

/**
 
 If a seller specified return policy details, then this container has fields with
 those details. The fields that can be returned in this container vary by site.
 
 
 type : class Shopping_ReturnPolicyType
*/
@property (nonatomic, retain) Shopping_ReturnPolicyType *returnPolicy;

/**
 
 Smallest amount the next bid on the item can be. Returns same value as
 Item.StartPrice (if no bids have yet been placed) or CurrentPrice plus
 BidIncrement (if at least one bid has been placed). Only applicable to
 competitive-bid auction listings. Returns null for basic Fixed Price
 (FixedPriceItem),Store Inventory (StoresFixedPrice), and Ad type listings.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *minimumToBid;

/**
 
 A prototype description of a well-known type of item, such as a popular book.
 <br>
 <br>
 When returned for GetSingleItem, is always of type Reference, and serves as a global
 reference ID for an eBay catalog product.
 <br>
 <br>
 When used as input, retrieves product details for one specific product. Specify the
 ID as a string, and use the type attribute to indicate the nature of the ID you are
 specifying.
 <br>
 <br>
 The request requires either QueryKeywords or
 ProductID, but these fields cannot be used together.
 
 
 type : class Shopping_ProductIDType
*/
@property (nonatomic, retain) Shopping_ProductIDType *productID;

/**
 
 If true, the seller requires immediate payment for the item. If false (or
 not specified), immediate payment is not requested. Buyers must have a
 PayPal account to purchase items that require immediate payment.
 <br><br>
 A seller can choose to require immediate payment for Fixed Price and Buy
 It Now listings, including eBay Stores Inventory listings. If a Buy It
 Now item ends as an auction (that is, if the Buy It Now option is removed
 due to bids being placed on the listing), the immediate payment
 requirement does not apply.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 The value of the AutoPay flag indicates the seller's stated preference
 only. It does not indicate whether the listing is still a candidate for
 purchase via immediate payment. For example, if a listing receives bids
 and no longer qualifies for immediate payment, the value of the AutoPay
 flag does not change.
 </span>
 <br>
 Only applicable to items listed on PayPal-enabled sites and in categories
 that support immediate payment. Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *autoPay;

/**
 
 Returns the seller's business information. Set the SellerBusinessCodeType
 to 'Commercial' in the request to return the related information. This is only
 applicable for sites where Business Seller options are supported.
 
 
 type : class Shopping_BusinessSellerDetailsType
*/
@property (nonatomic, retain) Shopping_BusinessSellerDetailsType *businessSellerDetails;

/**
 
 Enables you to view the sites on which an item can be purchased,
 based on the payment methods offered for the item.
 
 
 entry type : string constant in Shopping_SiteCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *paymentAllowedSite;

/**
 
 Indicates whether the item can be paid for through a payment gateway account. If
 IntegratedMerchantCreditCardEnabled is true, then integrated merchant credit card is
 enabled for credit cards because the seller has a payment gateway account. Therefore,
 if IntegratedMerchantCreditCardEnabled is true, and AmEx, Discover, or VisaMC is
 returned for an item, then on checkout, an online credit-card payment is processed
 through a payment gateway account.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *integratedMerchantCreditCardEnabled;

/**
 
 Variations are multiple similar (but not identical) items in a single fixed-price (or
 Store Inventory Format) listing. For example, a single listing could contain multiple
 items of the same brand and model that vary by color and size (like "Blue, Large" and
 "Black, Medium"). Each variation can have its own quantity and price. Only returned
 if the listing contains multiple variations.
 
 
 type : class Shopping_VariationsType
*/
@property (nonatomic, retain) Shopping_VariationsType *variations;

/**
 
 Specifies the maximum number of business days the seller
 commits to for preparing an item to be shipped after receiving a
 cleared payment. The seller sets this to a positive integer value (1, 2, 3,
 4, 5, 10, 15, or 20) corresponding to the number of days.
 This time does not include the shipping time (the carrier's transit time).
 GetSingleItem or GetMultipleItems returns DispatchTimeMax only when shipping service options are
 specified for the item and the seller specified a dispatch time.
 <br>
 <br>
 Valid for flat and calculated shipping. Does not apply when
 there is no shipping, when it is local pickup only or it is freight shipping.
 <br>
 the listing ends, you can add or change the dispatch (handling) time.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *handlingTime;

/**
 
 A lot is a set of two or more similar items that must be purchased together in
 a single transaction. A listing can have multiple lots (instead of multiple
 items). When LotSize is specified, the listing price reflects the price of
 each lot (not each item within the lot). In this case, Quantity indicates the
 number of lots being listed, and LotSize indicates the number of items in each
 lot. (If a listing has no lots, Quantity indicates the number of separate
 items being listed.) Important: Lot items can be listed only in lot-enabled
 categories. GetCategories returns lot size disabled with a value of true
 for categories that do not support lots.
 <br /><br />
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *lotSize;

/**
 
 <span class="tablenote"><b>Note:</b>
 Starting in early March 2010, this will be supported for a
 few test categories in the Sandbox.
 In May 2010, ConditionID will be supported for many categories in
 Production and Sandbox. Monitor the eBay Developers Program
 newsletter for details and timing.</span>
 <br>
 <br>
 The numeric ID (e.g., 1000) for the item condition.
 Only returned when the seller specified ConditionID in their listing. Also see ItemSpecifics in case the seller used that
 field for the condition instead.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *conditionID;

/**
 
 <span class="tablenote"><b>Note:</b>
 Starting in early March 2010, this will be supported for a
 few test categories in the Sandbox.
 In May 2010, ConditionDisplayName will be supported for
 many categories in Production and Sandbox.
 Monitor the eBay Developers Program
 newsletter for details and timing.</span>
 <br>
 <br>
 The human-readable label for the item condition.
 Display names are localized for the site on
 which they're listed (not necessarily the site on which
 they're viewed).<br>
 <br>
 Most categories use the same display name for the
 same condition ID. Some categories may override the display name
 based on buyer expectations for items in the category.
 For example, condition ID 1000 could be called
 "New" in one category and "New with tags" in another.<br>
 <br>
 Behind the scenes, eBay's search engine uses the ID
 (not the display name) to determine whether items are
 new, used, or refurbished.<br>
 <br>
 Only returned when ConditionID is returned. Also see ItemSpecifics
 in case the seller used that field for the condition instead.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *conditionDisplayName;

/**
 
 Indicates the type of message that will be returned describing the quantity
 available for the item.
 
 
 type: string constant in Shopping_QuantityAvailableHintCodeType.h
*/
@property (nonatomic, retain) NSString *quantityAvailableHint;

/**
 
 The quantity threshold above which the seller prefers not to show the actual
 quantity available. Returned when the quantity available is greater than the
 value of quantity threshold. Currently, 10 is the only available value for
 this threshold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityThreshold;



@end