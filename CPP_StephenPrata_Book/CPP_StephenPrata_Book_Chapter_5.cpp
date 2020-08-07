/*
Chapter 5
Task 1

Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers.At this point,assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.
*/

/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter the first value: ";

	int first_value{};
	cin >> first_value;

	cout << endl << "Enter the second value: ";
	int last_value{};
	cin >> last_value;
	
	int result = 0;
	for (int i = first_value; i <= last_value; i++)
		result += i;

	cout << endl << result << endl;

	return 0;
}
*/