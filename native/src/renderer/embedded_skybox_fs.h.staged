// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* skybox_fs =
R"GLSL(#version 410 core

in vec3 v_dir;

uniform samplerCube u_skybox;

out vec4 frag_color;

void main() {
    frag_color = vec4(texture(u_skybox, normalize(v_dir)).rgb, 1.0);
}
)GLSL"
;
}
