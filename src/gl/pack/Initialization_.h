#include "pack.h"


void Initialization_(void);
int MaxDrawBuffers;
int MaxColorAttachs;
const float ClearColorValue[4] = {0.0, 0.0, 0.0, 0.0};
const GLenum Attachs[8] = {
	//GL_NONE,
	GL_COLOR_ATTACHMENT0,
	GL_COLOR_ATTACHMENT1,
	GL_COLOR_ATTACHMENT2,
	GL_COLOR_ATTACHMENT3,
	GL_COLOR_ATTACHMENT4,
	GL_COLOR_ATTACHMENT5,
	GL_COLOR_ATTACHMENT6,
	GL_COLOR_ATTACHMENT7
};