cmake_minimum_required(VERSION 3.10)

# This makes the assumption the current directory is named live2d_cubism_motionsync_framework
if (COMMAND juce_add_module)
  juce_add_module(${CMAKE_CURRENT_SOURCE_DIR}/src/live2d_cubism_motionsync_framework)
  set_property (TARGET live2d_cubism_motionsync_framework APPEND PROPERTY LABELS live2d_cubism_motionsync_framework)
  add_library(live2d::cubism_motionsync_framework ALIAS live2d_cubism_motionsync_framework)
else()
  # Set directory paths.
  set(LIB_NAME MotionSyncFramework)
  set(SDK_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/..)
  set(FRAMEWORK_SRC_PATH "$CACHE{NATIVE_PATH}/Framework/src")


  # Force static library.
  add_library(${LIB_NAME} STATIC)

  add_subdirectory(src)

  # Add Cubism Native Framework.
  target_include_directories(${LIB_NAME}
    PUBLIC
      ${FRAMEWORK_SRC_PATH} ${CMAKE_CURRENT_BINARY_DIR}/Framework
  )

  # Add include path.
  target_include_directories(${LIB_NAME}
    PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}/src
    PRIVATE
      ${RENDER_INCLUDE_PATH}
  )

  # Deprecated functions
  # The following expressions are written for compatibility
  # and will be removed in a future release.

  # Add Cubism Core include.
  target_include_directories(${LIB_NAME}
    PRIVATE
      $CACHE{NATIVE_PATH}/Core/include
  )

  # Add Motion Sync cri include.
  target_include_directories(${LIB_NAME}
    PRIVATE
      ${SDK_ROOT_PATH}/Core/CRI/include
  )

  # Add Motion Sync include.
  target_include_directories(${LIB_NAME}
    PRIVATE
      ${SDK_ROOT_PATH}/Core/include
  )
endif ()