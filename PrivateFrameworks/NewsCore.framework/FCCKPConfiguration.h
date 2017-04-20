/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPConfiguration : PBCodable <NSCopying> {
    unsigned long long  _created;
    unsigned long long  _expires;
    NSMutableArray * _fields;
    struct { 
        unsigned int created : 1; 
        unsigned int expires : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long created;
@property (nonatomic) unsigned long long expires;
@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic) BOOL hasCreated;
@property (nonatomic) BOOL hasExpires;

- (void)addFields:(id)arg1;
- (void)clearFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)created;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)expires;
- (id)fields;
- (id)fieldsAtIndex:(unsigned int)arg1;
- (unsigned int)fieldsCount;
- (BOOL)hasCreated;
- (BOOL)hasExpires;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCreated:(unsigned long long)arg1;
- (void)setExpires:(unsigned long long)arg1;
- (void)setFields:(id)arg1;
- (void)setHasCreated:(BOOL)arg1;
- (void)setHasExpires:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end