extern const char * cppISteamFriends_SteamFriends017_GetPersonaName(void *);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends017_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends017_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends017_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends017_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends017_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends017_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends017_GetFriendSteamLevel(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends017_GetPlayerNickname(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetFriendsGroupCount(void *);
extern FriendsGroupID_t cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends017_GetFriendsGroupName(void *, FriendsGroupID_t);
extern int cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(void *, FriendsGroupID_t);
extern void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList(void *, FriendsGroupID_t, CSteamID *, int);
extern bool cppISteamFriends_SteamFriends017_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends017_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends017_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends017_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends017_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends017_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends017_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(void *, const char *, EActivateGameOverlayToWebPageMode);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore(void *, AppId_t, EOverlayToStoreFlag);
extern void cppISteamFriends_SteamFriends017_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends017_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends017_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends017_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends017_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends017_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends017_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends017_RequestFriendRichPresence(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends017_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends017_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends017_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends017_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends017_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends017_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends017_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends017_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends017_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends017_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_GetFollowerCount(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_IsFollowing(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends017_EnumerateFollowingList(void *, uint32);
extern bool cppISteamFriends_SteamFriends017_IsClanPublic(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup(void *, CSteamID);
extern int cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(void *);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(void *, const char *);
extern void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(void *, const char *);
