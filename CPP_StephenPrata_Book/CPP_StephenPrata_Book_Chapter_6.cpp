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

/*
Chapter 6
Task 3

	Write a precursor to a menu-driven program.The program should display a menu
	offering four choices, each labeled with a letter. If the user responds with a letter
	other than one of the four valid choices, the program should prompt the user to
	enter a valid response until the user complies.Then the program should use a
	switch to select a simple action based on the user’s selection.A program run could
	look something like this:
		Please enter one of the following choices:
		c) carnivore p) pianist
		t) tree g) game
		f
		Please enter a c, p, t, or g: q
		Please enter a c, p, t, or g: t
		A maple is a tree.
*/

/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void showmenu();

int main()
{
	showmenu();
	
	char choice{};
	cin.get(choice).get();

	while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
	{
		system("CLS"); // clear console

		cout << "\aInvalid choice! Please, try again!\n\n";
		showmenu();
		cin.get(choice).get();
	}

	switch (choice)
	{
		case'c': cout << "\tHow dangerous is the carnivore diet?\n";
			break;
		case'p': cout << "\tThe Pianist is a 2002 war biographical drama film produced and directed by Roman Polanski.\n";
			break;
		case't': cout << "\tA maple is a tree.\n";
			break;
		case'g': cout << "\tA game is a structured form of play!\n";
			break;
	}

	return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices:" << endl << endl;
	cout << "\tc) carnivore\t\tp) pianist" << endl;
	cout << "\tt) tree\t\t\tg) game" << endl;
}
*/

/*
Chapter 6
Task 4

When you join the Benevolent Order of Programmers, you can be known at BOP meetings by your real name, your job title,
or your secret BOP name.Write a program that can list members by real name, by job title, by secret name, or by a member’s preference.
Base the program on the following structure:

	// Benevolent Order of Programmers name structure
	struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
	};

In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
	a. display by name b. display by title
	c. display by bopname d. display by preference
	q. quit

	Note that “display by preference” does not mean display the preference member; it
	means display the member corresponding to the preference number. For instance, if
	preference is 1, choice d would display the programmer’s job title.A sample run
	may look something like the following:

		Benevolent Order of Programmers Report
		a. display by name b. display by title
		c. display by bopname d. display by preference
		q. quit
		Enter your choice: a
		Wimp Macho
		Raki Rhodes
		Celia Laiter
		Hoppy Hipman
		Pat Hand
		Next choice: d
		Wimp Macho
		Junior Programmer
		MIPS
		Analyst Trainee
		LOOPY
		Next choice: q
		Bye!
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void showmenu();

const unsigned short STRING_SIZE = 64;
const unsigned short ARRAY_SIZE = 5;

// Benevolent Order of Programmers name structure
struct bop {
	char fullname[STRING_SIZE]; // real name
	char title[STRING_SIZE]; // job title
	char bopname[STRING_SIZE]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	bop members[ARRAY_SIZE]
	{
		{"Conrad Adams", "Telesales person", "Jecly", 1},
		{"Brian Walsh", "Ship builder", "Alaynca", 2},
		{"Quentin Baker", "Computer programmer", "Zenelleta", 0},
		{"David Horton", "Clergyman", "Yamiaim", 2},
		{"Marvin Evans", "Song writer", "Quthatl", 0}
	};
point:
	showmenu();
	char choice{};
	cin.get(choice).get();
		
	while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'q')
	{
		system("CLS"); // clear console

		cout << "\aInvalid choice! Please, try again!\n\n";
		showmenu();
		cin.get(choice).get();
	}

	while (choice != 'q')
	{
		cout << endl;
			switch (choice)
			{
			case'a':
				for (int i = 0; i < ARRAY_SIZE; i++)
				{
					cout <<"  " << members[i].fullname << endl;
				}
				break;
			case'b':
				for (int i = 0; i < ARRAY_SIZE; i++)
				{
					cout << "  " << members[i].title << endl;
				}
				break;
			case'c':
				for (int i = 0; i < ARRAY_SIZE; i++)
				{
					cout << "  " << members[i].bopname << endl;
				}
				break;
			case'd':

				for (int j = 0; j < ARRAY_SIZE; j++)
				{
					switch (members[j].preference)
					{
					case 0:
						cout << "  " << members[j].fullname << endl;
						break;
					case 1:
						cout << "  " << members[j].title << endl;
						break;
					case 2:
						cout << "  " << members[j].bopname << endl;
						break;
					}
				}
				break;
			}
		goto point;
	}
	cout << "\tBye!\n";

	return 0;
}

void showmenu()
{
	cout << "\n  Benevolent Order of Programmers Report" << endl;
	cout << "\ta. display by name \t\tb. display by title" << endl;
	cout << "\tc. display by bopname \t\td. display by preference" << endl;
	cout << "\tq. quit" << endl;
	cout << "\n  Your choice:";
}
*/


