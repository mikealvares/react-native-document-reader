#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <DocumentReader/DocumentReader.h>
#import "JSONConstructor.h"
#import "RegulaConfig.h"

@interface RNRegulaDocumentReader : RCTEventEmitter <RCTBridgeModule>

@property (class) NSNumber* _Nullable databasePercentageDownloaded;

@end
