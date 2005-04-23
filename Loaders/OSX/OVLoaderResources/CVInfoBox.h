// CVInfoBox.h

#ifndef __CVInfoBox_h
#define __CVInfoBox_h

#import <Cocoa/Cocoa.h>

struct CVInfoBoxState {
    CVInfoBoxState(NSString *s, Point p, BOOL o);
    ~CVInfoBoxState();
    NSString *str;
    Point pos;
    BOOL onscreen;
};

@interface CVInfoBox : NSWindowController
{
    IBOutlet id text;
    NSMutableString *str;
    Point pos;
    BOOL onscreen;
}
- (void)awakeFromNib;
- (void)dealloc;
- (void)clear;
- (void)update;
- (void)append:(NSString*)s;
- (void)setPosition:(Point)p;
- (void)show;
- (void)hide;
- (BOOL)onScreen;
- (int)height;
- (CVInfoBoxState*)saveState;       // return a newed CVInfoBoxState object
- (void)restoreState:(CVInfoBoxState*)s;
@end

#endif
