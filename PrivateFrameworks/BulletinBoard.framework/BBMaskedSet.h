/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBMaskedSet : NSObject {
    unsigned int  _maskBits;
    NSMutableArray * _maskObjectSets;
}

@property (nonatomic, retain) NSMutableArray *maskObjectSets;

- (void).cxx_destruct;
- (void)_executeUsingMask:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)addObject:(id)arg1 withMask:(unsigned int)arg2;
- (id)allObjects;
- (id)initWithMaskBits:(unsigned int)arg1;
- (id)maskObjectSets;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectsForMask:(unsigned int)arg1;
- (void)removeObject:(id)arg1;
- (void)setMaskObjectSets:(id)arg1;

@end