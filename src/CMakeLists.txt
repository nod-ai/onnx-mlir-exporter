# SPDX-License-Identifier: Apache-2.0

add_subdirectory(Interface)
add_subdirectory(Dialect)
add_subdirectory(Support)
add_subdirectory(Builder)
add_subdirectory(Version)
add_subdirectory(Compiler)
add_subdirectory(Transform)

add_onnx_mlir_executable(onnx-mlir
  onnx-mlir.cpp

  LINK_LIBS PRIVATE
  CompilerUtils
  )
  
