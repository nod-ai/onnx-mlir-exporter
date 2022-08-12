# SPDX-License-Identifier: Apache-2.0

add_onnx_mlir_dialect(ONNX onnx)
add_onnx_mlir_dialect_doc(onnx ONNX.td)

add_onnx_mlir_rewriter(Rewrite)

add_onnx_mlir_library(OMONNXOps
  DialectBuilder.cpp
  ONNXDialect.cpp
  ONNXOps.cpp
  ONNXOpsHelper.cpp
  ONNXEinsumOpHelper.cpp
  ONNXTypes.cpp
  Rewrite.cpp

  ShapeInference/ArgMinMax.cpp
  ShapeInference/AveragePool.cpp
  ShapeInference/CategoryMapper.cpp  
  ShapeInference/Clip.cpp  
  ShapeInference/Compress.cpp
  ShapeInference/Concat.cpp
  ShapeInference/Conv.cpp
  ShapeInference/DepthToSpace.cpp
  ShapeInference/Expand.cpp
  ShapeInference/Flatten.cpp
  ShapeInference/Gather.cpp
  ShapeInference/GatherElements.cpp  
  ShapeInference/GatherND.cpp  
  ShapeInference/Gemm.cpp
  ShapeInference/LRN.cpp
  ShapeInference/MatMul.cpp
  ShapeInference/MaxPool.cpp
  ShapeInference/ONNXShapeHelper.cpp  
  ShapeInference/OneHot.cpp
  ShapeInference/Pad.cpp
  ShapeInference/Reduction.cpp
  ShapeInference/Reshape.cpp
  ShapeInference/ReverseSequence.cpp
  ShapeInference/RoiAlign.cpp
  ShapeInference/Shape.cpp
  ShapeInference/Slice.cpp
  ShapeInference/SpaceToDepth.cpp
  ShapeInference/Split.cpp
  ShapeInference/Squeeze.cpp
  ShapeInference/Tile.cpp
  ShapeInference/TopK.cpp
  ShapeInference/Transpose.cpp
  ShapeInference/Unsqueeze.cpp

  DEPENDS
  OMHasOnnxSubgraphOpInterfaceIncGen
  OMONNXIncGen
  OMONNXRewriteIncGen
  OMResultTypeInferenceOpInterfaceIncGen
  OMShapeInferenceOpInterfaceIncGen

  LINK_LIBS PRIVATE
  Diagnostic
    
  LINK_LIBS PUBLIC
  OMMlirDialects
  OMMlirUtilities
  onnx
  )

configure_file(ONNXOps.td.inc.dc.in
  ${CMAKE_CURRENT_BINARY_DIR}/ONNXOps.td.inc.dc
  @ONLY
  )
