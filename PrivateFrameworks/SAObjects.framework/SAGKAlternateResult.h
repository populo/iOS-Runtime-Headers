/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAClientBoundCommand>, NSString;

@interface SAGKAlternateResult : AceObject <SAAceSerializable> {
}

@property(retain) <SAClientBoundCommand> * command;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * name;
@property(readonly) Class superclass;

+ (id)alternateResult;
+ (id)alternateResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)command;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (void)setCommand:(id)arg1;
- (void)setName:(id)arg1;

@end
