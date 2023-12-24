#ifndef VBO_H
#define VBO_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Vertex Buffer Object
class VBO {
public:
	GLuint ID;
	VBO(GLfloat* vertices, GLsizeiptr size);
	void Bind();
	void Unbind();
	void Delete();
};

#endif
