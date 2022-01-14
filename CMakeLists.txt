cmake_minimum_required(VERSION 3.6)
project(VGPU)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -funwind-tables -O3 -include android_debug.h -DNOEGL -DNOX11 -DNO_GBM -DANDROID -DBCMHOST -DSHAREDLIB -DDEFAULT_ES=3")
set(CMAKE_C_FLAGS_DEBUG "-funwind-tables -g")

find_library(log-lib log)

include_directories(include)

set(GL_SRC
	src/gl/pack/pack.c
	src/gl/pack/shaderconv.c
	src/gl/pack/shader.c
	src/glx/hardext.c
	src/glx/glx.c
	src/glx/lookup.c
	src/glx/gbm.c
	src/glx/streaming.c
	src/gl/arbconverter.c
	src/gl/arbgenerator.c
	src/gl/arbhelper.c
	src/gl/arbparser.c
	src/gl/blend.c
	src/gl/blit.c
	src/gl/buffers.c
	src/gl/build_info.c
	src/gl/debug.c
	src/gl/decompress.c
	src/gl/depth.c
	src/gl/directstate.c
	src/gl/drawing.c
	src/gl/enable.c
	src/gl/envvars.c
	src/gl/eval.c
	src/gl/face.c
	src/gl/fog.c
	src/gl/fpe.c
	src/gl/fpe_cache.c
	src/gl/fpe_shader.c
	src/gl/framebuffers.c
	src/gl/gl_lookup.c
	src/gl/getter.c
	src/gl/gl4es.c
	src/gl/glstate.c
	src/gl/hint.c
	src/gl/init.c
	src/gl/light.c
	src/gl/line.c
	src/gl/list.c
	src/gl/listdraw.c
	src/gl/listrl.c
	src/gl/loader.c
	src/gl/logs.c
	src/gl/matrix.c
	src/gl/oldprogram.c
	src/gl/pixel.c
	src/gl/planes.c
	src/gl/pointsprite.c
	src/gl/preproc.c
	src/gl/program.c
	src/gl/queries.c
	src/gl/raster.c
	src/gl/render.c
	src/gl/shader.c
	src/gl/shaderconv.c
	src/gl/shader_hacks.c
	src/gl/stack.c
	src/gl/stencil.c
	src/gl/string_utils.c
	src/gl/stubs.c
	src/gl/texenv.c
	src/gl/texgen.c
	src/gl/texture.c
	src/gl/texture_compressed.c
	src/gl/texture_params.c
	src/gl/texture_read.c
	src/gl/texture_3d.c
	src/gl/uniform.c
	src/gl/vertexattrib.c
	src/gl/wrap/gl4eswraps.c
	src/gl/wrap/gles.c
	src/gl/wrap/glstub.c
	src/gl/wrap/setenv.c
	src/gl/math/matheval.c
	src/gl/array.c
	src/gl/matvec.c
)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -rpath @executable_path/Frameworks -rpath @loader_path/Frameworks -F/Applications/PojavLauncher.app/Frameworks")
  set(FRAMEWORKS "-framework Foundation -framework MetalANGLE")
  set(log-lib "")
  list(APPEND GL_SRC
    src/gl/logs_darwin.m
  )
endif()

add_library(vgpu SHARED ${GL_SRC})

target_link_libraries(vgpu
  dl m ${log-lib} ${FRAMEWORKS}
)
