#import <Cocoa/Cocoa.h>

@interface NfoscController : NSObject {
    IBOutlet NSTextField *_hostname;
    IBOutlet NSTextField *_port;
	IBOutlet NSTextField *_info;
	IBOutlet NSButton *_button;
	bool _running;
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)app;
- (void)applicationWillTerminate:(NSApplication *)app;

- (IBAction)stop:(id)sender;
- (IBAction)start:(id)sender;
- (IBAction)startstop:(id)sender;
- (IBAction)reset:(id)sender;
@end
