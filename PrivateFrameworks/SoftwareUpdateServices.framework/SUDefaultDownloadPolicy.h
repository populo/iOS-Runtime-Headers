/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUDescriptor *_descriptor;
    SUNetworkMonitor *_networkMonitor;
    bool_cellularCapable;
}

@property(retain) SUCarrierDownloadPolicyProperties * carrierPolicy;
@property(getter=isCellularCapable) bool cellularCapable;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) SUDescriptor * descriptor;
@property(readonly) unsigned long long hash;
@property(retain) SUNetworkMonitor * networkMonitor;
@property(readonly) Class superclass;

- (bool)_isCellularCapable;
- (bool)_isDownloadableForNetworkType:(int)arg1 error:(long long*)arg2 cellularFeesApply:(bool*)arg3 powerRequired:(bool*)arg4;
- (id)_stringForBool:(bool)arg1;
- (id)carrierPolicy;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (bool)hasEnoughDiskSpace;
- (id)initWithDescriptor:(id)arg1;
- (bool)isCellularCapable;
- (bool)isDownloadAllowableForCellular2G;
- (bool)isDownloadAllowableForCellular;
- (bool)isDownloadAllowableForCellularRoaming;
- (bool)isDownloadAllowableForWiFi;
- (bool)isDownloadFreeForCellular;
- (bool)isDownloadable;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2 powerRequired:(bool*)arg3;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2;
- (bool)isPowerRequired;
- (bool)isSamePolicy:(id)arg1;
- (id)networkMonitor;
- (void)setCarrierPolicy:(id)arg1;
- (void)setCellularCapable:(bool)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;

@end
