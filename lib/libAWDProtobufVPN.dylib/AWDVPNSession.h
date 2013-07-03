/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufVPN.dylib
 */

@class NSString;

@interface AWDVPNSession : PBCodable  {
    unsigned long long _inBytes;
    unsigned long long _outBytes;
    unsigned long long _timestamp;
    unsigned int _disconnectReason;
    unsigned int _duration;
    unsigned int _ipv4Installed;
    unsigned int _ipv6Installed;
    NSString *_protocol;
    unsigned int _reassertCount;
    unsigned int _systemAuthenMethod;
    unsigned int _triggerTrafficClass;
    unsigned int _triggerType;
    unsigned int _userAuthenMethod;
    BOOL _appVpnUsed;
    BOOL _connectFailed;
    BOOL _proxyInstalled;
    struct { 
        unsigned int inBytes : 1; 
        unsigned int outBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int disconnectReason : 1; 
        unsigned int duration : 1; 
        unsigned int ipv4Installed : 1; 
        unsigned int ipv6Installed : 1; 
        unsigned int reassertCount : 1; 
        unsigned int systemAuthenMethod : 1; 
        unsigned int triggerTrafficClass : 1; 
        unsigned int triggerType : 1; 
        unsigned int userAuthenMethod : 1; 
        unsigned int appVpnUsed : 1; 
        unsigned int connectFailed : 1; 
        unsigned int proxyInstalled : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) BOOL hasProtocol;
@property(retain) NSString * protocol;
@property BOOL hasTriggerType;
@property unsigned int triggerType;
@property BOOL hasTriggerTrafficClass;
@property unsigned int triggerTrafficClass;
@property BOOL hasIpv4Installed;
@property unsigned int ipv4Installed;
@property BOOL hasIpv6Installed;
@property unsigned int ipv6Installed;
@property BOOL hasProxyInstalled;
@property BOOL proxyInstalled;
@property BOOL hasAppVpnUsed;
@property BOOL appVpnUsed;
@property BOOL hasSystemAuthenMethod;
@property unsigned int systemAuthenMethod;
@property BOOL hasUserAuthenMethod;
@property unsigned int userAuthenMethod;
@property BOOL hasDisconnectReason;
@property unsigned int disconnectReason;
@property BOOL hasConnectFailed;
@property BOOL connectFailed;
@property BOOL hasDuration;
@property unsigned int duration;
@property BOOL hasReassertCount;
@property unsigned int reassertCount;
@property BOOL hasInBytes;
@property unsigned long long inBytes;
@property BOOL hasOutBytes;
@property unsigned long long outBytes;


- (void)setHasOutBytes:(BOOL)arg1;
- (void)setHasInBytes:(BOOL)arg1;
- (void)setHasReassertCount:(BOOL)arg1;
- (void)setHasConnectFailed:(BOOL)arg1;
- (void)setHasDisconnectReason:(BOOL)arg1;
- (void)setHasUserAuthenMethod:(BOOL)arg1;
- (void)setHasSystemAuthenMethod:(BOOL)arg1;
- (void)setHasAppVpnUsed:(BOOL)arg1;
- (void)setHasProxyInstalled:(BOOL)arg1;
- (void)setHasIpv6Installed:(BOOL)arg1;
- (void)setHasIpv4Installed:(BOOL)arg1;
- (void)setHasTriggerTrafficClass:(BOOL)arg1;
- (void)setHasTriggerType:(BOOL)arg1;
- (void)setOutBytes:(unsigned long long)arg1;
- (unsigned long long)outBytes;
- (BOOL)hasOutBytes;
- (void)setInBytes:(unsigned long long)arg1;
- (unsigned long long)inBytes;
- (BOOL)hasInBytes;
- (void)setReassertCount:(unsigned int)arg1;
- (unsigned int)reassertCount;
- (BOOL)hasReassertCount;
- (void)setConnectFailed:(BOOL)arg1;
- (BOOL)connectFailed;
- (BOOL)hasConnectFailed;
- (void)setDisconnectReason:(unsigned int)arg1;
- (unsigned int)disconnectReason;
- (BOOL)hasDisconnectReason;
- (void)setUserAuthenMethod:(unsigned int)arg1;
- (unsigned int)userAuthenMethod;
- (BOOL)hasUserAuthenMethod;
- (void)setSystemAuthenMethod:(unsigned int)arg1;
- (unsigned int)systemAuthenMethod;
- (BOOL)hasSystemAuthenMethod;
- (void)setAppVpnUsed:(BOOL)arg1;
- (BOOL)appVpnUsed;
- (BOOL)hasAppVpnUsed;
- (void)setProxyInstalled:(BOOL)arg1;
- (BOOL)proxyInstalled;
- (BOOL)hasProxyInstalled;
- (void)setIpv6Installed:(unsigned int)arg1;
- (unsigned int)ipv6Installed;
- (BOOL)hasIpv6Installed;
- (void)setIpv4Installed:(unsigned int)arg1;
- (unsigned int)ipv4Installed;
- (BOOL)hasIpv4Installed;
- (void)setTriggerTrafficClass:(unsigned int)arg1;
- (unsigned int)triggerTrafficClass;
- (BOOL)hasTriggerTrafficClass;
- (void)setTriggerType:(unsigned int)arg1;
- (unsigned int)triggerType;
- (BOOL)hasTriggerType;
- (BOOL)hasProtocol;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (BOOL)hasDuration;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setProtocol:(id)arg1;
- (unsigned int)duration;
- (id)protocol;
- (id)dictionaryRepresentation;

@end
