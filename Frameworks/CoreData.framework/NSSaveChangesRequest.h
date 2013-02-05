/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet *_deletedObjects;
    NSSet *_insertedObjects;
    NSSet *_optimisticallyLockedObjects;
    void *_reserved1;
    void *_reserved2;
    NSSet *_updatedObjects;
}

+ (void)initialize;

- (void)dealloc;
- (id)deletedObjects;
- (BOOL)hasChanges;
- (id)init;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (id)insertedObjects;
- (id)lockedObjects;
- (unsigned int)requestType;
- (void)setDeletedObjects:(id)arg1;
- (id)updatedObjects;

@end