#pragma once
#include <string>
#include "texture.h"
#include "billboard_technique.h"

class BillboardList
{
public:
    BillboardList();    
    ~BillboardList();
    
    bool Init(const std::string& TexFilename);
    
    void Render(const Matrix4f& VP, const Vector3f& CameraPos);

private:
    void CreatePositionBuffer();
    
    GLuint m_VB;
    Texture* m_pTexture;
    BillboardTechnique m_technique;
};


