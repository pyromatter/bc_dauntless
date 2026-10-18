// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* smaa_weight_vs =
R"GLSL(layout(location = 0) in vec2 a_pos;
out vec2 v_uv;
out vec2 v_pixcoord;
out vec4 v_offset[3];
void main() {
    v_uv = (a_pos + 1.0) * 0.5;
    SMAABlendingWeightCalculationVS(v_uv, v_pixcoord, v_offset);
    gl_Position = vec4(a_pos, 0.0, 1.0);
}
)GLSL"
;
}
