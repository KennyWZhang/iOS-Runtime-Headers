/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContinueWatchingRequest : WLKRequest {
    BOOL  _allowAuthentication;
    WLKContinueWatchingResponse * _response;
}

@property (nonatomic) BOOL allowAuthentication;
@property (nonatomic, readonly) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (BOOL)allowAuthentication;
- (id)init;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)response;
- (void)setAllowAuthentication:(BOOL)arg1;

@end
