/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _WKElementAction : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    id _actionHandler;
    id _dismissalHandler;
    } _title;
    long long _type;
}

@property(copy) id dismissalHandler;
@property(readonly) NSString * title;
@property(readonly) long long type;

+ (id)elementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;
+ (id)elementActionWithType:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(long long)arg3;
- (void)_runActionWithElementInfo:(id)arg1 view:(id)arg2;
- (void)dealloc;
- (id)dismissalHandler;
- (void)setDismissalHandler:(id)arg1;
- (id)title;
- (long long)type;

@end
