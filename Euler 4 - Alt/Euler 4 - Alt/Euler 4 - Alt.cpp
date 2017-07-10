//Alternative solution for the fourth problem of Project Euler
//Instead of vectors I use strings
//It is slower but it's a new way to do it, for funsies
#include "stdafx.h"
#include <iostream>
#include <sstream> //for converting ints to strings
#include <algorithm> //for reversing strings
using namespace std;

bool CheckPalindrome(int number); //function to check if a number is a palindrome

int main(){
	int number = 0; //create and initiate number

	for (int i = 100; i < 1000; i++) { //starts at 100 and goes to 999
		for (int j = 100; j < 1000; j++) { //starts at 100 and goes to 999
			if (CheckPalindrome(i * j) && (i * j) > number) { //checks to see if i * j is a palindrome and larger than the last result
				number = i * j; //sets number to i * j
				break; //ends this for loop
			} //end if
		} //end nested for
	} //end for

	cout << number << endl; //prints out number

	system("PAUSE"); //pauses the console
    return 0;
}

bool CheckPalindrome(int number) {
	string fwd_number; //string for number
	string rev_number; //string for reversed number

	ostringstream converter; //converter for int to string
	converter << number; //inputs number into the converter
	 
	fwd_number = converter.str(); //does some magic and makes the int into a string
	rev_number = converter.str(); //does some magic and makes the int into a string

	if (fwd_number == string(rev_number.rbegin(), rev_number.rend())) { //checks to see if the number is equal to it's reverse
		return true; //returns true
	} //end if

	else { //runs if the number is not a palindrome
		return false; //returns false
	} //end else
}