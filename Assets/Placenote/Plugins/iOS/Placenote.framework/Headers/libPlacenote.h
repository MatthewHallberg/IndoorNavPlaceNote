//
//  LibPlacenote.h
//  C header of LibPlacenote SDK
//
//  Created by Yan Ma on 2017-09-01.
//  Copyright © 2017 Vertical AI. All rights reserved.

#ifndef LIBPLACENOTE_H
#define LIBPLACENOTE_H

#include <stdbool.h>

#ifndef FOUNDATION_EXPORT
#ifdef __cplusplus
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif


typedef struct PNCameraInstrinsics_t
{
  int width;
  int height;

  double fx;
  double fy;
  double cx;
  double cy;
  double k1;
  double k2;
  double p1;
  double p2;
} PNCameraInstrinsics;

typedef struct PNInitParams_t
{
  const char* apiKey;
  const char* appBasePath;
  const char* mapPath;
} PNInitParams;

typedef struct PNCallbackResult_t
{
  bool success;
  const char* msg;
} PNCallbackResult;

typedef struct PNVector3_t
{
  float x;
  float y;
  float z;
} PNVector3;

typedef struct PNQuaternion_t
{
  float x;
  float y;
  float z;
  float w;
} PNQuaternion;

typedef struct PNTransform_t
{
  PNVector3 position;
  PNQuaternion rotation;
} PNTransform;

typedef struct PNImagePlane_t
{
  void* buf;
  int width;
  int height;
  int stride;
} PNImagePlane;

typedef struct PNFeaturePoint_t
{
  int idx;
  int measCount;
  float maxViewAngle;
  PNVector3 point;
} PNFeaturePoint;

typedef struct PNKeyframe_t
{
  int idx;
  PNTransform pose;
} PNKeyframe;

typedef struct PNTransferStatus_t
{
  const char* mapId;
  bool completed;
  bool faulted;
  int bytesTransferred;
  int bytesTotal;
} PNTransferStatus;

typedef void (*result_callback) (PNCallbackResult* result, void* context);
typedef void (*transfer_map_callback) (PNTransferStatus* status, void* context);
typedef void (*pose_callback) (PNTransform* placenotePose, PNTransform* arkitPose, void* context);


FOUNDATION_EXPORT int PNInitialize(PNInitParams* params, result_callback cb, void* context);
FOUNDATION_EXPORT int PNGetStatus ();
FOUNDATION_EXPORT int PNGetTrackedLandmarks (PNFeaturePoint* points, int size);
FOUNDATION_EXPORT int PNGetAllLandmarks (PNFeaturePoint* points, int size);
FOUNDATION_EXPORT int PNListMaps (result_callback cb, void* context);
FOUNDATION_EXPORT int PNSearchMaps (const char* searchJson, result_callback cb, void* context);
FOUNDATION_EXPORT int PNSaveMap (const char* mapId, transfer_map_callback cb, void* context);
FOUNDATION_EXPORT int PNLoadMap (const char* mapId, transfer_map_callback cb, void* context);
FOUNDATION_EXPORT int PNDeleteMap (const char* mapId, result_callback cb, void* context);
FOUNDATION_EXPORT int PNAddMap (result_callback cb, void* context);
FOUNDATION_EXPORT int PNStartSession (pose_callback cb, bool extending, void* context);
FOUNDATION_EXPORT int PNStopSession ();
FOUNDATION_EXPORT int PNStartRecordDataset(transfer_map_callback cb, void* context);
FOUNDATION_EXPORT int PNGetMetadata (const char* mapId, result_callback cb, void* context);
FOUNDATION_EXPORT int PNSetMetadata (const char* mapId, const char* metadataUnvalidated, result_callback cb, void* context);
FOUNDATION_EXPORT int PNGetPose(PNTransform* transform);
FOUNDATION_EXPORT int PNSetIntrinsics(PNCameraInstrinsics* instrinsics);
FOUNDATION_EXPORT int PNSetFrame(PNImagePlane* yPlane, PNImagePlane* vuPlane, PNTransform* arPose);
FOUNDATION_EXPORT int PNShutdown();


#endif  // LIBPLACENOTE_H
