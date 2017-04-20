/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    double  _height;
    NSString * _manifestHash;
    NSString * _passIdentifier;
    double  _width;
}

@property (nonatomic) BOOL hasHeight;
@property (nonatomic, readonly) BOOL hasManifestHash;
@property (nonatomic, readonly) BOOL hasPassIdentifier;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double height;
@property (nonatomic, retain) NSString *manifestHash;
@property (nonatomic, retain) NSString *passIdentifier;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHeight;
- (BOOL)hasManifestHash;
- (BOOL)hasPassIdentifier;
- (BOOL)hasWidth;
- (unsigned int)hash;
- (double)height;
- (BOOL)isEqual:(id)arg1;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (id)passIdentifier;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasHeight:(BOOL)arg1;
- (void)setHasWidth:(BOOL)arg1;
- (void)setHeight:(double)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;

@end