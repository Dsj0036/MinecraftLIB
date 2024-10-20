#pragma once
#ifndef MCGL
#define MCGL
#include "src\system.hpp"
#include "src\module\call.h"

#define MC_GL_ZERO                  0
#define MC_GL_ONE                   1
#define MC_GL_SRC_ALPHA             4
#define MC_GL_ONE_MINUS_SRC_ALPHA   5

#define MC_GL_TRIANGLES             0
#define MC_GL_TRIANGLE_FAN          1
#define MC_GL_QUADS                 2
#define MC_GL_QUADS_STRIP           3
#define MC_GL_LINES                 4
#define MC_GL_LINES_STRIP           5
#define MC_GL_RGB			3
#define MC_GL_RGBA					4
#define MC_GL_MODELVIEW             0
#define MC_GL_PROJECTION            1
#define MC_GL_TEXTURE               2
#define MC_GL_UNSIGNED_BYTE			5121
#define WIDTH 1280
#define HEIGHT 720

namespace GLES
{

	void translatef(float x, float y, float z);
	void scalef(float s1, float s2, float s3);
	void rotatef(float x, float y, float z, float w);
	void rotate(float rot);
	void popMatrix();
	void pushMatrix();
	void EnableBlend();
	void DisableBlend();
	void EnableAlpha();
	void DisableAlpha();
	void AlphaFunc(int func, float ref);
	void DisableColorMaterial();
	void EnableLighting();
	void DisableLighting();
	void EnableLight(int light);
	void DisableLight(int light);
	void ColorMaterial(uint32_t face, int mode);
	void EnableDepth();
	void DisableDepth();
	void DepthFunc(int depthFunc);
	void DepthMask(int flagIn);
	void BlendFunc(int srcFactor, int dstFactor);
	void EnableFog();
	void DisableFog();
	void setFog(int param);
	void SetFogDensity(double param);
	void SetFogStart(double param);
	void SetFogEnd(double param);
	void GlFog();
	void GlFogI();
	void EnableCull();
	void DisableCull();
	void CullFace(int mode);
	void EnablePolygonOffset();
	void DisablePolygonOffset();
	void doPolygonOffset(double factor, double units);
	void EnableColorLogic();
	void DisableColorLogic();
	void ColorLogic(int texGen);
	void EnableTexGenCoord(int texGen);
	void DisableTexGenCoord(int texGen);
	void TexGen(int texGen, int param);
	void SetActiveTexture(int texture);
	void EnableTexture2D();
	void DisableTexture2D();
	int  GenerateTexture();
	void DeleteTexture(int texture);
	void BendTexture(int texture);
	void GlTexImage2D(uint32_t target, uint32_t level, uint32_t internalFormat, uint32_t width, int height, int border, int type, int r8, int r9, int r10);
	void EnableNormalize();
	void DisableNormalize();
	void ShadeModel(int mode);
	void EnableRescaleNormal();
	void DisableRescaleNormal();
	void ColorMask(char red, char green, char blue, char alpha);
	void ClearDepth(double depth);
	void ClearColor(double red, double green, double blue, double alpha);
	void GetFloat(int32_t pname, int32_t param);
	void Color1(float colorRed, float colorGreen, float colorBlue, float colorAlpha);
	void Color2(float colorRed, float colorGreen, float ColorBlue);
	void matrixMode(int32_t m) {
		Call<uint>(0xA74C3C, m);
	}
	void ortho(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6) {
		Call<uint>(0xC6DA60, arg1, arg2, arg3, arg4, arg5, arg6);
	}
}

#endif