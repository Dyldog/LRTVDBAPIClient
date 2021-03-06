// LRTVDBEpisode+Private.h
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

#import "LRTVDBEpisode.h"

@interface LRTVDBEpisode (Private)

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *overview;
@property (nonatomic, copy) NSString *episodeID;
@property (nonatomic, copy) NSString *imdbID;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *showID;
@property (nonatomic, copy) NSArray *writers;
@property (nonatomic, copy) NSArray *directors;
@property (nonatomic, copy) NSArray *guestStars;
@property (nonatomic, strong) NSNumber *episodeNumber;
@property (nonatomic, strong) NSNumber *seasonNumber;
@property (nonatomic, strong) NSNumber *rating;
@property (nonatomic, strong) NSNumber *ratingCount;
@property (nonatomic, strong) NSURL *imageURL;
@property (nonatomic, strong) NSDate *airedDate;

/**
 Some episodes coming from theTVDB are not correct. They have no name, season
 number or episode number and it's really not worth showing them.
 */
@property (nonatomic, readonly, getter = isCorrect) BOOL correct;

/**
 Updates an episode.
 */
- (void)updateWithEpisode:(LRTVDBEpisode *)updatedEpisode;

@end
