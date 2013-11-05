//
//  LevelSelect.h
//  Facts
//
//  Created by Orlando Pereira on 9/18/13.
//  Copyright (c) 2013 Orlando Pereira. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface LevelSelect : SKScene <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UIButton* backButton;
@property (retain, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSArray *levelsArray;
@property (strong, nonatomic) NSArray *levelsDescriptionArray;

@end
