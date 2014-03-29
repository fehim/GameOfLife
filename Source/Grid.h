//
//  Grid.h
//  GameOfLife
//
//  Created by Fehim Tabak on 3/29/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property int generation;
@property int totalAlive;
-(void) evolveStep;
-(void) countNeighbors;
-(void) updateCreatures;
-(BOOL) isIndexValidForX:(int)x andY:(int)y;

@end
