#pragma once
#include "ds_light_pass_tech.h"
#include "lights_common.h"

class DSPointLightPassTech : public DSLightPassTech
{
public:

    DSPointLightPassTech();

    bool Init();

    void SetPointLight(const PointLight& Lights);

private:

    struct {
        GLuint Color;
        GLuint AmbientIntensity;
        GLuint DiffuseIntensity;
        GLuint Position;
        struct {
            GLuint Constant;
            GLuint Linear;
            GLuint Exp;
        } Atten;
    } m_pointLightLocation;
};
