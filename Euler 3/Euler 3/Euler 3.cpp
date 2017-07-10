//Solution for Project Euler Problem 3
//The problem is: What is the largest prime factor of the number 600851475143
//This will use a simple solution of PRIME FACTORIZATION
//The cool part is you don't need to check if the factor is prime
//Because if it is not, you have already divided by its factors
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	__int64 number = 600851475143; //The number to eviscerate through PRIME FACTORIZATION
	__int64 factor = 2; //The factor

	while (factor * factor <= number) { //I forget exactly why this is the condition
		if (number % factor == 0) { //Checks if factor is really a factor if the moniker is a lie
			number /= factor; //divides number by factor
		} //end if
		else { //If factor is a liar
			factor++; //Factor grows!
		} //end else
	} //end while

	cout << number << endl; //prints the resulting number, a.k.a. the right answer

	system("PAUSE"); //added to pasue the program
    return 0;
}