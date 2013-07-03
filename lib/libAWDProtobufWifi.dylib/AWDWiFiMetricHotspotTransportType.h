/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricHotspotTransportType : PBCodable  {
    unsigned long long _timestamp;
    unsigned int _bt;
    unsigned int _usb;
    unsigned int _wifi;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bt : 1; 
        unsigned int usb : 1; 
        unsigned int wifi : 1; 
    } _has;
}

@property BOOL hasWifi;
@property unsigned int wifi;
@property BOOL hasBt;
@property unsigned int bt;
@property BOOL hasUsb;
@property unsigned int usb;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;


- (void)setHasUsb:(BOOL)arg1;
- (void)setHasBt:(BOOL)arg1;
- (void)setHasWifi:(BOOL)arg1;
- (void)setUsb:(unsigned int)arg1;
- (unsigned int)usb;
- (BOOL)hasUsb;
- (void)setBt:(unsigned int)arg1;
- (unsigned int)bt;
- (BOOL)hasBt;
- (void)setWifi:(unsigned int)arg1;
- (unsigned int)wifi;
- (BOOL)hasWifi;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
