# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.13.4)

project(onnx-mlir)

set(CMAKE_CXX_STANDARD 17)

cmake_policy(SET CMP0116 OLD)

set(ONNX_MLIR_SRC_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(ONNX_MLIR_BIN_ROOT ${CMAKE_CURRENT_BINARY_DIR})

set(ONNX_MLIR_LIBRARY_PATH ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
set(ONNX_MLIR_RUNTIME_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
set(ONNX_MLIR_INCLUDE_PATH ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})

include(ExternalProject)
include(MLIR.cmake)


add_subdirectory(third_party/onnx)
add_subdirectory(include)
add_subdirectory(src)
