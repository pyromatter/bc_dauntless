// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* smaa_edge_fs =
R"GLSL(uniform sampler2D u_color_tex;
in vec2 v_uv;
in vec4 v_offset[3];
out vec4 frag;
void main() {
    frag = vec4(SMAALumaEdgeDetectionPS(v_uv, v_offset, u_color_tex), 0.0, 0.0);
}
)GLSL"
;
}
