#include <iostream>
#include "InscribedSquare.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

int main() {


	InscribedSquare obj(10,37);


	if (obj.isInscribed()) {
		cout << "The figure is inscribed!" << endl;
		cout << obj.GetRadius();
	}
	else {
		cout << "The circle with this radius won't fit in the square.";
	}






	return 0;
}
