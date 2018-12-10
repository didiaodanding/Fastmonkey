//
//  XCTestWDMonkeyController.swift
//  FastMonkey
//
//  fixed by zhangzhao on 2017/7/17.
//

import Foundation
import XCTest

/**
    Extension using the public XCTest API to generate
    events.
*/
@available(iOS 9.0, *)
extension Monkey {

    /**
        Add an action that checks, at a fixed interval,
        if an alert is being displayed, and if so, selects
        a random button on it.

        - parameter interval: How often to generate this
          event. One of these events will be generated after
          this many randomised events have been generated.
        - parameter application: The `XCUIApplication` object
          for the current application.
    */
    public func addXCTestTapAlertAction(interval: Int, application: XCUIApplication) {
        addAction(interval: interval) { [weak self] in
            //处理被测app内的弹窗
            if application.state == XCUIApplication.State.runningForeground {
                for i in 0 ..< application.alerts.count {
                    let alert = application.alerts.element(boundBy: i)
                    let buttons = alert.descendants(matching: .button)
                    let random = self!.r.randomInt(lessThan:buttons.count)
                    let button = buttons.element(boundBy: random)
                    button.tap()
                }
            }else{
                application.activate()
                self!.sleep(5)
                self?.pid = Int(XCTestWDFindElementUtils.getAppPid())
            }
            //处理系统弹窗
            let sprintboard = XCUIApplication.init(privateWithPath: nil, bundleID: "com.apple.springboard")!
            for i in 0 ..< sprintboard.alerts.count {
                if sprintboard.buttons["允许"].exists{
                    sprintboard.buttons["允许"].tap()
                }else if sprintboard.buttons["好"].exists{
                    sprintboard.buttons["好"].tap()
                }else if sprintboard.buttons["打开"].exists{
                    sprintboard.buttons["打开"].tap()
                }else{
                    let alert = sprintboard.alerts.element(boundBy: i)
                    let buttons = alert.descendants(matching: .button)
                    let random = self!.r.randomInt(lessThan:buttons.count)
                    let button = buttons.element(boundBy: random)
                    button.tap()
                }
            }
        }
    }
    
    /**
     Add an action that checks current app, at a fixed interval,
     if app is not running , so launch app
     */
    
    public func addXCTestCheckCurrentApp(interval:Int, application:XCUIApplication) {
        addCheck(interval:interval){ [weak self] in
            //let work = DispatchWorkItem(qos:.userInteractive){
                /** too slow **/
                //application._waitForQuiescence()
            //    let isRunning = application.running
            //    let current = Int(XCTestWDFindElementUtils.getAppPid())
            //    if current != self?.pid || !isRunning{
            //        application.launch()
            //        self?.sleep(5)
            //        self?.pid = Int(XCTestWDFindElementUtils.getAppPid())
            //    }
            //}
            //DispatchQueue.main.async(execute:work)
            let work = DispatchWorkItem(qos:.userInteractive){
                if (application.state != XCUIApplication.State.runningForeground){
                    application.activate()
                    self?.sleep(5)
                    self?.pid = Int(XCTestWDFindElementUtils.getAppPid())
                }
            }
            DispatchQueue.main.async(execute:work)
        }
    }
    
    /**
     Add an action that check login keypoint, at a fixed interval,
     if find key point, take login event
     */

    public func addXCTestAppLogin(application:XCUIApplication) {
        addAction(){ [weak self] in
            do{
                let session = try XCTestWDSessionManager.singleton.checkDefaultSessionthrow()
                let root = session.application
                if root != nil{
                    let usage = "name"
                    let tag = "帐号密码登录"
                    //let cgy = try? XCTestWDFindElementUtils.tree(underElement: root!)
                    let element = try? XCTestWDFindElementUtils.filterElement(usingText: usage, withvalue: tag, underElement: root!)
                    if let element = element {
                        if element != nil {
                            self?.addXCTestLoginAction(element:element!, application: application)
                        }
                        else{
                            return
                        }
                    }
                }
            }catch{
                return
            }
        }
    }
    
    /**
     Add an action that check H5 keypoint, at a fixed interval,
     if find key point, take quit H5 Page event
     */
//    public func addXCTestAppQuiteH5Page(interval:Int, application:XCUIApplication) {
//        addAction(interval:interval){ [weak self] in
//            do{
//                let session = try XCTestWDSessionManager.singleton.checkDefaultSessionthrow()
//                let root = session.application
//                if root != nil{
//                    let element = XCTestWDFindElementUtils.getElement(underElement: root!)
//                    if (element)! {
//                        self?.addXCTestQuitH5PageAction(application: application)
//                    }else{
//                            return
//                        }
//                }
//            }catch{
//                return
//            }
//        }
//    }
    
    /**
     Add an action that check 玩吧 keypoint, at a fixed interval,
     if find key point, take quit 玩吧 Page event
     */
    public func addXCTestAppQuiteGamePlayPage(interval:Int, application:XCUIApplication) {
        addAction(interval:interval){ [weak self] in
            do{
                let session = try XCTestWDSessionManager.singleton.checkDefaultSessionthrow()
                let root = session.application
                if root != nil{
                    let usage = "name"
                    let tag = "小游戏"
                    let element = try? XCTestWDFindElementUtils.filterElement(usingText: usage, withvalue: tag, underElement: root!)
                    if let element = element {
                        if element != nil {
                            self?.addXCTestQuitGamePlayPageAction(application: application)
                        }
                        else{
                            return
                        }
                    }
                }
            }catch{
                return
            }
        }
    }
}

