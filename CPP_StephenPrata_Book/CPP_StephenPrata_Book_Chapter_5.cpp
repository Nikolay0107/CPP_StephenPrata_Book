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

/*
Chapter 5
Task 3

Write a program that asks the user to type in numbers.
After each entry, the program should report the cumulative sum
of the entries to date.The program should terminate when the user enters 0.
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int value{}, result{};
	cout << "This program will summarized all of entered numbers." << endl;
	cout << "Enter '0' to stop execution." << endl << endl;

	do
	{
		cout  << "Please, enter the number: ";
		cin >> value;
		result += value;
		cout << endl << "Sum of all numbers is: " << result << endl << endl;

	} while (value!=0);

	cout << "Goodbye!" << endl << endl;

	return 0;
}
*/


/*
Chapter 5
Task 4

Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:

	interest = 0.10 × original balance

At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:

	interest = 0.05 × current balance

Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25,and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const float SIMPLE_INTEREST = 0.1f;
const float COMPOUND_INTEREST = 0.05f;
const float INITIAL_BALANCE = 100.0f;

int main()
{
	float daphne_balance = INITIAL_BALANCE;
	float cleo_balance = INITIAL_BALANCE;
	int count_years{};


	for (count_years = 1; cleo_balance <= daphne_balance; count_years++)
	{
		daphne_balance += INITIAL_BALANCE * SIMPLE_INTEREST;
	
		cleo_balance += cleo_balance * COMPOUND_INTEREST;
	
		cout << "Year " << count_years << "\t\tDaphne balance is: " << daphne_balance << "\t Cleo balance is: " << cleo_balance << endl;
	}
	int result_year = count_years - 1;

	cout << endl << endl << "After " << result_year << " years Cleo balance will be bigger than Daphne balance" << endl << endl << endl;
	
	return 0;
}
*/


/*
Chapter 5
Task 5

You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents and report the total sales for the year.
*/
/*
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int ALL_MONTH = 12;

int main()
{
	string months_of_the_year[ALL_MONTH] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	int* arr = new int[ALL_MONTH];

	for (int i = 0, j = 0; i < ALL_MONTH; i++, j++)
	{
		cout << "Please, enter the number of the books, which was sold in " << months_of_the_year[j] << ": ";
		int value{};
		cin >> arr[i];
	}

	int* sales_of_the_year = new int{};
	//*sales_of_the_year = 0;

	for (int i = 0; i < ALL_MONTH; i++)
	{
		*sales_of_the_year += arr[i];
	}

	cout << "We sold " << *sales_of_the_year << " books in this year!" << endl;

	delete[] arr;
	delete sales_of_the_year;
	
	return 0;
}
*/