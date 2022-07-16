// Inorder to create a custom Exception, I created a seprate class " Custom_Exception" that is Enherited from " exception " class publicly and then overrided the " What() " function.
// Then created a single seprated class " Test " that calls the overrided function.
// in the main source I created an object of type " Test " inorder to call the Exception.
#include<iostream>
#include "Custom_Exception.h"
#include "Test.h"
using namespace std;

int main() {

	Test T1;

	try {
		T1.GoesWrong();
	}
	catch (Custom_Exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}