#pragma once
#ifndef VECTOR_3_H
#define VECTOR_3_H

#include <string>

struct Vector3
{
	double x, y, z;
	
	Vector3() : x(0), y(0), z(0) {}
	Vector3(double x, double y, double z) : x(x), y(y), z(z) {};
	
	std::string print() 
	{
		return ("{" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + "}");
	}

	static Vector3* Add(Vector3 v1, Vector3 v2)
	{
		Vector3* temp = new Vector3;
		temp->x = v1.x + v2.x;
		temp->y = v1.y + v2.y;
		temp->z = v1.z + v2.z;
		return temp;
	}
};

#endif // !VECTOR_3_H

