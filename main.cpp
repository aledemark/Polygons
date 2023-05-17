/// \file main.cpp
///@brief implementing the usage of the classes
///
/// 


#include "polygon.h"
#include "RightTriangle.h"
#include "Rhombus.h"


int main() {


	// usage of polymorfism for the 2 classes while creating default right triangles
	Polygon* t1[3];

	for (int i = 0; i < 3; i++)
	{
		t1[i] = new RightTriangle();
	}


	for (int i = 0; i < 3; i++)
	{
		delete t1[i];
	}

	// testing of the universal operators
	RightTriangle compare1, compare2;

	compare1.SetBase(9.14);
	compare2.SetBase(14.2);

	if (compare1 == compare2)
		cout << endl << "compare1 has the same size of compare2 " << endl;
	else
		cout << "compare1 has not the same size of compare2 " << endl;

	compare1 = compare2;

	if (compare1 == compare2)
		cout << endl << "compare1 has the same size of compare2 " << endl;
	else
		cout << "compare1 has not the same size of compare2 " << endl;



	// testing the constructor 
	RightTriangle baseconstr(4, 12.5);

	baseconstr.Draw();
	baseconstr.Dump();

	//testing the copy constructor

	RightTriangle copy1 = baseconstr;
	copy1.Dump();

	Rhombus r;
	r.Draw();

	return 0;
}