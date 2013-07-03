/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficSegmentsAlongRoute : NSObject  {
    struct vector<TrafficSegment, vk_allocator<TrafficSegment> > { 
        struct TrafficSegment {} *__begin_; 
        struct TrafficSegment {} *__end_; 
        struct __compressed_pair<TrafficSegment *, vk_allocator<TrafficSegment> > { 
            struct TrafficSegment {} *__first_; 
        } __end_cap_; 
    } _segments;
}


- (BOOL)segmentSpeedAtIndex:(unsigned int)arg1;
- (void)addSegmentAt:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 forColor:(BOOL)arg2;
- (const struct TrafficSegment { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)segmentAtIndex:(unsigned int)arg1;
- (unsigned int)segmentCount;
- (void)reset;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