/*
Chapter 6
Task 5

	The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following income tax code:
		First 5,000 tvarps: 0% tax
		Next 10,000 tvarps: 10% tax
		Next 20,000 tvarps: 15% tax
		Tvarps after 35,000: 20% tax
	For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
	0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
	loop to solicit incomes and to report tax owed.The loop should terminate when
	the user enters a negative number or non-numeric input.
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void showmenu();
void showtax(double show_value);

const double tax_zero = 0;
const double tax_first = 0.1;
const double tax_second = 0.15;
const double tax_third = 0.2;

const double tvarps_zero = 5000;
const double tvarps_first = 10000;
const double tvarps_second = 20000;
const double tvarps_third = 35000;

int main()
{
	showmenu();
	double incomes{};
	double tax{};
	int count;

	while (cin >> incomes && incomes >= 0)
	{
		if (incomes >= 0 && incomes <= 5000)
		{
			if (incomes == 0)
			{
				cout << "\n\tYou are tax exempt!" << endl;
				cout << "\tYou have no income!" << endl;

			}
			else if (incomes < tvarps_zero)
			{
				cout << "\n\tYou are tax exempt!" << endl;
				cout << "\tYour income <" << incomes << "> is smaller than " << tvarps_zero << endl;;
			}
			else if (incomes == tvarps_zero)
			{
				cout << "\n\tYou are tax exempt!" << endl;
				cout << "\tYour income is equal to " << tvarps_zero << endl;;
			}
		}

		if (incomes >5000 && incomes <= 15000)
		{
			tax = tvarps_zero * tax_zero + (incomes - tvarps_zero ) * tax_first;

			showtax(tax);
		}

		if (incomes > 15000 && incomes <=35000)
		{
			tax = tvarps_zero * tax_zero + tvarps_first * tax_first + (incomes - tvarps_zero - tvarps_first) * tax_second;
				
			showtax(tax);
		}

		if (incomes > 35000)
		{
			tax = tvarps_zero * tax_zero + tvarps_first * tax_first + tvarps_second * tax_second + (incomes - tvarps_zero - tvarps_first - tvarps_second) * tax_third;

			showtax(tax);
		}
		cout << "\n  Please, enter your incomes:";
	}

	return 0;
}

void showmenu()
{
	cout << "\n  The Kingdom of Neutronia has the following income tax code:" << endl << endl;
	cout << "\t First 5,000 tvarps: 0% tax" << endl;
	cout << "\t Next 10,000 tvarps: 10% tax" << endl;
	cout << "\t Next 20,000 tvarps: 15% tax" << endl;
	cout << "\t Tvarps after 35,000: 20% tax" << endl;
	cout << "\n  Please, enter your incomes:";
}

void showtax(double show_value)
{
	cout << endl << "\t You need to pay " << show_value <<"!" << endl;
}
*/

