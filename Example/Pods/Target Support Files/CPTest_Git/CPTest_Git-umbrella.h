#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HXAppDelegate.h"
#import "HXViewController.h"
#import "Test.h"

FOUNDATION_EXPORT double CPTest_GitVersionNumber;
FOUNDATION_EXPORT const unsigned char CPTest_GitVersionString[];

