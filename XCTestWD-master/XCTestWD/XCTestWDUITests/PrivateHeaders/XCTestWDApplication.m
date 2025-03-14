//
//  XCTestWDApplication.h
//  XCTestWDUITests
//
//

#import "XCTestWDApplication.h"
#import "XCUIApplication.h"
#import "XCAXClient_iOS.h"

@implementation XCTestWDApplication
id activeApplicationElement;
+(XCUIApplication*)activeApplication
{
    @try{
        activeApplicationElement = ((NSArray*)[[XCAXClient_iOS sharedClient] activeApplications]).lastObject;
    }@catch (NSException* e){
        NSLog(@"%@", e);
        activeApplicationElement = nil;
    }
    if(!activeApplicationElement){
        activeApplicationElement = ((XCAXClient_iOS*)[XCAXClient_iOS sharedClient]).systemApplication;
    }
    XCUIApplication* application = [XCTestWDApplication createByPID:[[activeApplicationElement valueForKey:@"processIdentifier"] intValue]];
    if (application.state != XCUIApplicationStateRunningForeground) {
        application = [[XCUIApplication alloc] initPrivateWithPath:nil bundleID:@"com.apple.springboard"];
    }
    [application query];
    return application;
}

+(XCUIApplication*)createByPID:(pid_t)pid
{
    if (pid == 0){
        return nil;
    }
    if([XCUIApplication respondsToSelector:@selector(appWithPID:)]){
        return [XCUIApplication appWithPID:pid];
    }
    return [XCUIApplication applicationWithPID:pid];
}

@end

