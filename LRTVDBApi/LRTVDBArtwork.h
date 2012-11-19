// LRTVDBArtwork.h
//
// Copyright (c) 2012 Luis Recuenco
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "LRKVCBaseModel.h"

typedef NS_ENUM(NSInteger, LRTVDBArtworkType)
{
    LRTVDBArtworkTypeUnknown,
    LRTVDBArtworkTypeFanart, /** Example: http:/www.thetvdb.com/banners/fanart/original/82066-78.jpg. */
    LRTVDBArtworkTypePoster, /** Example: http:/www.thetvdb.com/banners/posters/82066-53.jpg. */
    LRTVDBArtworkTypeSeason, /** Example: http:/www.thetvdb.com/banners/seasons/82066-4-6.jpg. */
    LRTVDBArtworkTypeBanner, /** Example: http:/www.thetvdb.com/banners/graphical/82066-g38.jpg. */
};

@interface LRTVDBArtwork : LRKVCBaseModel

/** Example: http:/www.thetvdb.com/banners/fanart/original/82066-78.jpg. */
@property (nonatomic, strong, readonly) NSURL *artworkURL;

/** Example: http:/www.thetvdb.com/banners/_cache/fanart/original/82066-78.jpg. */
@property (nonatomic, strong, readonly) NSURL *artworkThumbnailURL;

@property (nonatomic, strong, readonly) NSNumber *rating;
@property (nonatomic, strong, readonly) NSNumber *ratingCount;

@property (nonatomic, readonly) LRTVDBArtworkType artworkType;

@end
