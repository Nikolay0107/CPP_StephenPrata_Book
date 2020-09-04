/*
//Chapter review #2

	void igor(); // or void igor(void);

	float tofu(int); //or float tofu(int n)

	double mpg(double a, double b); 

	long summation(long arr[], int size);

	double doctor(const char *str);

	void ofcourse(boss struct_1);

	char *plot(map *pmap);


//Chapter review #3

	void set_arr(int arr[], int size, int value)
	{
		for (int i = 0; i < size; i++)
			arr[i] = value;
	}

//Chapter review #4

	void  set_arr_range(int *start, int *end, int value)
	{
		for (int * pointer = start; pointer != end; pointer++)
			pointer* = value;

	}

//Chapter review #5

	double arr_bigger(const double arr[], int size)
	{
		double is_bigger = arr[0];

		for (int i = 1; i < size; i++)
			if(arr[i] > is_bigger)
				 is_bigger = arr[i];
		
		return is_bigger;
	}

//Chapter review #8

	int replace(char* str, char c1, char c2)
	{
		int count{};
		while (*str)   // пока не достигнем 0 (конца строки)
		{
			if (*str == c1)  // проверяем разыменованный указатель на соответствие значения
			{
				*str = c2;
				count++;
			}

			str++; // увеличиваем на 1 указатель без разыменования
		}

		return count;

	}

	//Chapter review #11

	int judge( int (*pf) (const char*));

	//Chapter review #12

	struct applicant {
		char name[30];
		int credit_ratings[3];
	};

	void display(applicant ap) {

		cout << ap.name << endl;
		for (int i = 0; i < 3; i++)
			cout << ap.credit_ratings[i] << endl;
	}

	void show(const applicant* pa) {
		cout << pa->name << endl;
		for (int i = 0; i < 3; i++)
			cout << pa->credit_ratings[i] << endl;
	}



	//Chapter review #13

	void f1(applicant* а);
	const char* f2 (const applicant * a1, const applicant * а2);

	typedef void (*p_f1) (applicant*);

	p_f1 p1 = f1;

	typedef const char* (*p_f2) (const applicant*, const applicant*);

	p_f2 p2 = f2;

	p_f1 ap[5];
	p_f2(*pa)[10];
*/


/*
Chapter 7
Task 1

Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)

*/
/*
#include <iostream>
double harmonic_funk(double a, double b);

int main() {
	double first_value;
	double second_value;

	std::cout << "Please enter two numbers: " << std::endl;

	while (std::cin >> first_value >> second_value)
	{

		if (first_value == 0 || second_value == 0)
			break;
		std::cout << "The harmonic mean of values is " << harmonic_funk(first_value, second_value) << std::endl;
		std::cout << "Please enter two numbers: " << std::endl;
	}

	std::cout << "\nGoodbye!" << std::endl;
	return 0;
}


double harmonic_funk(double a, double b) {
	return 2.0 * a * b / (a + b);
}
*/


/*
Chapter 7
Task 2

Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display,and the average calculation with
three separate array-processing functions.
*/

/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const short ARR_SIZE = 10;


void fill_array( short arr[]);
void display_array( short arr[]);
float average( short arr[]);

int main() {

	short golf_scores[ARR_SIZE]{};

	fill_array(golf_scores);

	cout << "\nThe scores you entered is:" << endl << endl;
		
	display_array(golf_scores);
	cout << "\nThe average of the scores you entered is: " << average(golf_scores) << endl << endl;
	
	return 0;
}


void fill_array( short golf_scores[])
{
	for (int i = 0; i < ARR_SIZE; i++) {
		 short temp_value{};

		cout << "Enter score #" << (i + 1) << ":";
		cin >> temp_value;

		if (temp_value > 0)
			golf_scores[i] = temp_value;
		else if (temp_value < 0)
		{
			cout << "Error! You entered negative number. Program terminated!";
			break;
		}
		else
			break;
	}
}

void display_array( short golf_scores[]) {
	for (int i = 0; golf_scores[i] != 0; i++)
		cout << "Score #" << (i + 1) << ": " << golf_scores[i] << endl;
}

