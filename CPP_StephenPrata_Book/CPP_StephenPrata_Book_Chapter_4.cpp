/*
Chapter 4
Task 1

 Write a C++ program that requests and displays information as shown in the following example of output:
	What is your first name? Betty Sue
	What is your last name? Yewe
	What letter grade do you deserve? B
	What is your age? 22
	Name: Yewe, Betty Sue
	Grade: C
	Age: 22
Note that the program should be able to accept first names that comprise more
than one word.Also note that the program adjusts the grade downward—that is, up
one letter.Assume that the user requests an A,a B, or a C so that you don’t have to
worry about the gap between a D and an F.
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "What is your first name ? ";
	string first_name{};
	getline(cin, first_name);
		
	cout << endl << "What is your last name ? ";
	string last_name{};
	getline(cin, last_name);
		
	cout << endl<< "What letter grade do you deserve ? ";
	char grade{};
	cin >> grade;
	
	grade += 1;
				
	cout << endl << "What is your age ? ";
	int age{};
	cin >> age;

	cout << endl << "Result:" << endl;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}
*/



/*
Chapter 4
Task 2

Rewrite Listing 4.4, using the C++ string class instead of char arrays.

Listing 4.4 instr2.cpp
// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin.getline(name, ArSize); // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string name{};
	string dessert{};

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	
	return 0;
}
*/

/*
Chapter 4
Task 3

Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name.Use char arraysand
functions from the cstring header file.A sample run could look like this:
	Enter your first name : Flip
	Enter your last name : Fleming
	Here’s the information in a single string : Fleming, Flip
*/
/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int ARR_SIZE = 15;


	cout << endl << "Enter your first name ? ";
	char first_name[ARR_SIZE];
	cin.getline(first_name, ARR_SIZE);

	cout << endl << "Enter your last name ? ";
	char last_name[ARR_SIZE];
	cin.getline(last_name, ARR_SIZE);

	char single_string[40];

	strcpy_s(single_string, last_name);
	strcat_s(single_string, ", ");
	strcat_s(single_string, first_name);

	cout << endl << "Here's the information in à single string: " << single_string << endl;

	return 0;
}
*/