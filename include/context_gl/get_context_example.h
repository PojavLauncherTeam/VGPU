


#include "context_gl/context.h"

void get_ctx_(void) {
	gles_context_t *ctx = (gles_context_t*)getGlThreadSpecific();
	// do something
}
void get_ctx_(void) {
	gles_context_t *ctx = get_ctx();
	// do something
}