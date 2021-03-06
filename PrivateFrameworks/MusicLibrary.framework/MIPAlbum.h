/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPAlbum : PBCodable <NSCopying> {
    MIPArtist *_artist;
    NSString *_artworkId;
    BOOL _compilation;
    struct { 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
        unsigned int numDiscs : 1; 
        unsigned int numTracks : 1; 
        unsigned int userRating : 1; 
        unsigned int compilation : 1; 
    } _has;
    NSString *_name;
    int _numDiscs;
    int _numTracks;
    long long _persistentId;
    NSString *_sortName;
    long long _storeId;
    int _userRating;
}

@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic) BOOL compilation;
@property (nonatomic, readonly) BOOL hasArtist;
@property (nonatomic, readonly) BOOL hasArtworkId;
@property (nonatomic) BOOL hasCompilation;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasNumDiscs;
@property (nonatomic) BOOL hasNumTracks;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic, readonly) BOOL hasSortName;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int numDiscs;
@property (nonatomic) int numTracks;
@property (nonatomic) long long persistentId;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) long long storeId;
@property (nonatomic) int userRating;

- (void).cxx_destruct;
- (id)artist;
- (id)artworkId;
- (BOOL)compilation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtist;
- (BOOL)hasArtworkId;
- (BOOL)hasCompilation;
- (BOOL)hasName;
- (BOOL)hasNumDiscs;
- (BOOL)hasNumTracks;
- (BOOL)hasPersistentId;
- (BOOL)hasSortName;
- (BOOL)hasStoreId;
- (BOOL)hasUserRating;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (int)numDiscs;
- (int)numTracks;
- (long long)persistentId;
- (BOOL)readFrom:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setCompilation:(BOOL)arg1;
- (void)setHasCompilation:(BOOL)arg1;
- (void)setHasNumDiscs:(BOOL)arg1;
- (void)setHasNumTracks:(BOOL)arg1;
- (void)setHasPersistentId:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setHasUserRating:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNumDiscs:(int)arg1;
- (void)setNumTracks:(int)arg1;
- (void)setPersistentId:(long long)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setUserRating:(int)arg1;
- (id)sortName;
- (long long)storeId;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
