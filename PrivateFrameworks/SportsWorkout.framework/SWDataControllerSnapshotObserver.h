/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString;

@interface SWDataControllerSnapshotObserver : NSObject <SWRunWorkoutObserver> {
    unsigned long long _elapsedTimeOfPreviousSnapshot;
    unsigned long long _snapshotIntervalInSeconds;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)init;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned long long)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;

@end
