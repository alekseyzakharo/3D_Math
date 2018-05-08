#include "Vector.h"


//Vector2d
Vector2d::Vector2d() {};
Vector2d::Vector2d(float x, float y)
{
	Vector2d::x = x;
	Vector2d::y = y;
}
float Vector2d::getX() { return Vector2d::x; };
float Vector2d::getY() { return Vector2d::y; };



//Vector3d
Vector3d::Vector3d() {};
Vector3d::Vector3d(float x, float y, float z)
{
	Vector3d::x = x;
	Vector3d::y = y;
	Vector3d::z = z;
};
float Vector3d::getX() { return Vector3d::x; };
float Vector3d::getY() { return Vector3d::y; };
float Vector3d::getZ() { return Vector3d::z; };



//Vector4d
Vector4d::Vector4d() {};
Vector4d::Vector4d(float x, float y, float z, float w)
{
	Vector4d::x = x;
	Vector4d::y = y;
	Vector4d::z = z;
	Vector4d::w = w;
};
float Vector4d::getX() { return Vector4d::x; };
float Vector4d::getY() { return Vector4d::y; };
float Vector4d::getZ() { return Vector4d::z; };
float Vector4d::getW() { return Vector4d::w; };
