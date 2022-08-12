/*
 * SPDX-License-Identifier: Apache-2.0
 */

//===------------------------- CompilerPasses.cpp -------------------------===//
//
// Copyright 2022 The IBM Research Authors.
//
// =============================================================================
//
// Functions for adding passes.
//
//===----------------------------------------------------------------------===//

#include "mlir/Conversion/Passes.h"
#include "mlir/Conversion/SCFToControlFlow/SCFToControlFlow.h"
#include "mlir/Conversion/VectorToLLVM/ConvertVectorToLLVM.h"
#include "mlir/Conversion/VectorToSCF/VectorToSCF.h"
#include "mlir/Dialect/Bufferization/Transforms/Passes.h"
#include "mlir/Pass/Pass.h"
#include "mlir/Target/LLVMIR/Dialect/LLVMIR/LLVMToLLVMIRTranslation.h"
#include "mlir/Transforms/Passes.h"

#include "src/Compiler/CompilerOptions.hpp"
#include "src/Compiler/CompilerPasses.hpp"
#include "src/Dialect/ONNX/ONNXDialect.hpp"
#include "src/Pass/Passes.hpp"

using namespace mlir;

namespace onnx_mlir {

} // namespace onnx_mlir

