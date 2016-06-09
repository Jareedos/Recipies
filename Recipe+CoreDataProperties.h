//
//  Recipe+CoreDataProperties.h
//  recipez
//
//  Created by Jared Sobol on 6/8/16.
//  Copyright © 2016 Appmaker. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Recipe.h"

NS_ASSUME_NONNULL_BEGIN

@interface Recipe (CoreDataProperties)

@property (nullable, nonatomic, retain) NSData *image;
@property (nullable, nonatomic, retain) NSString *ingredients;
@property (nullable, nonatomic, retain) NSString *steps;
@property (nullable, nonatomic, retain) NSString *title;

@end

NS_ASSUME_NONNULL_END
