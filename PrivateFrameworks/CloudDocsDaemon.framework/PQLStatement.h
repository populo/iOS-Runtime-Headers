/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class PQLStatement;

@interface PQLStatement : NSObject {
    PQLStatement *_next;
    unsigned char *_spec;
    int _specLength;
    struct sqlite3_stmt { } *_stmt;
    bool_inUse;
    bool_isTraced;
}

@property(readonly) bool isTraced;

- (void).cxx_destruct;
- (bool)_prepare:(const char *)arg1 withDB:(id)arg2;
- (void)bindArguments:(char *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2 db:(id)arg3 cache:(struct cache_s { }*)arg4;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (void)invalidate;
- (bool)isTraced;
- (id)translate:(id)arg1 hasInjections:(bool*)arg2 arguments:(char *)arg3;
- (void)unbind;

@end
