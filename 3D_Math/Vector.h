#pragma once

class Vector2d
{
public:
	Vector2d();
	Vector2d(float x, float y);
	float getX();
	float getY();
	float magnitude();
	void normalize();

private:
	float x, y;

};


class Vector3d
{
public:
	Vector3d();
	Vector3d(float x, float y, float z);
	float getX();
	float getY();
	float getZ();
	float magnitude();
	void normalize();

private:
	float x, y, z;
};

class Vector4d
{
public:
	Vector4d();
	Vector4d(float x, float y, float z, float w);
	float getX();
	float getY();
	float getZ();
	float getW();
	float magnitude();
	void normalize();

private:
	float x, y, z, w;

};