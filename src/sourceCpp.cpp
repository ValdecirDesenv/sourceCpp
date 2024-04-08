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
#include "MergeAlternately.h"
#include "TwoSumCh01.h"
using namespace std;




int main() {

//    double x = 3;
//    int y = 3;
//    int sum = 0;
//    double fact = factorial(x);
//    //int fib = fibonacci(y);
//    fibonacciSomeOfnTerms(y,sum);
//
//    printf("fibonacci soma of %d sequence  = %d \n",y, sum);
//    printf("factorial of %.01f ! = %.01f \n",x, fact);
//    printf("Product of %d and %d is: %d\n", x, y, multiply(x, y));
//	cout << "IDE COMPILER WORKS" << endl; // prints IDE COMPILER WORKS
//	myCallendar();

// ---------------------------------------------------
    MergeAlternately merger;
    std::string str1 = "abcdef";
    std::string str2 = "12";
    merger.merge(str1, str2);

// ---------------------------------------------------
    std::vector<int> nums{15,7,11,2};
    std::vector<int> index;
    TwoSumCh01 twoSumCh;
    index = twoSumCh.twoSum(nums,9);
    cout<<"[ "<< index[0]<<" , " << index[1]<<" ]";



	return 0;
}
