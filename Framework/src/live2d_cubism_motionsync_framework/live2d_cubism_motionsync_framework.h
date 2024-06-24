/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 live2d_cubism_motionsync_framework
  vendor:             Live2D
  version:            1.0.0
  name:               Live2D Cubism MotionSync Framework
  description:        Classes to creating Live2D application
  website:            
  license:            
  minimumCppStandard: 17

  dependencies:       live2d_cubism_framework

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define LIVE2D_CUBISM_MOTIONSYNC_FRAMEWORK_H_INCLUDED

#include <live2d_cubism_framework/live2d_cubism_framework.h>

//==============================================================================
///** Config: CSM_MOTIONSYNC_USE_STATIC_LIB
//    Enables the static library.
//*/
//#ifndef CSM_MOTIONSYNC_USE_STATIC_LIB
// #define CSM_MOTIONSYNC_USE_STATIC_LIB 0
//#endif

#include "CubismMotionSync.hpp"
