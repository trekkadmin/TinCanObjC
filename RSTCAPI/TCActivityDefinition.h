//
//  TCActivityDefinition.h
//  RSTCAPI
//
//  Created by Brian Rogers on 3/6/13.
/*
 Copyright 2013 Rustici Software
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "TCLocalizedValues.h"

@interface TCActivityDefinition : NSObject

- (id) initWithName:(TCLocalizedValues *)name withDescription:(TCLocalizedValues *)description withType:(NSString *)type withExtensions:(NSDictionary *)extensions withInteractionType:(NSString *)interactionType withCorrectResponsesPattern:(NSArray *)correctResponsesPattern withChoices:(NSArray *)choices withScale:(NSArray *)scale withTarget:(NSArray *)target withSteps:(NSArray *)steps;
- (id) initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionary;

@end
