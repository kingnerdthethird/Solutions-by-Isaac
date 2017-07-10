//Solution for Project Euler Problem 4
//Problem is: Find the largest palindrome made from the product of two 3 - digit numbers.
//I will use a nested for loop to do this, and a vector, for digits.
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

bool CheckPalindrome(int number); //Function to check if a number is a palindrome

int main(){
	int number = 0; //Create and initiate number

	for (int i = 999; i > 100; i--) { //for loop starting at 999 and going down
		for (int j = 999; j > 100; j--) { //nested for loop starting at 999 and going down
			if (CheckPalindrome(i * j) && (i * j) > number) { //checks if the number is a palindrom and larger than the previous result
				number = i * j; //sets the number to i * j
				break; //ends the nested for loop
			} //end if
		} //end nested for
	} //end for

	cout << number << endl; //prints the number

	system("PAUSE"); //added to pause the program
    return 0;
}

bool CheckPalindrome(int number) {
	vector<int> forwards; //vector of digits

	while (number > 0) { //runs until the number is zero
		forwards.push_back(number % 10); //adds the last digit to the end of the vector
		number /= 10; //divides the number by ten
	} //end while

	for (int i = 0; i < forwards.size() / 2; i++) { //runs through the number vector thing
		if (forwards[i] != forwards[forwards.size() - (i + 1)]) { //checks if the digits don't match
			return false; //says NEIN if the digits don't match
		} //end if
	} //end for

	return true; //says it is a palindrome
}