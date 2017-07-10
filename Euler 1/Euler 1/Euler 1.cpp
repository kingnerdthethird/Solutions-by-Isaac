//Project Euler Problem 1, completed by Isaac, to show Francine alternative methods
//The problem is: Find the sum of all multiples of 3 and 5 under 1000
//I will be using a simple for loop to brute force this. Don't over think it.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int sum = 0; //Declare and initialize the sum.

	for (int i = 1; i < 1000; i++) { //for loop using a basic structure. i grows until it equals 99.
		if (i % 3 == 0 || i % 5 == 0) { //checks to see if i is divisible by 3 or 5
			sum += i; //if i is divisible by 3 or 5, it is added to the sum
		} //end if
	}// end for

	cout << sum << endl; //prints out the sum

	system("PAUSE"); //added to pause program in the console
    return 0;
}

