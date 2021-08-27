


//#include "get.h"
#include "gles_ctx/context.h"
/*
struct gles_context_t {
    context_t               rasterizer;
    array_machine_t         arrays         __attribute__((aligned(32)));
    texture_state_t         textures;
    transform_state_t       transforms;
    vertex_cache_t          vc;
    prims_t                 prims;
    culling_t               cull;
    lighting_t              lighting;
    user_clip_planes_t      clipPlanes;
    compute_iterators_t     lerp           __attribute__((aligned(32)));
    vertex_t                current;
    vec4_t                  currentColorClamped;
    vec3_t                  currentNormal;
    viewport_t              viewport;
    point_size_t            point;
    line_width_t            line;
    polygon_offset_t        polygonOffset;
    fog_t                   fog;
    uint32_t                perspective : 1;
    uint32_t                transformTextures : 1;
    EGLSurfaceManager*      surfaceManager;
    EGLBufferObjectManager* bufferObjectManager;
    GLenum                  error;
};

static inline gles_context_t* get() {
    return (gles_context_t*)getGlThreadSpecific();
}
*/