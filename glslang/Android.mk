# Copyright (C) 2020 The Khronos Group Inc.
#
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#    Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#
#    Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#
#    Neither the name of The Khronos Group Inc. nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

LOCAL_PATH := $(call my-dir)



GLSLANG_OS_FLAGS := -DGLSLANG_OSINCLUDE_UNIX
# AMD and NV extensions are turned on by default in upstream Glslang.
GLSLANG_DEFINES:= -DAMD_EXTENSIONS -DNV_EXTENSIONS -DENABLE_HLSL $(GLSLANG_OS_FLAGS)


include $(CLEAR_VARS)
LOCAL_MODULE:=OSDependent
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:=glslang/OSDependent/Unix/ossource.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH) $(LOCAL_PATH)/glslang/OSDependent/Unix/
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/glslang/OSDependent/Unix/
include $(BUILD_STATIC_LIBRARY)


include $(CLEAR_VARS)
LOCAL_MODULE:=OGLCompiler
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:=OGLCompilersDLL/InitializeDll.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH)/OGLCompiler
LOCAL_STATIC_LIBRARIES:=OSDependent
include $(BUILD_STATIC_LIBRARY)


# Build the stubbed HLSL library.
# The HLSL source is now directly referenced by the glslang static library
# instead.
include $(CLEAR_VARS)
LOCAL_MODULE:=HLSL
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_SRC_FILES:= \
    hlsl/hlslAttributes.cpp \
    hlsl/hlslParseHelper.cpp \
    hlsl/hlslScanContext.cpp \
    hlsl/hlslOpMap.cpp \
    hlsl/hlslTokenStream.cpp \
    hlsl/hlslGrammar.cpp \
    hlsl/hlslParseables.cpp

LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/glslang/HLSL
include $(BUILD_STATIC_LIBRARY)


include $(CLEAR_VARS)

LOCAL_MODULE:=glslang
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:= \
		glslang/MachineIndependent/glslang.y \
        glslang/MachineIndependent/glslang_tab.cpp \
        glslang/MachineIndependent/attribute.cpp \
        glslang/MachineIndependent/Constant.cpp \
        glslang/MachineIndependent/iomapper.cpp \
        glslang/MachineIndependent/InfoSink.cpp \
        glslang/MachineIndependent/Initialize.cpp \
        glslang/MachineIndependent/IntermTraverse.cpp \
        glslang/MachineIndependent/Intermediate.cpp \
        glslang/MachineIndependent/ParseContextBase.cpp \
        glslang/MachineIndependent/ParseHelper.cpp \
        glslang/MachineIndependent/PoolAlloc.cpp \
        glslang/MachineIndependent/RemoveTree.cpp \
        glslang/MachineIndependent/Scan.cpp \
        glslang/MachineIndependent/ShaderLang.cpp \
        glslang/MachineIndependent/SymbolTable.cpp \
        glslang/MachineIndependent/Versions.cpp \
        glslang/MachineIndependent/intermOut.cpp \
        glslang/MachineIndependent/limits.cpp \
        glslang/MachineIndependent/linkValidate.cpp \
        glslang/MachineIndependent/parseConst.cpp \
        glslang/MachineIndependent/reflection.cpp \
        glslang/MachineIndependent/preprocessor/Pp.cpp \
        glslang/MachineIndependent/preprocessor/PpAtom.cpp \
        glslang/MachineIndependent/preprocessor/PpContext.cpp \
        glslang/MachineIndependent/preprocessor/PpScanner.cpp \
        glslang/MachineIndependent/preprocessor/PpTokens.cpp \
        glslang/MachineIndependent/propagateNoContraction.cpp \
        glslang/GenericCodeGen/CodeGen.cpp \
        glslang/GenericCodeGen/Link.cpp

LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/glslang/MachineIndependent \
	$(GLSLANG_GENERATED_INCLUDEDIR) \
	$(GLSLANG_OUT_PATH)
LOCAL_STATIC_LIBRARIES:=OSDependent OGLCompiler HLSL
include $(BUILD_STATIC_LIBRARY)


include $(CLEAR_VARS)

LOCAL_MODULE:=SPIRV
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_SRC_FILES:= \
	SPIRV/GlslangToSpv.cpp \
	SPIRV/InReadableOrder.cpp \
	SPIRV/Logger.cpp \
	SPIRV/SPVRemapper.cpp \
	SPIRV/SpvBuilder.cpp \
	SPIRV/disassemble.cpp \
	SPIRV/doc.cpp

LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/SPIRV \
	$(GLSLANG_GENERATED_INCLUDEDIR)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/SPIRV
LOCAL_STATIC_LIBRARIES:=glslang
include $(BUILD_STATIC_LIBRARY)
