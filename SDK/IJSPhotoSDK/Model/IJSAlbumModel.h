//
//  IJSAlbumModel.h
//  JSPhotoSDK
//
//  Created by shan on 2017/5/29.
//  Copyright © 2017年 shan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IJSAlbumModel : NSObject

@property (nonatomic, strong) NSString *name;  /// 相册的名字
@property (nonatomic, assign) NSInteger count; ///<  相册的个数 / 或者相机胶卷资源的个数
@property (nonatomic, strong) id result;       ///< PHFetchResult<PHAsset> or ALAssetsGroup<ALAsset>,请求回来的相册

@property (nonatomic, strong) NSArray *models;
@property (nonatomic, strong) NSArray *selectedModels;
@property (nonatomic, assign) NSUInteger selectedCount;

@end
