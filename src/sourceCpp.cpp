//============================================================================
// Name        : Test_Eclipse IDE c/c++ codes
// Author      : Valdecir Oliveira
// Version     :
// Copyright   : GPL3
// Description : Hello C/C++, Ansi-style
//			   : We gonna use thise base to call local libs class and functions
//============================================================================

#include <recursionUtils.h>
#include <iostream>
#include "myCallendar.h"

using namespace std;




int main() {

    double x = 3;
    int y = 3;
    int sum = 0;
    double fact = factorial(x);
    //int fib = fibonacci(y);
    fibonacciSomeOfnTerms(y,sum);

    printf("fibonacci soma of %d sequence  = %d \n",y, sum);
    printf("factorial of %.01f ! = %.01f \n",x, fact);
    printf("Product of %d and %d is: %d\n", x, y, multiply(x, y));
	cout << "IDE COMPILER WORKS" << endl; // prints IDE COMPILER WORKS
	myCallendar();

	return 0;
}
