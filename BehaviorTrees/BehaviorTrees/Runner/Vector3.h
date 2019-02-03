#pragma once
#ifndef VECTOR_3_H
#define VECTOR_3_H

#include <string>

struct Vector3
{
	double x, y, z;
	
	Vector3(double x, double y, double z) : x(x), y(y), z(z) {};
	
	std::string print() 
	{
		return ("{" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + "}");
	}
};

#endif // !VECTOR_3_H

