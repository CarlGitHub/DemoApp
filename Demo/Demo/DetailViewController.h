//
//  DetailViewController.h
//  Demo
//
//  Created by Carl Liu on 2016/11/3.
//  Copyright © 2016年 Carl Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

