#ifndef __SIMPLE_VECTOR_H__
#define __SIMPLE_VECTOR_H__

#include "integer"

#include <stdint.h>

#define TWO_VECTOR_SIZE 2
#define THREE_VECTOR_SIZE 3
#define FOUR_VECTOR_SIZE 4

/*
 * Cartesian coordinate vector indexing options
 */
enum
{
    X,
    Y,
    Z,
    T
};

/*
 * Polar/spherical coordinate indexing options
 */
enum
{
    R,
    THETA,
    PHI,
    T
};

typedef float Vector2f[TWO_VECTOR_SIZE];
typedef float Vector3f[THREE_VECTOR_SIZE];
typedef float Vector4f[FOUR_VECTOR_SIZE];

typedef double Vector2d[TWO_VECTOR_SIZE];
typedef double Vector3d[THREE_VECTOR_SIZE];
typedef double Vector4d[FOUR_VECTOR_SIZE];

typedef uint32 Vector2n[TWO_VECTOR_SIZE];
typedef uint32 Vector3n[THREE_VECTOR_SIZE];
typedef uint32 Vector4n[FOUR_VECTOR_SIZE];

typedef int32 Vector2z[TWO_VECTOR_SIZE];
typedef int32 Vector3z[THREE_VECTOR_SIZE];
typedef int32 Vector4z[FOUR_VECTOR_SIZE];

void addVec2f(const Vector2f *v1, const Vector2f *v2, Vector2f *out);
void subVec2f(const Vector2f *v1, const Vector2f *v2, Vector2f *out);
void wedgeVec2f(const Vector2f *v1, const Vector2f *v2, Vector2f *out);
void multVec2f(const Vector2f *v1, float scalar, Vector2f *out);
void addEqVec2f(Vector2f *v1, const Vector2f *v2);
void subEqVec2f(Vector2f *v1, const Vector2f *v2);
void wedgeEqVec2f(Vector2f *v1, const Vector2f *v2);
void multEqVec2f(Vector2f *v1, float scalar);

void normalizeVec2f(Vector2f *v);
void sqrMagVec2f(const Vector *v);
float dotVec2f(const Vector2f *v1, const Vector2f *v2);


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

#endif /* __SIMPLE_VECTOR_H__ */
