/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddress : PBCodable <NSCopying> {
    struct { 
        unsigned int knownAccuracy : 1; 
    } _has;
    int _knownAccuracy;
    NSMutableArray *_localizedAddress;
    NSMutableArray *_spokenNavigationAddress;
    NSMutableArray *_spokenStructuredAddress;
}

@property (nonatomic) BOOL hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, retain) NSMutableArray *localizedAddress;
@property (nonatomic, retain) NSMutableArray *spokenNavigationAddress;
@property (nonatomic, retain) NSMutableArray *spokenStructuredAddress;

+ (id)addressForPlaceData:(id)arg1;

- (void)addLocalizedAddress:(id)arg1;
- (void)addSpokenNavigationAddress:(id)arg1;
- (void)addSpokenStructuredAddress:(id)arg1;
- (id)bestLocalizedAddress;
- (void)clearLocalizedAddress;
- (void)clearSpokenNavigationAddress;
- (void)clearSpokenStructuredAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasKnownAccuracy;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)localizedAddress;
- (id)localizedAddressAtIndex:(unsigned int)arg1;
- (unsigned int)localizedAddressCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasKnownAccuracy:(BOOL)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setLocalizedAddress:(id)arg1;
- (void)setSpokenNavigationAddress:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenNavigationAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned int)arg1;
- (unsigned int)spokenNavigationAddressCount;
- (id)spokenStructuredAddress;
- (id)spokenStructuredAddressAtIndex:(unsigned int)arg1;
- (unsigned int)spokenStructuredAddressCount;
- (void)writeTo:(id)arg1;

@end
