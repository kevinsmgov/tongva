//
//  PlantViewController.h
//  tongva
//
//  Created by Jeff Dickey on 3/9/14.
//  Copyright (c) 2014 dickeyxxx. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PlantCell.h"
#import "PlantTypeCollectionHeaderView.h"
#import "PlantViewController.h"
#import "Hill.h"

@interface HillViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property Hill *hill;

@end