/*
Chapter 6
Task 6

	Put together a program that keeps track of monetary contributions to the Society
	for the Preservation of Rightful Influence. It should ask the user to enter the 
	number of contributors and then solicit the user to enter the name and contribution of
	each contributor.The information should be stored in a dynamically allocated array
	of structures. Each structure should have two members:a character array (or else a
	string object) to store the name and a double member to hold the amount of the
	contribution.After reading all the data, the program should display the names and
	amounts donated for all donors who contributed $10,000 or more.This list should
	be headed by the label Grand Patrons.After that, the program should list the
	remaining donors.That list should be headed Patrons. If there are no donors in one
	of the categories, the program should print the word “none.”Aside from displaying
	two categories, the program need do no sorting.

*/
/*
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct  contributors
{
	string name;
	double contribution;
};

const double GRAND_PATRONS_BASELINE = 10000;

int main()
{
	cout << "Please, enter the number of contributors: ";
	
		int number_of_contributors{};

		cin >> number_of_contributors;

		contributors* contributors_arr = new contributors[number_of_contributors];

		for (int i = 0; i < number_of_contributors; i++)
		{
			cin.get(); // clear the symbol of new line
			cout << "\nEnter the name of the contributor #" << (i+1) << ": ";
			getline(cin, contributors_arr[i].name);

			cout << "Enter the " << contributors_arr[i].name << "'s contribution: ";
			cin >> contributors_arr[i].contribution;
		}

		cout << "\n\n\tGrand Patrons: ";

		// Grand patrons
		bool is_grand_patrons = false;
		
		for (int i = 0; i < number_of_contributors; i++)
		{
			if (contributors_arr[i].contribution >= GRAND_PATRONS_BASELINE)
			{
				cout << endl << "\t\t\t" << contributors_arr[i].name;
				is_grand_patrons = true;
			}
		}

		if (!is_grand_patrons)
		{
			cout << "\tNone" << endl << endl;
		}

		// Simple patrons
		bool is_simple_patrons = false;

		cout << "\n\n\tPatrons: ";
		for (int i = 0; i < number_of_contributors; i++)
		{
			if (contributors_arr[i].contribution < GRAND_PATRONS_BASELINE && contributors_arr[i].contribution >0)
			{
				cout << endl << "\t\t\t" << contributors_arr[i].name;
				is_simple_patrons = true;
			}
		}

		if (!is_simple_patrons)
		{
			cout << "\tNone" << endl << endl;
		}

		cout << endl << endl;
		delete[] contributors_arr;

	return 0;
}
*/

/*
Chapter 6
Task 7
	Write a program that reads input a word at a time until a lone q is entered.The
	program should then report the number of words that began with vowels, the number that began with consonants,and the number that fit neither of those categories.
	One approach is to use isalpha() to discriminate between words beginning with
	letters and those that don’t and then use an if or switch statement to further identify those passing the isalpha() test that begin with vowels.A sample run might
	look like this:
						Enter words (q to quit):
						The 12 awesome oxen ambled
						quietly across 15 meters of lawn. q
						5 words beginning with vowels
						4 words beginning with consonants
						2 others
*/

/*

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool is_vovel(char symbol);

int main()
{
	char ch[20]={};
	int vowel{};
	int consonant{};
	int other{};

	cout << "Please, enter your sentence (or symbol q to quit): ";

	cin >> ch;

	while (ch[1] != '\0' || ch[0] != 'q')
	{
		if (is_vovel(ch[0]))
			vowel++;
		else if (isalpha(ch[0]))
			consonant++;
		else
			other++;
		cin >> ch;
	}

	cout << endl << "Vovels: " << vowel
		<< endl << "Consonants: "<< consonant << endl
		<< "Other: " << other << endl;

	return 0;
}

bool is_vovel(char symbol)
{
	return symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u'
		|| symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U';
}

*/


/*
Chapter 6
Task 8
	Write a program that opens a text file, reads it character-by-character to the end of
	the file,and reports the number of characters in the file.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // поддержка exit ()



using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

const int SIZE = 60;


int main()
{
	ifstream inFile;
	inFile.open("text.txt");

	if (!inFile.is_open())
	{
		cout << " Could not open the file " << endl;
		cout << " Program terminating. \n";
		exit(EXIT_FAILURE); // same as return 1;
	}

	unsigned int count{};
	inFile.get();

	while (!inFile.eof())
	{
		inFile.get();
		count++;
	}

	inFile.close();

	cout << "The file contains " << count << " characters\n";

	cin.get();
	return 0;
}
