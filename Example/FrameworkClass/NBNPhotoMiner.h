#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSString *const NBNPhotoMinerKeyImage;
FOUNDATION_EXPORT NSString *const NBNPhotoMinerKeyFullImageURL;

@interface NBNPhotoMiner : NSObject

- (void)getAllPicturesCompletion:(void (^)(NSArray *images))block;

+ (void)imageFromDictionary:(NSDictionary *)dict block:(void (^)(UIImage *fullResolutionImage))block;

+ (void)lastImageWithCompletion:(void (^)(NSDictionary *dict))block;

@end
