/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuild : TSPObject <KNInspectableAnimation, NSCopying, TSKModel, TSKTransformableObject> {
    KNBuildAttributes * _attributes;
    NSMutableDictionary * _buildChunkIDMap;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _cachedActiveChunkRange;
    BOOL  _cachedActiveChunkRangeIsValid;
    NSArray * _cachedChunks;
    int  _chunkIDSeed;
    NSString * _delivery;
    TSDDrawableInfo * _drawable;
    NSUUID * _drawableId;
    KNAbstractSlide * _slide;
}

@property (nonatomic, readonly) unsigned int actionAcceleration;
@property (nonatomic, readonly) TSDEditableBezierPathSource *actionMotionPathSource;
@property (nonatomic, readonly) float actionOpacity;
@property (nonatomic, readonly) float actionRotationAngle;
@property (nonatomic, readonly) unsigned int actionRotationDirection;
@property (nonatomic, readonly) float actionScale;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } activeChunkRange;
@property (nonatomic, readonly) NSString *animationFilter;
@property (nonatomic, readonly) KNAnimationInfo *animationInfo;
@property (nonatomic, readonly) int animationType;
@property (nonatomic, copy) KNBuildAttributes *attributes;
@property (nonatomic, readonly) BOOL canEditAnimations;
@property (nonatomic, readonly) unsigned int chunkCount;
@property (nonatomic, readonly) NSArray *chunks;
@property (nonatomic, readonly) TSUColor *color;
@property (nonatomic, readonly) float custom3DChartRotation;
@property (nonatomic, readonly) int customAccelerationOption;
@property (nonatomic, readonly) BOOL customBounce;
@property (nonatomic, readonly) BOOL customDecay;
@property (nonatomic, readonly) unsigned int customDeliveryOption;
@property (nonatomic, readonly) float customDetail;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve1;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve2;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve3;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName1;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName2;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName3;
@property (nonatomic, readonly) BOOL customIncludeEndpoints;
@property (nonatomic, readonly) unsigned int customJiggleIntensity;
@property (nonatomic, readonly) BOOL customMotionBlur;
@property (nonatomic, readonly) unsigned int customRepeatCount;
@property (nonatomic, readonly) unsigned int customScale;
@property (nonatomic, readonly) int customTextDelivery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *delivery;
@property (nonatomic, readonly) unsigned int deliveryStyle;
@property (nonatomic, readonly) NSString *deliveryWithoutDowngrading;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int direction;
@property (nonatomic, readonly) KNAnimationPluginMenu *directionMenu;
@property (nonatomic, readonly) unsigned int directionType;
@property (nonatomic, readonly) BOOL downgradesDelivery;
@property (nonatomic, retain) TSDDrawableInfo *drawable;
@property (nonatomic, readonly) double durationDefaultForInitialChunk;
@property (nonatomic, readonly) NSString *effect;
@property (nonatomic, readonly) unsigned int endOffset;
@property (nonatomic, readonly) unsigned int expectedChunkCount;
@property (nonatomic, readonly) unsigned int firstActiveChunkIndexInBuild;
@property (nonatomic, readonly) KNBuildChunk *firstChunk;
@property (nonatomic, readonly) unsigned int firstChunkIndexOnSlide;
@property (nonatomic, readonly) BOOL hasComplement;
@property (nonatomic, readonly) BOOL hasInactiveChunks;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int i_chunkIDSeed;
@property (nonatomic, readonly) TSDDrawableInfo *i_drawable;
@property (nonatomic, readonly) NSUUID *i_drawableId;
@property (nonatomic, readonly) BOOL i_isFullyFormedBuild;
@property (nonatomic, readonly) NSSet *inspectableAttributes;
@property (nonatomic, readonly) BOOL isActionBuild;
@property (nonatomic, readonly) BOOL isActionMotionBuild;
@property (nonatomic, readonly) BOOL isEmphasisBuild;
@property (nonatomic, readonly) BOOL isOnSlide;
@property (nonatomic, readonly) unsigned int lastActiveChunkIndexInBuild;
@property (nonatomic, readonly) unsigned int lastChunkIndexOnSlide;
@property (nonatomic, readonly) NSString *localizedEffect;
@property (nonatomic, readonly) int randomNumberSeed;
@property (nonatomic) KNAbstractSlide *slide;
@property (nonatomic, readonly) unsigned int startOffset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsBounce;
@property (nonatomic, readonly) BOOL supportsCustomDetail;
@property (nonatomic, readonly) BOOL supportsCustomEffectTimingCurve1;
@property (nonatomic, readonly) BOOL supportsCustomEffectTimingCurve2;
@property (nonatomic, readonly) BOOL supportsCustomEffectTimingCurve3;
@property (nonatomic, readonly) BOOL supportsCustomTextDelivery;
@property (nonatomic, readonly) BOOL supportsDelivery;
@property (nonatomic, readonly) BOOL supportsDirection;
@property (nonatomic, readonly) BOOL supportsDuration;
@property (nonatomic, readonly) BOOL supportsIncludeEndpoints;
@property (nonatomic, readonly) BOOL supportsRandomNumberSeedInspection;
@property (nonatomic, readonly) NSString *title;

