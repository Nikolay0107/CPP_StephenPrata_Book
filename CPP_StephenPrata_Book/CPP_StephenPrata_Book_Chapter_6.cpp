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

	showmenu();

	return 0;
}

void showmenu()
{
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "\ta. display by name \t\tb. display by title" << endl;
	cout << "\tc. display by bopname \t\td. display by preference" << endl;
	cout << "\tq. quit" << endl;
}

