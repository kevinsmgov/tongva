//
//  PlantCell.h
//  tongva
//
//  Created by Jeff Dickey on 3/9/14.
//  Copyright (c) 2014 dickeyxxx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"

#import "Plant.h"
#import "Image.h"

@interface PlantCell : UICollectionViewCell

- (void)setPlant:(NSDictionary *)plant;
- (Plant *)plant;

@property (weak, nonatomic) IBOutlet UILabel *commonNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *latinNameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
