/// \file main.cpp
///@brief implementing the usage of the classes
///
/// 


#include "polygon.h"
#include "RightTriangle.h"
#include "Rhombus.h"
#include "Rectangle.h"



int main() {

	// interfaccia menu

	cout << "Welcome to the menu selection of polygons" << endl;


	Polygon* pgons[100];
	// inizializing the array of pointers to zero
	for (int k = 0; k < 100; k++) {
		pgons[k] = 0;
	}

	int cnt = 0;

	while (true) {


		cout << endl;
		cout << "Select 1 to create a Rectangle" << endl;
		cout << "Select 2 to create a Rhombus" << endl;
		cout << "Select 3 to create a RightTriangle" << endl;
		cout << "Select 4 to draw the object you have created" << endl;
		cout << "Select 5 to exit" << endl;




		int selection = 0;
		scanf_s("%i", &selection);

		switch (selection) {

		case 1:

			cout << "Insert lenght " << endl;
			float l, w;
			scanf_s("%f", &l);
			cout << "Insert width" << endl;
			scanf_s("%f", &w);
			pgons[cnt] = new Rectangle(l,w);

			cnt++;
			break;

		case 2:

			cout << "Insert horizontal diagonal " << endl;
			float dH, dV;
			scanf_s("%f", &dH);
			cout << "Insert vertical diagonal" << endl;
			scanf_s("%f", &dV);
			pgons[cnt] = new Rhombus(dH, dV);

			cnt++;
			break;
		case 3:

			cout << "Insert base " << endl;
			float b, a;
			scanf_s("%f", &b);
			cout << "Insert altitude" << endl;
			scanf_s("%f", &a);
			pgons[cnt] = new RightTriangle(b, a);


			cnt++;
			break;

		case 4:
			cout << "insert the index of the polygon you want to draw (0 is the first)" << endl;
			int index;
			scanf_s("%i", &index);
			if (index < 0 || pgons[index] == NULL || index>100) {
				cout << "Not valid index" << endl;
				break;
			}
			pgons[index]->Draw();
			cout << "Area is " << pgons[index]->GetArea() << endl;
			cout << "Perimeter is " << pgons[index]->GetPerimeter() << endl;

			break;
		case 5:
			exit(0);
			break;

		default:
			cout << "Not valid selection" << endl;
			break;
		}

	}
	for (int k = 0; k < 100; k++) {
		delete pgons[k];
	}

	return 0;
}




