/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable {
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property(retain) GEODownloadMetadata * metadata;
@property(retain) GEOSupportedTileSets * tileSets;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (BOOL)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)tileSets;
- (void)writeTo:(id)arg1;

@end