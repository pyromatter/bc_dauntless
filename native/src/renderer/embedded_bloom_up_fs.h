// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* bloom_up_fs =
R"GLSL(#version 410 core
in vec2 v_uv; out vec4 frag_color;
uniform sampler2D u_src;
uniform vec2 u_texel;          // 1/source_size
void main() {
    vec2 t = u_texel;
    vec3 col = texture(u_src, v_uv).rgb * 4.0;
    col += texture(u_src, v_uv + vec2( 1, 0)*t).rgb * 2.0;
    col += texture(u_src, v_uv + vec2(-1, 0)*t).rgb * 2.0;
    col += texture(u_src, v_uv + vec2( 0, 1)*t).rgb * 2.0;
    col += texture(u_src, v_uv + vec2( 0,-1)*t).rgb * 2.0;
    col += texture(u_src, v_uv + vec2( 1, 1)*t).rgb;
    col += texture(u_src, v_uv + vec2(-1, 1)*t).rgb;
    col += texture(u_src, v_uv + vec2( 1,-1)*t).rgb;
    col += texture(u_src, v_uv + vec2(-1,-1)*t).rgb;
    frag_color = vec4(col / 16.0, 1.0);
}
)GLSL"
;
}
