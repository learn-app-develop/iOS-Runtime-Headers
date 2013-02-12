/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */

@class CTPhoneNumber, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<CTMessageAddress><NSCopying>, NSString;

@interface CTMessage : NSObject {
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSDate *_date;
    NSMutableArray *_items;
    NSUInteger _messageId;
    NSInteger _messageType;
    NSDictionary *_rawHeaders;
    NSMutableArray *_recipients;
    NSUInteger _replaceMessage;
    NSObject<CTMessageAddress><NSCopying> *_sender;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
}

@property(readonly) NSUInteger replaceMessage; /* unknown property attribute: V_replaceMessage */
@property(copy) NSString *contentType; /* unknown property attribute: V_contentType */
@property(readonly) NSDictionary *rawHeaders; /* unknown property attribute: V_rawHeaders */
@property(copy) NSObject<CTMessageAddress><NSCopying> *sender; /* unknown property attribute: V_sender */
@property(copy) NSString *subject; /* unknown property attribute: V_subject */
@property(copy) CTPhoneNumber *serviceCenter; /* unknown property attribute: V_serviceCenter */
@property NSInteger messageType; /* unknown property attribute: V_messageType */
@property(readonly) NSArray *items; /* unknown property attribute: V_items */
@property NSUInteger messageId; /* unknown property attribute: V_messageId */
@property(readonly) NSDate *date; /* unknown property attribute: V_date */
@property(readonly) NSArray *recipients; /* unknown property attribute: V_recipients */

- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (void)addEmailRecipient:(id)arg1;
- (id)addPart:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)addText:(id)arg1;
- (id)allContentTypeParameterNames;
- (id)contentType;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)init;
- (id)initWithDate:(id)arg1;
- (id)items;
- (NSUInteger)messageId;
- (NSInteger)messageType;
- (id)rawHeaders;
- (id)recipients;
- (NSUInteger)replaceMessage;
- (id)sender;
- (id)serviceCenter;
- (void)setContentType:(id)arg1;
- (void)setMessageId:(NSUInteger)arg1;
- (void)setMessageType:(NSInteger)arg1;
- (void)setRawHeaders:(id)arg1;
- (void)setReplaceMessage:(NSUInteger)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceCenter:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end