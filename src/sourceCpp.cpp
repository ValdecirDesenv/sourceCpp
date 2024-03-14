//============================================================================
// Name        : Test_Eclipse IDE c/c++ codes
// Author      : Valdecir Oliveira
// Version     :
// Copyright   : GPL3
// Description : Hello C/C++, Ansi-style
//			   : We gonna use thise base to call local libs class and functions
//============================================================================

#include <iostream>
#include "myCallendar.h"
#include "multiplyR.h"

using namespace std;




int main() {

    int x = 5;
    int y = 4;
    printf("Product of %d and %d is: %d\n", x, y, multiply(x, y));
	cout << "IDE COMPILER WORKS" << endl; // prints IDE COMPILER WORKS
	myCallendar();
	return 0;
}
