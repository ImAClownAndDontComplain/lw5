#pragma once
#include "technique.h"
#include "math_3d.h"

class NullTechnique : public Technique {
public:

    NullTechnique();

    virtual bool Init();

    void SetWVP(const Matrix4f& WVP);

private:

    GLuint m_WVPLocation;
};

