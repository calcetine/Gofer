//
//  GoferAppDelegate.h
//  Gofer
//
//  Created by Ted Lemon on 5/1/11.

// Copyright (c) 2011-2014 Edward W. Lemon III

// This file is part of GOFER.

// GOFER is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.

// GOFER is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with GOFER, in a file called COPYING; if not, write
// to the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
// Boston, MA  02111-1307  USA

#import <Cocoa/Cocoa.h>
#import "filelist.h"

@interface GoferAppDelegate : NSObject <NSApplicationDelegate> {
@private
  NSMenuItem *separatorMark;
  NSMenuItem *winMenu1;
  NSMenuItem *winMenu2;
  NSMenuItem *winMenu3;
  NSMenuItem *winMenu4;
  NSMenuItem *winMenu5;
  NSMenuItem *winMenu6;
  NSMenuItem *winMenu7;
  NSMenuItem *winMenu8;
  NSMenuItem *winMenu9;
  NSArray *winMenus;
  NSMenu *winMenu;
}

@property NSArray *winMenus;

@property(retain) IBOutlet NSMenu *winMenu;
@property(retain) IBOutlet NSMenuItem *separatorMark;
@property(retain) IBOutlet NSMenuItem *winMenu1;
@property(retain) IBOutlet NSMenuItem *winMenu2;
@property(retain) IBOutlet NSMenuItem *winMenu3;
@property(retain) IBOutlet NSMenuItem *winMenu4;
@property(retain) IBOutlet NSMenuItem *winMenu5;
@property(retain) IBOutlet NSMenuItem *winMenu6;
@property(retain) IBOutlet NSMenuItem *winMenu7;
@property(retain) IBOutlet NSMenuItem *winMenu8;
@property(retain) IBOutlet NSMenuItem *winMenu9;

- (IBAction)newWindow: (id)sender;
+ (int)ui_index: (id)ui;
+ (void)newTopUI: (id)ui;
- (IBAction)findClicked:(id)sender;
- (IBAction)nextMatch: (id)sender;
- (IBAction)prevMatch: (id)sender;
- (IBAction)close: (id)sender;

@end

void one_element(void *obj, const char *fname,
		 char *contents, int content_length,
		 int first_line, int last_line,
		 int first_char, int first_len,
		 int last_char, int last_len,
		 int *cur_line, int *cur_char);
int one_file(void *obj, const char *filename);

/* Local Variables:  */
/* mode:ObjC */
/* c-file-style:"gnu" */
/* end: */
