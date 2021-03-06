/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying> {
    double mFadeAcceleration;
    double mOpacity;
}

@property(readonly) double fadeAcceleration;
@property(readonly) double opacity;

+ (bool)canMixWithNilObjects;
+ (id)instanceWithArchive:(const struct ReflectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)reflection;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)fadeAcceleration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct ReflectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (id)initWithOpacity:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)opacity;
- (void)saveToArchive:(struct ReflectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;

@end
