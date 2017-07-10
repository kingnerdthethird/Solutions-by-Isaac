//This is problem 2 of Project Euler. 
//The problem is: find the sum of the even Fibonacci terms under 4 million
//This will once again be a simple while loop to brute force it.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int fib1 = 0; //create and initiate fib1
	int fib2 = 1; //create and initiate fib2
	int fib3 = 1; //create and initiate fib3
	int sum = 0; //create and initiate sum

	while(fib3 < 4000000) {  //runs until the term is greater than 4,000,000
		fib3 = fib3 + fib2; //sets fib3 to the sum of the previous value of fib3 and fib2
		fib2 = fib2 + fib1; //sets fib2 to the sum of the previous value of fib2 and fib1
		fib1 = fib2 - fib1; //sets fib1 to the new value of fib2 minus the previous value of fib1

		if (fib3 % 2 == 0) { //checks if fib3 is even
			sum += fib3; //if fib3 is even, it is added to the sum
		} //end if
	} //end while

	cout << sum << endl; //prints the sum of the terms to the console

	system("PAUSE"); //added to pause the program
    return 0;
}

