//
//  DOUIManager.h
//  Dopamine
//
//  Created by tomt000 on 24/01/2024.
//

#import <Foundation/Foundation.h>
#import "DOLogViewProtocol.h"
#import "DODebugLogView.h"
#import "DOPreferenceManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface DOUIManager : NSObject
{
    DOPreferenceManager *_preferenceManager;
}

@property (nonatomic, retain) NSObject<DOLogViewProtocol> *logView;
@property (nonatomic, retain) NSMutableArray<NSString*> *logRecord;

+ (id)sharedInstance;

- (BOOL)isDebug;
- (void)sendLog:(NSString*)log debug:(BOOL)debug update:(BOOL)update;
- (void)sendLog:(NSString*)log debug:(BOOL)debug;
- (void)completeJailbreak;
- (void)startLogCapture;
- (void)shareLogRecord;
- (BOOL)isUpdateAvailable;
- (NSArray *)getLatestReleases;
- (NSArray*)availablePackageManagers;
- (NSArray*)enabledPackageManagers;
- (void)resetPackageManagers;
- (void)resetSettings;
- (void)setPackageManager:(NSString*)key enabled:(BOOL)enabled;

@end

NS_ASSUME_NONNULL_END