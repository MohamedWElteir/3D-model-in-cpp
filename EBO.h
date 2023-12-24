#ifndef EBO_H
#define EBO_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class EBO {
public:
	GLuint ID;
	EBO(GLuint* indicies, GLsizeiptr size);
	void Bind();
	void Unbind();
	void Delete();
};

#endif

