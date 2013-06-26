//
//  JournalisteAppDelegate.h
//  Journaliste
//
//  Created by Renaud Tircher on 6/26/13.
//  Copyright (c) 2013 Renaud Tircher. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface JournalisteAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
