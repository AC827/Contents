//
//  ZMUIInterfaceBridge.h
//  ZCommonUI
//
//  Created by Justin Fang on 6/6/14.
//  Copyright (c) 2014 zoom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZMRemoteControlConfActionProtocol.h"
#import "ZMPRemoteControlPTResponseProtocol.h"
#import "ZMPRemoteControlPTNotifyProtocol.h"
#import "ZMPRemoteControlMTResponseProtocol.h"
#import "ZMPRemoteControlMTNotifyProtocol.h"
#import "ZMPConfDataProtocol.h"
#import "ZMRemoteControlCommonActionProtocol.h"
#import "ZMPPTDataProtocol.h"


@interface ZMUIInterfaceBridge : NSObject {
    id<ZMRemoteControlConfActionProtocol>               _zmpRCConfAction;
    id<ZMPRemoteControlPTResponseProtocol>              _zmpRCPTResponse;
    id<ZMPRemoteControlPTNotifyProtocol>                _zmpRCPTNotify;
    id<ZMPRemoteControlMTResponseProtocol>              _zmpRCMTResponse;
    id<ZMPRemoteControlMTNotifyProtocol>                _zmpRCMTNotify;
    id<ZMPConfDataProtocol>                             _zmpMTData;
    id<ZMRemoteControlCommonActionProtocol>             _zmRCCommonAction;
    id<ZMPPTDataProtocol>                               _zmPTData;
}

@property(nonatomic, readwrite, assign) id<ZMRemoteControlConfActionProtocol>               zmpRCConfAction;
@property(nonatomic, readwrite, assign) id<ZMPRemoteControlPTResponseProtocol>              zmpRCPTResponse;
@property(nonatomic, readwrite, assign) id<ZMPRemoteControlPTNotifyProtocol>                zmpRCPTNotify;
@property(nonatomic, readwrite, assign) id<ZMPRemoteControlMTResponseProtocol>              zmpRCMTResponse;
@property(nonatomic, readwrite, assign) id<ZMPRemoteControlMTNotifyProtocol>                zmpRCMTNotify;
@property(nonatomic, readwrite, assign) id<ZMPConfDataProtocol>                             zmpMTData;
@property(nonatomic, readwrite, assign) id<ZMRemoteControlCommonActionProtocol>             zmRCCommonAction;
@property(nonatomic, readwrite, assign) id<ZMPPTDataProtocol>                               zmPTData;

+ (ZMUIInterfaceBridge*)sharedBridge;

@end
