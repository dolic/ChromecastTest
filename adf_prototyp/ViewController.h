//
//  ViewController.h
//  adf_prototyp
//
//  Created by condero on 02.05.14.
//  Copyright (c) 2014 ADF. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIActionSheetDelegate, GCKDeviceScannerListener, GCKDeviceManagerDelegate>

//GCDeviceScenner
@property GCKDeviceManager* gck_deviceManager;
@property GCKDeviceScanner* gck_deviceScanner;
@property GCKDevice* gck_selectedDevice;

@property NSArray* gck_devices;

@property NSDictionary *mainBundleInfo;

//BUTTONS
@property (weak, nonatomic) IBOutlet UIBarButtonItem *btn_gck_deviceScanner;

@end
