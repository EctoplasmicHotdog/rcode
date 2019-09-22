#include <iostream> //Name of prewritten code <file> you want to use
//Good programmers reuse existing code
//#include names files/libraries of existing code you want to reuse
using namespace std; //Command to avoid typing std:: in front of cout and endl commands
int main () { //All programs start at 'main' - simple version of main, other possible
	cout << "Jason Reiterman - 9/20/19" << endl;
	int firstNum = 0, secondNum = 0; //Declare and initialize variables
	cout << "Enter first Number (example 69): " << endl; //Print prompt for first number
	cin >> firstNum; //stop and wait for user to enter first number
	cout << "Enter second Number (example 42): " <<endl; //Print prompt for second number
	cin >> secondNum; //stop and wait for user to enter second number
	if (firstNum < secondNum) {
		cout << "First number is less then second number" << endl; //Print to monitor message when first num less than second num
	}
	else {
		cout << "First number is greater than or equal to second number " << endl; //Print to monitor message when first num greater or equal to second num
	}
	system ("Pause"); //Command needed to see output on PC
	return 0; //End program
}