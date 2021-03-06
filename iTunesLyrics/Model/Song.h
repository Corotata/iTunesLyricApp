//
//  Song.h
//  iTunesLyrics
//
//  Created by pennyli on 10/17/15.
//  Copyright (c) 2015 penny.li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Song : NSObject
@property (nonatomic, strong) NSString *album;
@property (nonatomic, strong) NSString *artist;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) NSInteger duration;
@property (nonatomic, assign) NSInteger lyricId;
@property (nonatomic, strong) NSString *lyrics;
@property (nonatomic, assign) NSInteger score;
@end
