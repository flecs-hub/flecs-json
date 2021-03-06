/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef BITMASK_BAKE_CONFIG_H
#define BITMASK_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_meta.h>
#include <flecs_json.h>

/* Headers of private dependencies */
#ifdef BITMASK_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef BITMASK_STATIC
  #if BITMASK_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define BITMASK_API __declspec(dllexport)
  #elif BITMASK_IMPL
    #define BITMASK_API __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define BITMASK_API __declspec(dllimport)
  #else
    #define BITMASK_API
  #endif
#else
  #define BITMASK_API
#endif

#endif

