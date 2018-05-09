#include "Vector.h"
#include <math.h>


//Vector2d
Vector2d::Vector2d() {};

Vector2d::Vector2d(float x, float y)
{
	Vector2d::x = x;
	Vector2d::y = y;
}

float Vector2d::getX() { return Vector2d::x; };

float Vector2d::getY() { return Vector2d::y; };

float Vector2d::magnitude()
{
	return sqrt(Vector2d::x*Vector2d::x + Vector2d::y*Vector2d::y);
}

void Vector2d::normalize()
{
	float mag = magnitude();
	Vector2d::x /= mag;
	Vector2d::y /= mag;
}


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

float Vector3d::magnitude()
{
	return sqrt(Vector3d::x*Vector3d::x + Vector3d::y*Vector3d::y + Vector3d::z*Vector3d::z);
}

void Vector3d::normalize()
{
	float mag = magnitude();
	Vector3d::x /= mag;
	Vector3d::y /= mag;
	Vector3d::z /= mag;
}



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

float Vector4d::magnitude()
{
	return sqrt(Vector4d::x*Vector4d::x + Vector4d::y*Vector4d::y + Vector4d::z*Vector4d::z);
}

void Vector4d::normalize()
{
	float mag = magnitude();
	Vector4d::x /= mag;
	Vector4d::y /= mag;
	Vector4d::z /= mag;
}