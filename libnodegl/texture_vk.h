/*
 * Copyright 2020 GoPro Inc.
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

#ifndef TEXTURE_VK_H
#define TEXTURE_VK_H

#include <vulkan/vulkan.h>

struct ngl_ctx;
struct vkcontext;
struct texture;

int ngli_texture_vk_transition_layout(struct texture *s, VkImageLayout layout);
void ngli_vk_transition_image_layout(struct vkcontext *vk,
                                     VkCommandBuffer command_buffer,
                                     VkImage image,
                                     VkImageLayout old_layout,
                                     VkImageLayout new_layout,
                                     const VkImageSubresourceRange *subres_range);

#endif
