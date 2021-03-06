
//  AZAppDelegate.h
//  AtoZ Entitlement

//  Created by Alex Gray on 8/25/12.
//  Copyright (c) 2012 mrgray.com, inc. All rights reserved.
#import <Cocoa/Cocoa.h>
@class AZQuadCarousel;
@interface AZEntitlementDelegate : NSObject <NSApplicationDelegate>
@property (retain, nonatomic) AZCalculatorController *cc;
@property (NATOM, ASS) IBOutlet AZTrackingWindow *north;
@property (NATOM, ASS) IBOutlet AZTrackingWindow *south;
@property (NATOM, ASS) IBOutlet AZTrackingWindow *east;
@property (NATOM, ASS) IBOutlet AZTrackingWindow *west;

@property (nonatomic, retain) NSString *log;
@property (nonatomic, retain) AtoZ *dbx;
@property (nonatomic, retain) AZFileGridView *g;
@property (weak) IBOutlet NSView* imageView;
@property (nonatomic, retain) IBOutlet AZQuadCarousel *quad;

- (IBAction)saveAction:(id)sender;

@end
