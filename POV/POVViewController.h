//
//  POVViewController.h
//  POV
//
//  Created by Daniel Moreh on 12/30/13.
//  Copyright (c) 2013 Daniel Moreh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreLocation/CoreLocation.h>
#import <AFNetworking/AFNetworking.h>
#import <MBProgressHUD/MBProgressHUD.h>
#import <Firebase/Firebase.h>

@interface POVViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CLLocationManagerDelegate> {
    CLLocationManager *locationManager;
    NSString *IPAddress;
    UITextField *IPTextField;
    UIImagePickerController *picker;
    float startTime;
    float endTime;
}

@end
