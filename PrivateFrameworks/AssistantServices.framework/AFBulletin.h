/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFBulletin : NSObject <NSSecureCoding> {
    BOOL _allDay;
    NSString *_bulletinID;
    NSDate *_date;
    NSString *_displayName;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    BOOL _read;
    NSDate *_recencyDate;
    NSString *_recordID;
    NSString *_sectionID;
    int _sectionSubtype;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
}

@property (getter=isAllDay, nonatomic, readonly) BOOL allDay;
@property (nonatomic, readonly, copy) NSString *bulletinID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *modalAlertContentMessage;
@property (getter=isRead, nonatomic) BOOL read;
@property (nonatomic, readonly, copy) NSDate *recencyDate;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (nonatomic, readonly, copy) NSString *sectionID;
@property (nonatomic, readonly) int sectionSubtype;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *timeZone;
@property (nonatomic, readonly, copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletinID;
- (id)date;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAllDay;
- (BOOL)isRead;
- (id)message;
- (id)modalAlertContentMessage;
- (id)recencyDate;
- (id)recordID;
- (id)sectionID;
- (int)sectionSubtype;
- (void)setBulletin:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRead:(BOOL)arg1;
- (id)subtitle;
- (id)timeZone;
- (id)title;

@end
