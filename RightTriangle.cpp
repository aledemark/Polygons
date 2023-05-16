/// \file RightTriangle.cpp
///	\brief class RightTriangle: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "RightTriangle.h"

/// @brief default constructor 
RightTriangle::RightTriangle() {

	cout << "RightTriangle - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param b base of the RightTriangle
/// @param a altitude of the RightTriangle
RightTriangle::RightTriangle(float b, float a) {

	Init();

	cout << "RightTriangle - constructor" << endl;

	if (b <= 0.)
		cout << "WARNING: RightTriangle - constructor: base should be > 0" << endl;
	else
		base = b;

	if (a <= 0.)
		cout << "WARNING: RightTriangle - constructor: altitude should be > 0" << endl;
	else
		altitude = a;



}

/// @brief destructor 
RightTriangle::~RightTriangle() {

	cout << "RightTriangle - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
RightTriangle::RightTriangle(const RightTriangle& r) {

	cout << "RightTriangle - copy constructor" << endl;

	Init(r);

}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
RightTriangle& RightTriangle::operator=(const RightTriangle& r) {

	cout << "RightTriangle - operator =" << endl;

	Init(r);

	return *this;

}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same base and the same altitude  
bool RightTriangle::operator==(const RightTriangle& r) {

	if (r.base == base && r.altitude == altitude)
		return true;

	return false;
}

/// @brief default initialization of the object
void RightTriangle::Init() {
	Reset();
	base = 0.;
	altitude = 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void RightTriangle::Init(const RightTriangle& r) {
	Reset();
	base = r.base;
	altitude = r.altitude;
}

/// @brief total reset of the object  
void RightTriangle::Reset() {
	base = 0.;
	altitude = 0.;
}


/// @brief set base of the object
/// @param b base 
void RightTriangle::SetBase(float b) {

	if (b < 0.) {
		cout << "WARNING: RightTriangle - Setbase: base should be > 0" << endl;
		return;
	}

	base = b;

}

/// @brief set altitude of the object
/// @param a altitude 
void RightTriangle::SetAltitude(float a) {

	if (a < 0.) {
		cout << "WARNING: RightTriangle - SetAltitude: altitude should be > 0" << endl;
		return;
	}

	altitude = a;

}

/// @brief set base and altitude of the object
/// @param b base 
/// @param a altitude 
void RightTriangle::SetDim(float b, float a) {

	SetBase(b);
	SetAltitude(a);
}

/// @brief get the hypotenuse of the right triangle
/// @return the hypotenuse of the right triangle
float RightTriangle::GetHypotenuse() {

	return sqrt((base * base) + (altitude * altitude));

}

/// @brief get base of the object
/// @return base 
float RightTriangle::GetBase() {

	return base;

}

/// @brief get altitude of the object
/// @return altitude
float RightTriangle::GetAltitude() {

	return altitude;
}

/// @brief get base and altitude of the object
/// @param b base 
/// @param a altitude
void RightTriangle::GetDim(float& b, float& a) {

	b = base;
	a = altitude;

	return;
}

/// @brief get the area of the object
/// @return area of the RightTriangle
float RightTriangle::GetArea() {

	return (base * altitude)/2;

}

/// @brief get the perimeter of the object
/// @return perimeter of the RightTriangle
float RightTriangle::GetPerimeter() {

	return base + altitude +GetHypotenuse();

}



/// @brief write an error message 
/// @param string message to be printed
void RightTriangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- RightTriangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void RightTriangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- RightTriangle --";
	cout << string << endl;

}

///@brief draw the right triangle
void RightTriangle::Draw() {

	cout << endl << "Drawing a right triangle";
	cout << endl;

}


/// @brief for debugging: all about the object
void RightTriangle::Dump() {
	cout << endl;
	cout << "---RightTriangle---" << endl;
	cout << endl;

	cout << "base = " << base << endl;
	cout << "altitude = " << altitude << endl;
	cout << "hypotenuse = " << GetHypotenuse() << endl;

	cout << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;

}

/// @brief call the function GetArea
///@return the area of the right triangle
float RightTriangle::Area() {

	return GetArea();

}

/// @brief call the function GetPerimeter
///@return the perimeter of the right triangle
float RightTriangle::Perimeter() {

	return GetPerimeter();

}