+ (id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3;
+ (void)i_repairBuildToDrawableReferencesFromUUIDsForBuilds:(id)arg1 drawables:(id)arg2;
+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;
+ (BOOL)needsObjectUUID;
+ (id)p_drawableFromInfo:(id)arg1;
+ (BOOL)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;
+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;

- (unsigned int)actionAcceleration;
- (id)actionMotionPathSource;
- (float)actionOpacity;
- (float)actionRotationAngle;
- (unsigned int)actionRotationDirection;
- (float)actionScale;
- (struct _NSRange { unsigned int x1; unsigned int x2; })activeChunkRange;
- (id)animationFilter;
- (id)animationInfo;
- (int)animationType;
- (id)attributes;
- (BOOL)canEditAnimations;
- (unsigned int)chunkCount;
- (id)chunkForIdentifier:(id)arg1;
- (id)chunks;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)custom3DChartRotation;
- (int)customAccelerationOption;
- (BOOL)customBounce;
- (BOOL)customDecay;
- (unsigned int)customDeliveryOption;
- (float)customDetail;
- (id)customEffectTimingCurve1;
- (id)customEffectTimingCurve2;
- (id)customEffectTimingCurve3;
- (id)customEffectTimingCurveThemeName1;
- (id)customEffectTimingCurveThemeName2;
- (id)customEffectTimingCurveThemeName3;
- (BOOL)customIncludeEndpoints;
- (unsigned int)customJiggleIntensity;
- (BOOL)customMotionBlur;
- (unsigned int)customRepeatCount;
- (unsigned int)customScale;
- (int)customTextDelivery;
- (void)dealloc;
- (id)deliveriesLocalized:(BOOL)arg1;
- (id)delivery;
- (unsigned int)deliveryStyle;
- (id)deliveryWithoutDowngrading;
- (id)description;
- (void)didInitFromSOS;
- (unsigned int)direction;
- (id)directionMenu;
- (unsigned int)directionType;
- (BOOL)downgradesDelivery;
- (id)drawable;
- (double)durationDefaultForInitialChunk;
- (id)effect;
- (unsigned int)endChunkIndexFromEndOffset:(unsigned int)arg1;
- (unsigned int)endOffset;
- (unsigned int)expectedChunkCount;
- (unsigned int)firstActiveChunkIndexInBuild;
- (id)firstChunk;
- (unsigned int)firstChunkIndexOnSlide;
- (BOOL)hasComplement;
- (BOOL)hasComplementInBuilds:(id)arg1;
- (BOOL)hasInactiveChunks;
- (id)i_buildChunkForChunkIdentifier:(id)arg1;
- (int)i_chunkIDSeed;
- (void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg1;
- (id)i_drawable;
- (id)i_drawableForArchiving:(BOOL)arg1;
- (id)i_drawableId;
- (id)i_drawableOnSlide:(id)arg1;
- (void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg1;
- (void)i_invalidateChunkCache;
- (BOOL)i_isFullyFormedBuild;
- (void)i_registerBuildChunkIdentifierForChunk:(id)arg1;
- (void)i_resetChunkIDSeed;
- (void)i_rollbackChunkIDSeedForChunk:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4;
- (id)inspectableAttributes;
- (BOOL)isActionBuild;
- (BOOL)isActionMotionBuild;
- (BOOL)isComplementOfBuild:(id)arg1;
- (BOOL)isEmphasisBuild;
- (BOOL)isOnSlide;
- (unsigned int)lastActiveChunkIndexInBuild;
- (unsigned int)lastChunkIndexOnSlide;
- (void)loadFromArchive:(const struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct BuildAttributesArchive {} *x8; int x9; }*)arg1 unarchiver:(id)arg2;
- (id)localizedEffect;
- (id)p_buildChunkIDMap;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_calculateActiveChunkRange;
- (id)p_chunkAtIndex:(unsigned int)arg1;
- (id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned int)arg2;
- (BOOL)p_isDeliveryLocalized:(id)arg1 forNonNilDrawable:(id)arg2;
- (BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
- (BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;
- (int)randomNumberSeed;
- (void)saveToArchive:(struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct BuildAttributesArchive {} *x8; int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDelivery:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setSlide:(id)arg1;
- (id)slide;
- (unsigned int)startOffset;
- (BOOL)supportsAcceleration;
- (BOOL)supportsBounce;
- (BOOL)supportsCustomDetail;
- (BOOL)supportsCustomEffectTimingCurve1;
- (BOOL)supportsCustomEffectTimingCurve2;
- (BOOL)supportsCustomEffectTimingCurve3;
- (BOOL)supportsCustomTextDelivery;
- (BOOL)supportsDelivery;
- (BOOL)supportsDirection;
- (BOOL)supportsDuration;
- (BOOL)supportsIncludeEndpoints;
- (BOOL)supportsRandomNumberSeedInspection;
- (id)title;

@end
