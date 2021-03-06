/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesAxisStorage : NSObject {
    TSCHChartGridAdapter * adapter;
    TSCHChartAxisID * axisID;
}

@property (nonatomic, retain) TSCHChartGridAdapter *adapter;
@property (nonatomic, retain) TSCHChartAxisID *axisID;

- (id)adapter;
- (id)axisID;
- (void)dealloc;
- (unsigned int)numberOfValues;
- (void)setAdapter:(id)arg1;
- (void)setAxisID:(id)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2 multiDataSetIndex:(unsigned int)arg3;
- (id)valueAtIndex:(unsigned int)arg1 multiDataSetIndex:(unsigned int)arg2;
- (id*)valuesAtIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 multiDataSetIndex:(unsigned int)arg2;

@end
