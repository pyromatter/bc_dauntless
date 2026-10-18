// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* brdf_lut_vs =
R"GLSL(#version 410 core
// BridgeProbe BRDF LUT: one full-screen triangle over the LUT. The fragment
// shader derives (NdotV, roughness) from gl_FragCoord.
layout(location=0) in vec2 a_pos;
void main() {
    gl_Position = vec4(a_pos, 0.0, 1.0);
}
)GLSL"
;
}
