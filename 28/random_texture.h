#pragma once
#include <GL/glew.h>

class RandomTexture
{
public:
    RandomTexture();

    ~RandomTexture();
    
    bool InitRandomTexture(unsigned int Size);

    void Bind(GLenum TextureUnit);

private:
    GLuint m_textureObj;
};


