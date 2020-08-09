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


/*
Chapter 5
Task 6

Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.

*/

/*
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int ALL_MONTH = 12;
const int ALL_YEARS = 3;

int main()
{
	string months_of_the_year[ALL_MONTH] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	
	int** arr = new int* [ALL_YEARS];
	int* yearlySales = new int[ALL_YEARS];
	int* total_sales = new int{};
	
	//	dynamic array initialization

	for (int year = 0; year < ALL_YEARS; year++)
	{
		arr[year] = new int[ALL_MONTH];
	}

	for (int year = 0; year < ALL_YEARS; year++)
	{
		yearlySales[year] = 0;

		for (int month = 0; month < ALL_MONTH; month++)
		{
			cout << "Please, enter the number of the books, which were sold in " << months_of_the_year[month] << " in the year " << year+1<< ": ";
			cin >> arr[year][month];
			yearlySales[year] += arr[year][month];
		}
		cout << "In the year <" << year + 1 << "> were sold " << yearlySales[year] << " books!" << endl;
		*total_sales += yearlySales[year];
	}

	cout << "It were sold " << *total_sales << " books in total!" << endl;

	///////////////////// Memory clear

	for (int i = 0; i < ALL_YEARS; i++)
	{
		delete [] arr[i];
	}
	delete[]yearlySales;
	delete[]arr;
	delete total_sales;
	return 0 ;
}
*/


/*
Chapter 5
Task 7

Design a structure called car that holds the following information about an automobile: its make,as a string in a character
array or in a string object,and the year it was built,as an integer.Write a program that asks the user how many cars to catalog.
The program should then use new to create a dynamic array of that many car structures. Next, it should prompt the user to input
the make (which might consist of more than one word) and year information for each structure. Note that this
requires some care because it alternates reading strings with numeric data (see Chapter 4). Finally, it should display the contents
of each structure.A sample run should look something like the following:
	
	How many cars do you wish to catalog? 2
	Car #1:
	Please enter the make: Hudson Hornet
	Please enter the year made: 1952
	Car #2:
	Please enter the make: Kaiser
	Please enter the year made: 1951
	Here is your collection:
	1952 Hudson Hornet
	1951 Kaiser
*/
/*
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct car_str
{
	string car_make;
	int car_build_year;
};

int main()
{
	cout << "How many cars do you wish to catalog? ";
		unsigned int cars_in_catalog{};
		cin >> cars_in_catalog;

		car_str* car_arr = new car_str[cars_in_catalog];

		for (int i = 0; i < cars_in_catalog; i++)
		{
			cin.get(); // clear the symbol of new line
			
			cout << "Car #" << (i + 1) << ": " << endl;
			cout << "\tPlease enter the make: ";
			getline(cin, car_arr[i].car_make);

			cout <<endl << "\tPlease enter the year made: ";
			cin >> car_arr[i].car_build_year;
		}

		cout << "\nHere is your collection:" << endl;
		
		for (int i = 0; i < cars_in_catalog; i++)
		{
			cout << "\t"<< car_arr[i].car_make << "\t" << car_arr[i].car_build_year << endl;
		}
			
		delete[] car_arr;

	return 0;
}
*/

/*
Chapter 5
Task 8

Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
	anteater birthday category dumpster
	envy finagle geometry done for sure
	You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.
*/

/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int STRING_LENGTH = 30;

int main()
{
	cout << "Enter words (to stop, enter the word 'done'):" << endl;

	char inputWord[STRING_LENGTH];
	cin >> inputWord;

	unsigned short counter{};

	while (strcmp(inputWord, "done"))
	{
		counter++;
		cin >> inputWord;
	}

	cout << "You entered a total of " << counter << " words." << endl;

	return 0;
}
*/


/*
Chapter 5
Task 9

Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.

*/
/*
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Enter words (to stop, enter the word 'done'):" << endl;

	string inputWord{};
	cin >> inputWord;

	unsigned short counter{};

	while (inputWord!= "done")
	{
		counter++;
		cin >> inputWord;
	}
	cout << "You entered a total of " << counter << " words." << endl;

	return 0;
}
*/



/*
Chapter 5
Task 10

Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row,and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
	Enter number of rows: 5
	....*
	...**
	..***
	.****
	*****

*/