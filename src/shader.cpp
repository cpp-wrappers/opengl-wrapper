#include "gl/shader.hpp"

#ifdef GL_ALL_INCLUE_HEADER
    #include GL_ALL_INCLUE_HEADER
#else
    #define GL_GLEXT_PROTOTYPES
    #include "GL/glcorearb.h"
#endif

using uint = unsigned;

uint gl::internal::create_shader(uint type) {
    return glCreateShader(type);
}

void gl::internal::delete_shader(uint shader) {
    glDeleteShader(shader);
}

void gl::internal::shader_source(uint shader, uint count, const char* const* string, const int* length) {
    glShaderSource(shader, count, string, length);
}

void gl::internal::compile_shader(uint shader) {
    glCompileShader(shader);
}

void gl::internal::get_shaderiv(uint shader, uint pname, int* params) {
    glGetShaderiv(shader, pname, params);
}

void gl::internal::get_shader_info_log(uint shader, uint buf_size, int* length, char* info_log) {
    glGetShaderInfoLog(shader, buf_size, length, info_log);
}