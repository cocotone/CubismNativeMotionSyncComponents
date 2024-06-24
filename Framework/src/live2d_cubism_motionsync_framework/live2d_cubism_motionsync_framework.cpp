#include "live2d_cubism_motionsync_framework.h"

// Root
#include "CubismModelMotionSyncSettingJson.cpp"
#include "CubismMotionSync.cpp"
#include "CubismMotionSyncData.cpp"
#include "CubismMotionSyncDataJson.cpp"
#include "CubismMotionSyncEngineAnalysisResult.cpp"
#include "CubismMotionSyncEngineController.cpp"
#include "CubismMotionSyncEngineCri.cpp"
#include "CubismMotionSyncEngineMappingInfo.cpp"
#include "CubismMotionSyncEngineVersion.cpp"
#include "CubismMotionSyncProcessorCri.cpp"
#include "ICubismMotionSyncEngine.cpp"
#include "ICubismMotionSyncProcessor.cpp"

// Lib
#if CSM_MOTIONSYNC_USE_STATIC_LIB
#include "Lib/CubismMotionSyncEngineLib.cpp"
#include "Lib/CubismMotionSyncEngineStaticLib.cpp"
#else
#include "Lib/CubismMotionSyncEngineLib.cpp"
#endif

// Lib/impl
#include "Lib/impl/CubismMotionSyncEngineLoader.cpp"
#if JUCE_WINDOWS
#include "Lib/impl/LibraryLoader_Win.cpp"
#else
#include "Lib/impl/LibraryLoader_Other.cpp"
#endif