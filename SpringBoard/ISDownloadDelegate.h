/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol ISDownloadDelegate <NSObject>
-(void)download:(id)download encounteredError:(id)error;
-(void)downloadStatusChanged:(id)changed;
@optional
-(void)download:(id)download failedToLoadArtworkWithError:(id)error;
-(void)download:(id)download loadedArtworkImage:(CGImageRef)image;
@end

