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

#ifndef FLECS_JSON_BAKE_CONFIG_H
#define FLECS_JSON_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_meta.h>

/* Convenience macro for exporting symbols */
#ifndef flecs_json_STATIC
#if flecs_json_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_JSON_EXPORT __declspec(dllexport)
#elif flecs_json_EXPORTS
  #define FLECS_JSON_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define FLECS_JSON_EXPORT __declspec(dllimport)
#else
  #define FLECS_JSON_EXPORT
#endif
#else
  #define FLECS_JSON_EXPORT
#endif

#endif

