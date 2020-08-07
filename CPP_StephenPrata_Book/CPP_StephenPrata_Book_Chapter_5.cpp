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


/*
Chapter 5
Task 2

Redo Listing 5.4 using a type array object instead of a built - in array and type
long double instead of long long.Find the value of 100!
*/

/*
#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

const int AR_SIZE = 101;

int main()
{
	array <long double, AR_SIZE> factorial_array{};
		
	factorial_array[1] = factorial_array[0] = 1.0;

	for (int i = 2; i < AR_SIZE; i++)
	{
		factorial_array[i] = i * factorial_array[i - 1];
		cout << i << "!\t= " << factorial_array[i] << endl;
	}
	
	return 0;
}
*/