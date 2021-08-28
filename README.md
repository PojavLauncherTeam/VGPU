# VGPU_VK
This branch project is based on GLOVE. The goal is to achieve compatibility with native EGL and implement GL2.0 + on the basis of GLOVE.

# Current State
The interoperability of GLES/EGL with Vulkan on the buffer is now implemented through the GLES3.2 extension 
GL_EXT_memory_object
GL_EXT_memory_object_fd.
(It has not yet been written to the branch.)

The EGL provided by this library will bind the custom context to a corresponding EGL context,
which is a surface-independent off-screen rendering context that is not managed by the native EGL.
In order to be compatible with native EGL,
all implementations of the EGL API except the GL context manager,
will directly call the native EGL API.

Main Work Flow:
GL implementation complete off-screen rendering and saves the results to external image memory.
This memory object is imported through the GLES 3.2 extension and rendered onto the surface created by the native EGL.

Added a simple vk API loader, and change some modules to make it suitable for android.
Slowly update, welcome to contribute!

# Other
See the GLOVE repository for the main design framework.
