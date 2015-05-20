#ifndef __STD_VECTOR_H__
#define __STD_VECTOR_H__

#include "integer.h"
#include "vector.h"
#include <stdint.h>

enum 
{
    FLOAT_VECTOR,
    DOUBLE_VECTOR,
    INT_VECTOR,
    NAT_VECTOR,
    INT_VECTOR_EXT,
    NAT_VECTOR_EXT,
    STD_VECTORS
};

typedef float Vector3f[3];
typedef float Vector4f[4];
typedef float Vector2f[2];

typedef double Vector3d[3];
typedef double Vector4d[4];
typedef double Vector2d[5];

const Vector3f e_1_3f = {1.f, 0.f, 0.f};
const Vector3f e_2_3f = {0.f, 1.f, 0.f};
const Vector3f e_3_3f = {0.f, 0.f, 1.f};

const Vector2f e_1_2f = {1.f, 0.f};
const Vector2f e_2_2f = {0.f, 1.f};

const Vector4f e_1_4f = {1.f, 0.f, 0.f, 0.f};
const Vector4f e_2_4f = {0.f, 1.f, 0.f, 0.f};
const Vector4f e_3_4f = {0.f, 0.f, 1.f, 0.f};
const Vector4f e_4_4f = {0.f, 0.f, 0.f, 1.f};

const Vector3d e_1_3d = {1., 0., 0.};
const Vector3d e_2_3d = {0., 1., 0.};
const Vector3d e_3_3d = {0., 0., 1.};

const Vector2d e_1_2d = {1., 0.};
const Vector2d e_2_2d = {0., 1.};

const Vector4d e_1_4d = {1., 0., 0., 0.};
const Vector4d e_2_4d = {0., 1., 0., 0.};
const Vector4d e_3_4d = {0., 0., 1., 0.};
const Vector4d e_4_4d = {0., 0., 0., 1.};



#endif /* __STD_VECTOR_H__ */
