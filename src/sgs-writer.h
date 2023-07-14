//
// Copyright 2018 Sepehr Taghdisian (septag@github). All rights reserved.
// License: https://github.com/septag/glslcc#license-bsd-2-clause
//

//
// File version: 1.2.0
// File endianness: little
// 
// v1.1.0 CHANGES
//      - added num_storages_images, num_storage_buffers (CS specific) variables to sgs_chunk_refl
// 
// v1.2.0 CHANGES
//      - added uniform block members
//
#pragma once

#include "sx/allocator.h"
#include "sgs-spec.h"

struct sgs_file;

sgs_file* sgs_create_file(const sx_alloc* alloc, const char* filepath, uint32_t lang, uint32_t profile_ver);
void      sgs_destroy_file(sgs_file* f);
void      sgs_add_stage_code(sgs_file* f, uint32_t stage, const char* code);
void      sgs_add_stage_code_bin(sgs_file* f, uint32_t stage, const void* bytecode, int len);
void      sgs_add_stage_reflect(sgs_file* f, uint32_t stage, const void* reflect, int reflect_size);
bool      sgs_commit(sgs_file* f);
