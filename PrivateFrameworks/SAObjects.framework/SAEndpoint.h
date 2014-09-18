/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSDictionary * operations;
@property(copy) NSString * providerId;
@property(readonly) Class superclass;
@property bool supportsAuthentication;

+ (id)endpoint;
+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operations;
- (id)providerId;
- (void)setOperations:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setSupportsAuthentication:(bool)arg1;
- (bool)supportsAuthentication;

@end