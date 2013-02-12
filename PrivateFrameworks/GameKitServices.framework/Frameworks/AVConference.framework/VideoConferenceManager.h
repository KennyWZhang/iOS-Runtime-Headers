/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVAudioDevice, GKNATObserver, ICEResultWaitQueue, NSMutableArray, VideoConference;

@interface VideoConferenceManager : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    VideoConference *activeConference;
    } audioLock;
    int audioRefCount;
    int clientPID;
    struct opaqueCMSession { } *cmSession;
    struct dispatch_queue_s { } *cmSessionQueue;
    int cmSessionRefCount;
    VideoConference *conferenceWithMic;
    BOOL enableSpeakerPhone;
    int encodeBitrate;
    struct tagHANDLE { int x1; } *hAUIO;
    struct tagHANDLE { int x1; } *hSIP;
    int hardwareSampleRate;
    int internalBlockSize;
    int internalSampleRate;
    BOOL isForcingAudioBitrate;
    BOOL isGKVoiceChat;
    BOOL isTetheredDisplayMode;
    BOOL isUsingSuppression;
    GKNATObserver *natObserver;
    ICEResultWaitQueue *resultQueue;
    BOOL shouldSetupAudioSession;
    } sipLock;
    int sipRefCount;
    } stateLock;
    AVAudioDevice *targetInputDevice;
    BOOL tearDownCMSession;
    NSMutableArray *vcList;
}

@property VideoConference * activeConference;
@property int clientPID;
@property VideoConference * conferenceWithMic;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property int internalSampleRate;
@property BOOL isForcingAudioBitrate;
@property BOOL isGKVoiceChat;
@property BOOL isUsingSuppression;
@property(readonly) ICEResultWaitQueue * resultQueue;
@property BOOL shouldSetupAudioSession;
@property(readonly) NSMutableArray * vcList;

+ (id)defaultVideoConferenceManager;

- (struct tagHANDLE { int x1; }*)SIPHandle;
- (id)activeConference;
- (void)addVideoConference:(id)arg1;
- (void)audioSessionClientDied:(int)arg1;
- (void)broadcastCellDowngrade:(BOOL)arg1;
- (int)clientPID;
- (struct opaqueCMSession { }*)cmSessionRef;
- (id)conferenceForCallID:(int)arg1;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { int x1; int x2; int x3; int x4; unsigned short x5; unsigned short x6; struct tagIPPORT { int x_7_1_1; BOOL x_7_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; unsigned int x13; int x14; int x15; int x16; int x17; }*)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (id)conferenceWithMic;
- (void)createSIP;
- (id)currentInputDevice;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (BOOL)forceBufferDuration:(float*)arg1;
- (BOOL)forceBufferFrames:(int*)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned long*)arg2;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(unsigned int)arg3;
- (void)handleRouteChanged:(struct opaqueCMSession { }*)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)init;
- (int)internalSampleRate;
- (BOOL)isForcingAudioBitrate;
- (BOOL)isGKVoiceChat;
- (BOOL)isSIPHandleValid:(struct tagHANDLE { int x1; }*)arg1;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;
- (void)pauseVideoConferences:(BOOL)arg1;
- (BOOL)projectionModeEnabledState;
- (void)removeVideoConference:(id)arg1;
- (void)resetAudioSessionProperties;
- (id)resultQueue;
- (void)setActiveConference:(id)arg1;
- (void)setClientPID:(int)arg1;
- (void)setConferenceWithMic:(id)arg1;
- (BOOL)setCurrentInputDevice:(id)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setEncodeBitrate:(int)arg1;
- (void)setInternalSampleRate:(int)arg1;
- (void)setIsForcingAudioBitrate:(BOOL)arg1;
- (void)setIsGKVoiceChat:(BOOL)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setSampleRate;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setupAudioNotifications;
- (void)setupAudioSessionProperties;
- (BOOL)shouldSetupAudioSession;
- (BOOL)shouldSetupAudioSession;
- (BOOL)startAudioIO:(struct AudioStreamBasicDescription { double x1; unsigned long x2; unsigned long x3; unsigned long x4; unsigned long x5; unsigned long x6; unsigned long x7; unsigned long x8; unsigned long x9; })arg1 sampleRate:(int)arg2 minSamplesPerFrame:(int)arg3 audioBundle:(int)arg4 remoteVCCallInfo:(id)arg5 allowAudioRecording:(BOOL)arg6 error:(id*)arg7;
- (void)startAudioSession;
- (void)startSIP;
- (BOOL)stopAudioIO;
- (void)stopAudioSession;
- (void)stopSIP;
- (BOOL)tearDownAudioIO:(BOOL)arg1;
- (void)tearDownAudioSession:(BOOL)arg1;
- (id)vcList;

@end