/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDNamedXPCService : CDXPCService {
    unsigned int  _options;
    NSString * _xpcServiceName;
}

@property (nonatomic) unsigned int options;
@property (nonatomic, retain) NSString *xpcServiceName;

- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (void)obtainXPCConnection:(id /* block */)arg1;
- (unsigned int)options;
- (void)setOptions:(unsigned int)arg1;
- (void)setXpcServiceName:(id)arg1;
- (id)xpcServiceName;

@end