#pragma once

#ifdef GL_PLATFORM_WINDOWS
  #ifdef GL_BUILD_DLL
    #define GLCORE_API __declspec(dllexport)
  #else
    #define GLCORE_API __declspec(dllimport)
  #endif
#else 
  #error GLCORE ONLY SUPPORTS WINDOWS
#endif
