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