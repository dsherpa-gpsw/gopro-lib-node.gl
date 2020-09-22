/*
 * Copyright 2018 GoPro Inc.
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "texture_ngfx.h"

struct texture *ngli_texture_ngfx_create(struct gctx *gctx) { return NULL; }

int ngli_texture_ngfx_init(struct texture *s,
                           const struct texture_params *params) { return 0; }

void ngli_texture_ngfx_set_dimensions(struct texture *s, int width, int height, int depth) {}

int ngli_texture_ngfx_has_mipmap(const struct texture *s) { return 0; }
int ngli_texture_ngfx_match_dimensions(const struct texture *s, int width, int height, int depth) { return 0; }

int ngli_texture_ngfx_upload(struct texture *s, const uint8_t *data, int linesize) { return 0; }
int ngli_texture_ngfx_generate_mipmap(struct texture *s) { return 0; }

void ngli_texture_ngfx_freep(struct texture **sp) {}
