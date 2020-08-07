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

/*
Chapter 4
Task 4

Write a program that asks the user to enter his or her first name and then last
name,and that then constructs, stores,and displays a third string consisting of the
user’s last name followed by a comma,a space,and first name. Use string objects
and methods from the string header file.A sample run could look like this:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here’s the information in a single string: Fleming, Flip
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
	cout << endl << "Enter your first name: ";
	string first_name{};
	getline(cin, first_name);

	cout << endl << "Enter your last name: ";
	string last_name{};
	getline(cin, last_name);

	string single_string = last_name + ", " + first_name;

	cout << endl << "Here's the information in à single string: " << single_string << endl;

	return 0;
}
*/

/*
Chapter 4
Task 5

The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional part)
of the candy bar,and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that declares such a structure
and creates a CandyBar variable called snack, initializing its members to "Mocha
Munch", 2.3,and 350, respectively.The initialization should be part of the declaration
for snack. Finally, the program should display the contents of the snack variable.
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar snack = { "Mocha Munch", 2.3f, 350 };

	cout << snack.name << "'s weight is " << snack.weight << " kg!" << endl <<
	snack.name << " contains " << snack.calories << " calories!" << endl;

	return 0;
}
*/

/*
Chapter 4
Task 6

	The CandyBar structure contains three members,as described in Programming
	Exercise 5.Write a program that creates an array of three CandyBar structures,
	initializes them to values of your choice,and then displays the contents of each structure.

*/
/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar candyRoshen[3]
	{
		{"Snickers", 101.5f, 1000},
		{"Mars", 60.8f, 600},
		{"Bounty", 55.0f, 700}
	};

	cout << "Candy " << candyRoshen[0].name << " has a weight of " << candyRoshen[0].weight <<
		" grams and contains " << candyRoshen[0].calories << " calories!" << endl;

	cout << "Candy " << candyRoshen[1].name << " has a weight of " << candyRoshen[1].weight <<
		" grams and contains " << candyRoshen[1].calories << " calories!" << endl;

	cout << "Candy " << candyRoshen[2].name << " has a weight of " << candyRoshen[2].weight <<
		" grams and contains " << candyRoshen[2].calories << " calories!" << endl;

	return 0;
}
*/

/*
Chapter 4
Task 7

William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:

	- The name of the pizza company, which can consist of more than one word
	- The diameter of the pizza
	- The weight of the pizza

Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information,and then the program should display that information.
Use cin (or its methods) and cout.
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Pizza_info
{
	string pizza_company_name;
	int pizza_diameter;
	float pizza_weight;
};

int main()
{
	Pizza_info userPizza;

	cout << "Enter the pizza company name: ";
	getline(cin, userPizza.pizza_company_name );

	cout << endl << "Enter the pizza diameter: ";
	cin >> userPizza.pizza_diameter;

	cout << endl << "Enter the pizza weight: ";
	cin >> userPizza.pizza_weight;

	cout << endl << endl << "DATA:" << endl;
	cout << "User's pizza company name: " << userPizza.pizza_company_name<< endl;
	cout << "User's pizza diameter: "<< userPizza.pizza_diameter << " centimeters"<< endl;
	cout << "User's pizza weight: " << userPizza.pizza_weight <<" grams" << endl;

	return 0;
};
*/

/*
Chapter 4
Task 8

	Do Programming Exercise 7 but use new to allocate a structure instead of declaring
	a structure variable.Also have the program request the pizza diameter before it
	requests the pizza company name.
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Pizza_info
{
	string pizza_company_name;
	int pizza_diameter;
	float pizza_weight;
};

int main()
{
	Pizza_info *pointer_pizza_info = new Pizza_info;

	cout << "Enter the pizza company name: ";
	getline(cin, pointer_pizza_info->pizza_company_name);

	cout << endl << "Enter the pizza diameter: ";
	cin >> pointer_pizza_info->pizza_diameter;

	cout << endl << "Enter the pizza weight: ";
	cin >> pointer_pizza_info->pizza_weight;

	cout << endl << endl << "DATA:" << endl;
	cout << "User's pizza company name: " << (*pointer_pizza_info).pizza_company_name << endl;  // first way
	cout << "User's pizza diameter: " << pointer_pizza_info->pizza_diameter << " centimeters" << endl; // second way
	cout << "User's pizza weight: " << pointer_pizza_info->pizza_weight << " grams" << endl;

	delete pointer_pizza_info;
	return 0;
};
*/


/*
Chapter 4
Task 9

	Do Programming Exercise 6, but instead of declaring an array of three CandyBar
	structures, use new to allocate the array dynamically
*/

/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar *candyRoshen = new CandyBar [3]
	{
		{"Snickers", 101.5f, 1000},
		{"Mars", 60.8f, 600},
		{"Bounty", 55.0f, 700}
	};

	cout << "Candy " << candyRoshen[0].name << " has a weight of " << candyRoshen[0].weight <<
		" grams and contains " << candyRoshen[0].calories << " calories!" << endl;

	cout << "Candy " << candyRoshen[1].name << " has a weight of " << candyRoshen[1].weight <<
		" grams and contains " << candyRoshen[1].calories << " calories!" << endl;

	cout << "Candy " << candyRoshen[2].name << " has a weight of " << candyRoshen[2].weight <<
		" grams and contains " << candyRoshen[2].calories << " calories!" << endl;

	delete[] candyRoshen;
	return 0;
}
*/

/*
Chapter 4
Task 10

	Write a program that requests the user to enter three times for the 40-yd dash (or
	40-meter, if you prefer) and then displays the times and the average. Use an array
	object to hold the data. (Use a built-in array if array is not available.)
*/

/*
#include <iostream>
#include <string>
#include <array>

using std::array;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int ARR_SIZE = 3;
	array<float, ARR_SIZE> results_array{};

	cout << "Enter the first result: ";
	cin >> results_array[0];
	
	cout << "Enter the second result: ";
	cin >> results_array[1];

	cout << "Enter the third result: ";
	cin >> results_array[2];

	float result_average = (results_array[0] + results_array[1] + results_array[2]) / ARR_SIZE;
	cout << endl << "The average of the result is: " << result_average;
	cout << endl << endl;

	return 0;
}
*/


/*

#include <iostream>



int main()
{
	const int ArSize = 16;

	long long factorials[ArSize];

	factorials[1] = factorials[0] = 1LL;

	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];




	for (int i =0; i < ArSize; i++)
		std:: cout << i << "! =" << factorials[i] << std:: endl;

	return 0;


};
*/