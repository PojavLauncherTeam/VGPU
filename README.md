# VGPU_VK
This branch project is based on GLOVE. The goal is to achieve compatibility with native EGL and implement GL2.0 + on the basis of GLES2 and GLOVE.

#Current State
Android.mk doesn't seem to work properly because libc++ seems to have some problems, But you can use cmake to compile GLOVE on Linux.
Added a simple vk API loader, and change some modules to make it suitable for android.
Slowly update, welcome to contribute!

#Other
See the GLOVE repository for the main design framework.
