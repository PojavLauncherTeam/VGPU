#include "Initialization_.h"
//#include "load.h"
//#include "pack.h"


void Initialization_(void){
	//load_all();
	
	_gles_glGetIntegerv(GL_MAX_DRAW_BUFFERS, &MaxDrawBuffers);
	_gles_glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS, &MaxColorAttachs);
	
	return;
}