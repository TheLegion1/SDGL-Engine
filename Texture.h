#pragma once
#include<glad/glad.h>
#include<stb/stb_image.h>

#include"shaderClass.h"

class Texture {
public:
	GLuint ID;
	GLenum type;
	GLuint uint;
	Texture(const char *image, GLenum texType, GLuint slot, GLenum format, GLenum pixelType);

	// Assigns a texture unit to a texture
	void texUnit(Shader &shader, const char *uniform, GLuint unit);
	// Binds a texture
	void Bind();
	// Unbinds a texture
	void Unbind();
	// Deletes a texture
	void Delete();
};