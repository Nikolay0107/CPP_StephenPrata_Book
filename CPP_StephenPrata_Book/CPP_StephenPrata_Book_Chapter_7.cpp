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