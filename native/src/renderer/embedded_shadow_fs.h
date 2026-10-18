// Generated. Do not edit.
#pragma once
namespace renderer::shader_src {
constexpr const char* shadow_fs =
R"GLSL(#version 410 core
// Depth-only pass. Color writes are disabled (glColorMask FALSE) and the FBO
// has no color attachment (GL_NONE draw buffer); depth is written automatically
// by the fixed-function depth test. Nothing to do here.
void main() {
}
)GLSL"
;
}
