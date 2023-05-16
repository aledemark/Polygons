#pragma once
/*! \file RightTriangle.h
	\brief Declaration of the class RightTriangle

	Details.
*/



#ifndef RightTriangle_H
#define RightTriangle_H

#include <math.h>
#include "polygon.h"

using namespace std;

/// @class RightTriangle
/// @brief to manage an object with the shape of a Right Rectangle
class RightTriangle:public Polygon
{
protected: //using protected for future implementations

	float base;
	float altitude;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	RightTriangle();
	RightTriangle(float b, float a);
	RightTriangle(const RightTriangle& r);

	~RightTriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	RightTriangle& operator=(const RightTriangle& r);
	bool operator==(const RightTriangle& r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const RightTriangle& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetDim(float b, float a);
	void SetBase(float b);
	void SetAltitude(float a);

	void GetDim(float& b, float& a);
	float GetBase();
	float GetAltitude();
	float GetHypotenuse();

	void Draw();
	float GetArea();
	float GetPerimeter();
	float Area();
	float Perimeter();
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};

#endif