//
//  KinveyFriendsUpdate.h
//  StatusShare
//
//  Copyright 2013 Kinvey, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


#import <Foundation/Foundation.h>
#import <KinveyKit/KinveyKit.h>
#import <CoreLocation/CoreLocation.h>

/** This class represents an indivual post to the service */
@interface KinveyFriendsUpdate : NSObject <KCSPersistable>

@property (nonatomic, retain) NSString* text;
@property (nonatomic, retain) NSString* kinveyId;
@property (nonatomic, retain) NSDate* userDate;
@property (nonatomic, retain) UIImage* attachment;
@property (nonatomic, retain) KCSMetadata* meta;
@property (nonatomic, retain) CLLocation* location;

@end
