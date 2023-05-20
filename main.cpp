/// \file main.cpp
///@brief by creating the menu selection that allows to use the classes 
///@param LIMIT max number of the objects
///@param cnt counter of the acual created objects
///@param index used for selecting which polygon to draw
///@param flag used to avoid creating objects over the limit
///@param pgons array that contains pointers to the base objects (polygons)
///@param selection used to select what to do
/// 


#include "polygon.h"
#include "RightTriangle.h"
#include "Rhombus.h"
#include "Rectangle.h"
#define LIMIT 100 



int main() {

	// menu interface

	cout << "Welcome to the menu selection of polygons" << endl;

	Polygon* pgons[LIMIT];
	// inizializing the array of pointers to zero
	for (int k = 0; k < LIMIT; k++) {
		pgons[k] = 0;
	}
	// initializing the object counter to 0
	int cnt = 0; 

	while (true) {


		cout << endl;
		cout << "Select 1 to create a Rectangle" << endl;
		cout << "Select 2 to create a Rhombus" << endl;
		cout << "Select 3 to create a RightTriangle" << endl;
		cout << "Select 4 to draw the object you have created" << endl;
		cout << "Select 5 to exit" << endl;

		int selection;
		scanf_s("%i", &selection);
		int flag = 0;	// used to avoid creating objects over the limit
		switch (selection) {
		
		case 1: //rectangle case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag= 1;
			}
			if (flag == 0) {
				cout << "Insert lenght " << endl;
				float l, w;
				scanf_s("%f", &l);
				cout << "Insert width" << endl;
				scanf_s("%f", &w);
				pgons[cnt] = new Rectangle(l,w);
				cnt++;
			}
			
			break;

		case 2:	//rhombus case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag= 1;
			}
			if (flag == 0) {
				cout << "Insert horizontal diagonal " << endl;
				float dH, dV;
				scanf_s("%f", &dH);
				cout << "Insert vertical diagonal" << endl;
				scanf_s("%f", &dV);
				pgons[cnt] = new Rhombus(dH, dV);
				cnt++;
			}
			
			break;
		case 3:	//right triangle case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag = 1;
			}
			if (flag == 0) {
				cout << "Insert base " << endl;
				float b, a;
				scanf_s("%f", &b);
				cout << "Insert altitude" << endl;
				scanf_s("%f", &a);
				pgons[cnt] = new RightTriangle(b, a);
				cnt++;
			}
			
			break;

		case 4:	//draw case
			cout << "insert the index of the polygon you want to draw (from 1 to 100)" << endl;
			int index;
			scanf_s("%i", &index);
			if (index-1 < 0 || pgons[index-1] == NULL || index-1> LIMIT-1) {
				cout << "Not valid index" << endl;
				break;
			}
			pgons[index-1]->Draw();
			cout << "Area is " << pgons[index-1]->GetArea() << endl;
			cout << "Perimeter is " << pgons[index-1]->GetPerimeter() << endl;

			break;
		case 5: //exit case
			exit(0);
			break;

		default:
			cout << "Not valid selection,restart the program" << endl;
			exit(0);
		}
	}
	// deleting objects
	for (int k = 0; k < LIMIT; k++) {
		delete pgons[k];
	}

	return 0;
}




