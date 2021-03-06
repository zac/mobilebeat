#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UISliderControl.h>
#import <UIKit/CDStructures.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIView-Hierarchy.h>
#import <UIKit/UIHardware.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIView.h>

#import <CoreAudio/CoreAudio.h>
#import <Celestial/AVController.h>
#import <Celestial/AVItem.h>

#import "MBGridView.h"
#import "MBKeyboardView.h"
#import "MBHeartbeat.h"
#import "MBAudioCore.h"
#import "MBSlideView.h"

@interface MBApplication : UIApplication
{
    MBHeartbeat *heartbeat;
	MBAudioCore *core;
	
	UISliderControl *slider;
}

- (void)setUpUI;
@end
