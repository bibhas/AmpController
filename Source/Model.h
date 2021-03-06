#ifndef _MODEL_H_
#define _MODEL_H_

#include <Cocoa/Cocoa.h>


@interface AmpControllerModel: NSObject

- (void)onChanged:(NSString*)propertyName call:(SEL)method on:(id)target;
- (void)unbindChange:(NSString*)propertyName on:(id)target;

- (void)postGenericEvent:(NSString*)event value:(NSString*)value;
- (void)postGenericEvent:(NSString*)event floatValue:(float)value;
- (void)postGenericEvent:(NSString*)event intValue:(unsigned int)value;

- (void)postSerialInput:(NSData*)data;
- (void)postSerialOutput:(NSData*)data;

- (BOOL)autostart;
- (void)setAutostart:(BOOL)enabled;

- (NSString*)serialPort;
- (void)setSerialPort:(NSString*)value;

- (int)baudRate;
- (void)setBaudRate:(int)baud;

- (NSString*)deviceModel;
- (void)setDeviceModel:(NSString*)value;

- (NSString*)deviceStatus;
- (void)setDeviceStatus:(NSString*)value;

- (float)deviceVolume;
- (void)setDeviceVolume:(float)value;

- (int)deviceMuted;
- (void)setDeviceMuted:(int)value;

@end



#endif //!defined _MODEL_H_