float average( short golf_scores[])
{
	float sum = 0.0f;
	 short count = 1;

	for (int i = 0; golf_scores[i] != 0; i++)
	{
		sum += golf_scores[i];
		count++;
	}
	return sum / count;
}
*/


/*
Chapter 7
Task 3

	Here is a structure declaration:

	struct box
	{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};

		a. Write a function that passes a box structure by value and that displays the
		value of each member.

		b. Write a function that passes the address of a box structure and that sets the
		volume member to the product of the other three dimensions.

		c. Write a simple program that uses these two functions.

*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct box
	{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};

box Create_box();
void Display_box_values(box b);
void Calculate_box_volume(box* b);

int main() {
	box new_box = Create_box();
	Display_box_values(new_box);
	
	return 0;
}

box Create_box()
{
	box new_box;

	cout << "Enter name of the manufacturer: ";
	cin >> new_box.maker;

	cout << "Enter box height: ";
	cin >> new_box.height;

	cout << "Enter box width: ";
	cin >> new_box.width;

	cout << "Enter box length: ";
	cin >> new_box.length;

	Calculate_box_volume(&new_box);

	return new_box;
}

void Calculate_box_volume(box* b)
{
	b->volume = b->height * b->width * b->length;
}

void Display_box_values(box b)
{
	cout << "\nManufacturer name: " << b.maker << std::endl;
	cout << "Height: " << b.height << std::endl;
	cout << "Width: " << b.width << std::endl;
	cout << "Length: " << b.length << std::endl;
	cout << "Volume: " << b.volume << std::endl;
}


*/


/*
Chapter 7
Task 4

	Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
	these variations you choose several numbers from one set and call them the field
	numbers. For example, you might select five numbers from the field of 1–47).You
	also pick a single number (called a mega number or a power ball, etc.) from a second range,
	such as 1–27.To win the grand prize, you have to guess all the picks correctly.
	The chance of winning is the product of the probability of picking all the
	field numbers times the probability of picking the mega number. For instance, the
	probability of winning the example described here is the product of the probability
	of picking 5 out of 47 correctly times the probability of picking 1 out of 27 correctly. 
	Modify Listing 7.4 to calculate the probability of winning this kind of lottery.
	*/

/*
#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned meganumber_range);


int main()
{
	using namespace std;
	double total, choices, meganumber_range;

	// Ввод общего количества номеров и количества номеров, которые нужно угадать

	cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";

	while ((cin >> total >> choices) && choices <= total)
	{

		cout << "Enter the total number of meganumber range:\n";
			
		cin >> meganumber_range;
		
		cout << " You have one chance in ";
		cout << probability(total, choices, meganumber_range);
		cout << " of winning . \n";
		cout << "Next two numbers (q to quit) : ";
		// вычисление и вывод шансов
		// Ввод следующих двух чисел(q для завершения)
	}

	cout << "bye\n";

	return 0;
}


// Следующая функция вычисляет вероятность правильного
// угадывания picks чисел из numbers возможных

long double probability(unsigned numbers, unsigned picks, unsigned meganumber_range)
{
	long double result = 1.0; // несколько локальных переменных
	long double n;
	unsigned р;
	unsigned m = meganumber_range;

	for (n = numbers, р = picks; р > 0; n--, р--)
		result = result * n / р;

	result *= m;

	return result;
}

*/


/*
Chapter 7
Task 5

Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!,and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.

*/

/*
#include <iostream>
using namespace std;

unsigned long long factorial_function( int number);

int main()
{
	int number;

	cout << "Enter the number: \n";

	while (cin >> number)
	{
		cin.get();
		while (number < 0)
		{
			cout << "\n\aInvalid input. Please enter a positive integer: ";
			cin >> number;
		}

		cout << endl << endl << "Result: "  << factorial_function(number) << endl << endl;
		cout << "Enter the number: \n";
	}

	return 0;
}

unsigned long long factorial_function(int number)
{
	if (number <= 1)
		return 1;
	else
		return number * (factorial_function(number - 1));
}

*/