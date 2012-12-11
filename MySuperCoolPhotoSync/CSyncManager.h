//
//  CSyncManager.h
//  MySuperCoolPhotoSync
//
//  Created by Vitaly Litvak on 8/12/12.
//  Copyright (c) 2012 litvak.su. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "ISyncProgressListener.h"

@interface CSyncManager : NSObject 
-(void)syncAssets: (NSMutableArray*) assets;
-(BOOL)isSynced: (ALAsset*) asset;
@end