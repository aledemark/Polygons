/// \file rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "rhombus.h"

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	diagH = 0;
	diagV = 0;

}

/// @brief constructor 
/// @param diagH in pixels
/// @param diagV in pixels
Rhombus::Rhombus(float dH, float dV) {

	diagH = 0;
	diagV = 0;

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		diagV = dV;



}

/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;

}

/// @brief copy constructor
///@param r reference to the object that should be copied
Rhombus::Rhombus(const Rhombus& r) {

	diagH = r.diagH;
	diagV = r.diagV;

}

///@brief overload operator =
///@param reference to the object on the right side of the operator
///@param reference to the object on the left side of the operator
Rhombus& Rhombus::operator=(const Rhombus& r) {
	cout << "Rectangle - operator =" << endl;

	diagH = r.diagH;
	diagV = r.diagV;

	return *this;
}

///@brief overload operator ==
///@param reference to the object on the right side of the operator
/// @return true if the two objects have the same width and length
bool Rhombus::operator==(const Rhombus& r) {
	cout << "Rectangle - operator ==" << endl;

	if (diagH == r.diagH && diagV == r.diagV) {
		return true;
	}
	else return false;
}


///@return the side of the Rhombus,privately
float Rhombus::Side() {

	return sqrt((diagH / 2) * (diagH / 2) + (diagV / 2) * (diagV / 2));

}

///@brief set diagonals of the object
///@paramm dH diagH in pixels
/// @param dV diagV in pixels
void Rhombus::SetDim(float dH, float dV) {

	diagH = dH;
	diagV = dV;

}

/// @brief set diagH of the object
/// @param dH diagH in pixels
void Rhombus::SetDiagH(float dH) {

	if (dH < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	diagH = dH;

}

/// @brief set diagV of the object
/// @param dV diagV in pixels
void Rhombus::SetDiagV(float dV) {

	if (dV < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	diagV = dV;

}


/// @brief get diagH of the object
/// @param input rhombus where diagH has to be get
float Rhombus::GetDiagH() {

	return diagH;

}

/// @brief get diagV of the object
/// @param input rhombus where diagV has to be get
float Rhombus::GetDiagV() {

	return diagV;

}

/// @brief set diagH and diagV of the object
/// @param dH diagH in pixels
/// @param dV diagV in pixels
void Rhombus::GetDiagonals(float& dH, float& dV) {

	dH = diagH;
	dV = diagV;

}
/// @return area of the rhombus
float Rhombus::GetArea() {

	return (diagH * diagV) / 2;

}

/// @return perimeter of the rhombus
float Rhombus::GetPerimeter() {

	return 4 * Side();

};

///@return side of the rhombus,public
float Rhombus::GetSide() {
	return Side();
}

/// @brief define the polygon function area
/// @return area of the polygon
float Rhombus::Area() {

	return GetArea();

}

/// @brief define the polygon function perimeter
/// @return perimeter of the polygon
float Rhombus::Perimeter() {

	return GetPerimeter();

}

///@brief draw the rhombus
void Rhombus::Draw() {

	cout << endl << "Drawing a rhombus";
	cout << endl;

}
