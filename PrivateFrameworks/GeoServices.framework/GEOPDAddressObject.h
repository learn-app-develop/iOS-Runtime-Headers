/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObject : PBCodable <NSCopying> {
    NSData * _addressObject;
}

@property (nonatomic, retain) NSData *addressObject;
@property (nonatomic, readonly) BOOL hasAddressObject;

- (id)addressObject;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressObject;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (void)writeTo:(id)arg1;

@end