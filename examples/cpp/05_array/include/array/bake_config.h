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

#ifndef ARRAY_BAKE_CONFIG_H
#define ARRAY_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_meta.h>
#include <flecs_json.h>

/* Headers of private dependencies */
#ifdef ARRAY_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef ARRAY_STATIC
  #if ARRAY_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define ARRAY_EXPORT __declspec(dllexport)
  #elif ARRAY_IMPL
    #define ARRAY_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define ARRAY_EXPORT __declspec(dllimport)
  #else
    #define ARRAY_EXPORT
  #endif
#else
  #define ARRAY_EXPORT
#endif

#endif
