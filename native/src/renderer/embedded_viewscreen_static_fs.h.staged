// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* viewscreen_static_fs =
R"GLSL(#version 410 core
in vec2 v_uv;
uniform sampler2D u_noise;
uniform float u_intensity;   // 0..1
out vec4 FragColor;
void main() {
    vec3 n = texture(u_noise, v_uv).rgb;
    FragColor = vec4(n, u_intensity);
}
)GLSL"
;
}
