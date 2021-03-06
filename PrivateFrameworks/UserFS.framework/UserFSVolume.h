/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@class NSObject<OS_xpc_object>, NSString;

@interface UserFSVolume : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSString *_deviceName;
    bool_isLocked;
}

@property(retain) NSObject<OS_xpc_object> * connection;
@property(copy,readonly) NSString * deviceName;
@property(readonly) bool isLocked;

+ (bool)prepareToAccessDeviceName:(id)arg1 error:(id*)arg2;
+ (id)volumeWithDeviceName:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)closeAndReturnError:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (bool)deleteFiles:(id)arg1 error:(id*)arg2;
- (id)deviceName;
- (bool)flushAndReturnError:(id*)arg1;
- (id)initWithDeviceName:(id)arg1 error:(id*)arg2;
- (bool)isLocked;
- (id)itemAtPath:(id)arg1 error:(id*)arg2;
- (id)rootDirectoryAndReturnError:(id*)arg1;
- (void)setConnection:(id)arg1;

@end
