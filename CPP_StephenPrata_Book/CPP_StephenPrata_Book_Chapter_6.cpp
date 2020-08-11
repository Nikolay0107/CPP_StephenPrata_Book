/*
Chapter 6
Task 1

Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase,and vice
versa. (Don’t forget the cctype family.)

*/

/*
#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Please, enter the character ('@' to terminate):";
	char ch{};

	cin.get(ch);

	while (ch != '@')
	{

		if(!isdigit(ch))
		if ( isupper(ch)? ch = tolower(ch): ch = toupper(ch))
		cout << ch;
		
		cin.get(ch);
	}

	cout << "\nExecution stopped!" << endl;

	return 0;
}
*/

/*
Chapter 6
Task 2

	Write a program that reads up to 10 donation values into an array of double. (Or, if
	you prefer, use an array template object.) The program should terminate input on
	non - numeric input.It should report the average of the numbers and also report
	how many numbers in the array are larger than the average.
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int ARR_SIZE = 10;

int main()
{
	double donations_arr[ARR_SIZE]{};
	double sum{};
	int count{};

	cout << "Please, enter up to 10 donations:\n\n";

	for (count = 0 ; count < ARR_SIZE; count++)
	{
		cout << "\tEnter donation #" << (count + 1) << " :";
		
		if (!(cin >> donations_arr[count]))
		{
			cout << "\a\n\tInput terminated!\n" << endl;
			break;
		}
		else sum += donations_arr[count];
	}

	if (sum > 0)
	{
		double average = sum / count;
		int bigger_than_average{};
		
		for (count = 0; count < ARR_SIZE; count++)
		{
			if (donations_arr[count] > average)
				bigger_than_average++;
		}

		cout << "\n\tAverage is: " << average << endl<< endl;
				
		if (bigger_than_average == 0)
		{
			cout << "\tThere is NO donations bigger than the average donation\n" << endl;
		}
		else if (bigger_than_average == 1)
		{
			cout << "\tThere is " << bigger_than_average<< " donation bigger than the average donation\n" << endl;
		}
		else
		{
			cout << "\tThere are " << bigger_than_average << " donations bigger than the average donation\n" << endl;
		}
	}
	else cout << "\tNo valid data found!" << endl<< endl;

	return 0;
}
*/

