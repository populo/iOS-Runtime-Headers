/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMutableSettings, NSString;

@interface FBSSceneClientSettingsDiff : NSObject <BSXPCCoding> {
    BSMutableSettings *_changes;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)_initWithChanges:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id)arg1;
- (void)inspectOtherChangesWithBlock:(id)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;

@end
