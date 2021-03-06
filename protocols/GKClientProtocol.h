/* Generated by RuntimeBrowser.
 */

@protocol GKClientProtocol <NSObject>

@required

- (oneway void)acceptInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)authenticatedPlayersDidChange:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)beginNetworkActivity;
- (oneway void)cancelGameInvite:(NSString *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)declineInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)endNetworkActivity;
- (oneway void)fetchTurnBasedData;
- (oneway void)friendRequestSelected:(GKFriendRequestInternal *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)relayPushNotification:(NSDictionary *)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)setBadgeCount:(unsigned int)arg1 forType:(unsigned int)arg2;
- (oneway void)setCurrentGame:(void *)arg1 serverEnvironment:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: GKGameInternal *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)setLogBits:(int)arg1;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;

@end
