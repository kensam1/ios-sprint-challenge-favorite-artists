//
//  Artists.h
//  Artist
//
//  Created by Lambda_School_Loaner_241 on 9/25/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Artists : NSObject
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *bio;
@property (nonatomic, readonly) double year;

- (instancetype)initWithName: (NSString *)artistName bio: (NSString *)artistBio year: (double) yr;

@end

NS_ASSUME_NONNULL_END
