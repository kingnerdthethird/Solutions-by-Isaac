//Solution for problem 5 of Project Euler
//I use an array of the numbers to see if a number is divisible by all of them
//As you will notice, the array does not include all numbers because some are multiples of others.
#include "stdafx.h"
#include <iostream>
using namespace std;

bool IsDivisibleByNumbers(int number); //function to see if the number is divisible by all others

int main(){
	bool found = false; //bool thing to say if number is found or not
	int number = 20; //number to be checked
	
	while (!found) { //transliterated to "while not found"
		number += 20; //iterates number by 20, since number must be divisible by 20
		//if you wanna see of this affects the run time, change it to number++ and compare the times
		found = IsDivisibleByNumbers(number); //sets found to if the number works. true if it does
	} //end while
	cout << number << endl; //print the number
	system("PAUSE"); //pauses the program
    return 0;
}

bool IsDivisibleByNumbers(int number) {
	int checks[] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, }; //please see the following explanation
	//20 covers 20, 10, 5, 4, 2, and 1; remaining: 19, 18, 17, 16, 15, 14, 13, 12, 11, 9, 8, 7, 6, 3
	//19 covers 19 since it is prime; remaining: 18, 17, 16, 15, 14, 13, 12, 11, 9, 8, 7, 6, 3
	//18 covers 18, 9, 6, and 3; remaining: 17, 16, 15, 14, 13, 12, 11, 8, 7
	//17 covers 17 since it is prime; remaining: 16, 15, 14, 13, 12, 11, 8, 7
	//16 covers 16, and 8; remaining: 15, 14, 13, 12, 11, 7
	//15 covers 15; remaining: 14, 13, 12, 11, 7
	//14 covers 14, and 7; remaining: 13, 12, 11
	//13 covers 13 since it is prime; remaining: 12, 11
	//12 covers 12; remaining: 11
	//11 covers 11 since it is prime; remaining: none

	for (int i = 0; i < 10; i++) { //for loop to go through the array
		if (number % checks[i] != 0) { //checks if the number is NOT divisible by the number in the array
			return false; //returns false
		} //end if
	} //end for

	return true; //returns true
}