//
//  XCTestWDMonkey.swift
//  XCTestWD
//
//  Created by zhangzhao on 2017/8/29.
//  Copyright © 2017年 FastMonkey. All rights reserved.


import Foundation

public class XCTestWDMonkey {

    func startMonkey() -> Int {
        
        let bundleID = "com.tencent.microvision.dailybuild"

        var app : XCUIApplication!
        var session : XCTestWDSession!
        let path :String? = nil
        app = XCUIApplication.init(privateWithPath: path, bundleID: bundleID)!
        app!.launch()

        if app != nil {
            session = XCTestWDSession.sessionWithApplication(app!)
            XCTestWDSessionManager.singleton.mountSession(session)
            try? session.resolve()
        }

        if app?.processID == 0 {
            return -1
        }

        sleep(4)
        NSLog("XCTestWDSetup->start fastmonkey<-XCTestWDSetup")

        _ = app.descendants(matching: .any).element(boundBy: 0).frame
        let monkey = Monkey(frame: app.frame)
        monkey.addDefaultXCTestPrivateActions()
        monkey.addXCTestTapAlertAction(interval: 100, application: app)
        monkey.addXCTestCheckCurrentApp(interval: 10, application: app)
        
        //add setup events
//        monkey.addXCTestAppLogin(application: app)
//        monkey.addXCTestAppQuiteH5Page(interval: 30, application: app)
//        monkey.addXCTestAppQuiteGamePlayPage(interval: 30, application: app)
        monkey.monkeyAround()
        RunLoop.main.run()
        return 0
    }

}
