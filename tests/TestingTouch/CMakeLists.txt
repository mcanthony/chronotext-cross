cmake_minimum_required (VERSION 3.2.2)

project(TestingTouch)

find_package(Boost 1.58.0 REQUIRED COMPONENTS system filesystem)

set(INCLUDE_DIRS
  ${Boost_INCLUDE_DIRS}
)

set(LIBRARIES
  ${Boost_LIBRARIES}
)

set(SRC_FILES
  "src/main.cpp"
  "src/Sketch.cpp"
  "${CROSS_ROOT}/src/gl/TextureAlphaShader.cpp"
)

# ---

if (PLATFORM MATCHES ios)
  set_source_files_properties(
    "src/main.cpp"
    PROPERTIES COMPILE_FLAGS "-x objective-c++"
  )
endif()

# ---

include("${CROSS_ROOT}/cmake/sketch.cmake")
include("${CROSS_ROOT}/cmake/test.cmake")
