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
#include "gctx_ngfx.h"
#include "buffer_ngfx.h"
#include "gtimer_ngfx.h"
#include "pipeline_ngfx.h"
#include "program_ngfx.h"
#include "rendertarget_ngfx.h"
#include "swapchain_ngfx.h"
#include "texture_ngfx.h"
#include "memory.h"
#include "log.h"
#include <memory>
#include "NGLApplication.h"
using namespace std;

struct gctx_ngfx {
    struct gctx parent;
    std::shared_ptr<NGL::NGLApplication> app;
};

static struct gctx *ngfx_create(const struct ngl_config *config)
{
    gctx_ngfx* ctx = new gctx_ngfx;
    ctx->app = make_shared<NGL::NGLApplication>();
    return (struct gctx *)ctx;
}

static int ngfx_init(struct gctx *s)
{
    return 0;
}

static int ngfx_resize(struct gctx *s, int width, int height, const int *viewport)
{ TODO("w: %d h: %d", width, height);
    return 0;
}

static int ngfx_pre_draw(struct gctx *s, double t)
{ TODO();
    return 0;
}

static int ngfx_post_draw(struct gctx *s, double t)
{ TODO();
    return 0;
}

static void ngfx_wait_idle(struct gctx *s)
{ TODO();
}

static void ngfx_destroy(struct gctx *s)
{ TODO();

}

static int ngfx_transform_cull_mode(struct gctx *s, int cull_mode)
{ TODO();
    return 0;
}

static void ngfx_transform_projection_matrix(struct gctx *s, float *dst)
{ TODO();

}

static void ngfx_get_rendertarget_uvcoord_matrix(struct gctx *s, float *dst)
{ TODO();

}

static void ngfx_set_rendertarget(struct gctx *s, struct rendertarget *rt)
{ TODO();

}

static struct rendertarget *ngfx_get_rendertarget(struct gctx *s)
{ TODO();
    return NULL;
}

static const struct rendertarget_desc *ngfx_get_default_rendertarget_desc(struct gctx *s)
{ TODO();
   return NULL;
}

static void ngfx_set_viewport(struct gctx *s, const int *viewport)
{ TODO();
}

static void ngfx_get_viewport(struct gctx *s, int *viewport)
{ TODO();
}

static void ngfx_set_scissor(struct gctx *s, const int *scissor)
{ TODO();
}

static void ngfx_get_scissor(struct gctx *s, int *scissor)
{ TODO();
}

static void ngfx_set_clear_color(struct gctx *s, const float *color)
{ TODO();
}

static void ngfx_get_clear_color(struct gctx *s, float *color)
{ TODO();
}

static void ngfx_clear_color(struct gctx *s)
{ TODO();

}

static void ngfx_clear_depth_stencil(struct gctx *s)
{ TODO();

}

static void ngfx_invalidate_depth_stencil(struct gctx *s)
{ TODO();
}

static void ngfx_flush(struct gctx *s)
{ TODO();

}

static int ngfx_get_preferred_depth_format(struct gctx *s)
{ TODO();
    return 0;
}

static int ngfx_get_preferred_depth_stencil_format(struct gctx *s)
{ TODO();
    return 0;
}

const struct gctx_class ngli_gctx_ngfx = {
    .name         = "NGFX",
    .create       = ngfx_create,
    .init         = ngfx_init,
    .resize       = ngfx_resize,
    .pre_draw     = ngfx_pre_draw,
    .post_draw    = ngfx_post_draw,
    .wait_idle    = ngfx_wait_idle,
    .destroy      = ngfx_destroy,

    .transform_cull_mode = ngfx_transform_cull_mode,
    .transform_projection_matrix = ngfx_transform_projection_matrix,
    .get_rendertarget_uvcoord_matrix = ngfx_get_rendertarget_uvcoord_matrix,

    .set_rendertarget         = ngfx_set_rendertarget,
    .get_rendertarget         = ngfx_get_rendertarget,
    .get_default_rendertarget_desc = ngfx_get_default_rendertarget_desc,
    .set_viewport             = ngfx_set_viewport,
    .get_viewport             = ngfx_get_viewport,
    .set_scissor              = ngfx_set_scissor,
    .get_scissor              = ngfx_get_scissor,
    .set_clear_color          = ngfx_set_clear_color,
    .get_clear_color          = ngfx_get_clear_color,
    .clear_color              = ngfx_clear_color,
    .clear_depth_stencil      = ngfx_clear_depth_stencil,
    .invalidate_depth_stencil = ngfx_invalidate_depth_stencil,
    .get_preferred_depth_format= ngfx_get_preferred_depth_format,
    .get_preferred_depth_stencil_format=ngfx_get_preferred_depth_stencil_format,
    .flush                    = ngfx_flush,

    .buffer_create = ngli_buffer_ngfx_create,
    .buffer_init   = ngli_buffer_ngfx_init,
    .buffer_upload = ngli_buffer_ngfx_upload,
    .buffer_download = ngli_buffer_ngfx_download,
    .buffer_map      = ngli_buffer_ngfx_map,
    .buffer_unmap    = ngli_buffer_ngfx_unmap,
    .buffer_freep  = ngli_buffer_ngfx_freep,

    .gtimer_create = ngli_gtimer_ngfx_create,
    .gtimer_init   = ngli_gtimer_ngfx_init,
    .gtimer_start  = ngli_gtimer_ngfx_start,
    .gtimer_stop   = ngli_gtimer_ngfx_stop,
    .gtimer_read   = ngli_gtimer_ngfx_read,
    .gtimer_freep  = ngli_gtimer_ngfx_freep,

    .pipeline_create         = ngli_pipeline_ngfx_create,
    .pipeline_init           = ngli_pipeline_ngfx_init,
    .pipeline_bind_resources = ngli_pipeline_ngfx_bind_resources,
    .pipeline_update_attribute = ngli_pipeline_ngfx_update_attribute,
    .pipeline_update_uniform = ngli_pipeline_ngfx_update_uniform,
    .pipeline_update_texture = ngli_pipeline_ngfx_update_texture,
    .pipeline_draw           = ngli_pipeline_ngfx_draw,
    .pipeline_draw_indexed   = ngli_pipeline_ngfx_draw_indexed,
    .pipeline_dispatch       = ngli_pipeline_ngfx_dispatch,
    .pipeline_freep          = ngli_pipeline_ngfx_freep,

    .program_create = ngli_program_ngfx_create,
    .program_init   = ngli_program_ngfx_init,
    .program_freep  = ngli_program_ngfx_freep,

    .rendertarget_create      = ngli_rendertarget_ngfx_create,
    .rendertarget_init        = ngli_rendertarget_ngfx_init,
    .rendertarget_resolve     = ngli_rendertarget_ngfx_resolve,
    .rendertarget_read_pixels = ngli_rendertarget_ngfx_read_pixels,
    .rendertarget_freep       = ngli_rendertarget_ngfx_freep,

    .swapchain_create         = ngli_swapchain_ngfx_create,
    .swapchain_destroy        = ngli_swapchain_ngfx_destroy,
    .swapchain_acquire_image  = ngli_swapchain_ngfx_acquire_image,

    .texture_create           = ngli_texture_ngfx_create,
    .texture_init             = ngli_texture_ngfx_init,
    .texture_has_mipmap       = ngli_texture_ngfx_has_mipmap,
    .texture_match_dimensions = ngli_texture_ngfx_match_dimensions,
    .texture_upload           = ngli_texture_ngfx_upload,
    .texture_generate_mipmap  = ngli_texture_ngfx_generate_mipmap,
    .texture_freep            = ngli_texture_ngfx_freep,
};