/*
Chapter 3
Task 1

    Write a short program that asks for your height in integer inches and then converts
    your height to feet and inches. Have the program use the underscore character to
    indicate where to type the response.Also use a const symbolic constant to represent the conversion factor.
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	const int FOOT_TO_INCHES_RATIO = 12;

	int height_in_inches{};
	int height_in_foot{};
	int inches_remainder{};

	cout << "Please, enter your height in inches: __\b\b";
	cin >> height_in_inches;
	
	height_in_foot = height_in_inches / FOOT_TO_INCHES_RATIO;
	inches_remainder = height_in_inches % FOOT_TO_INCHES_RATIO;

	cout << "\aYour height is " << height_in_foot << " foot and " << inches_remainder << " inches!\n";

	return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 3
Task 2

	Write a short program that asks for your height in feetand inchesand your weight
	in pounds. (Use three variables to store the information.) Have the program report
	your body mass index(BMI).To calculate the BMI, first convert your height in feet
	and inches to your height in inches(1 foot = 12 inches).Then convert your height
	in inches to your height in meters by multiplying by 0.0254.Then convert your
	weight in pounds into your mass in kilograms by dividing by 2.2.Finally, compute
	your BMI by dividing your mass in kilograms by the square of your height in
	meters.Use symbolic constants to represent the various conversion factors.
*/

/*

#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "ru");
	const int FEET_TO_INCHES_RATIO = 12;
	const float INCHES_TO_METER_RATIO = 0.0254f ;
	const float POUND_TO_KILOGRAM_RATIO = 2.2f;

	float body_mass_index{};
	int height_in_feet{};
	float height_in_inches{};
	int weight_in_pounds{};
	int weight_in_kilograms{};
	float height_in_meter{};

	cout << "Please, enter your height in foot and inches as well as your mass:\n";
	cout << "Foot (ôóòû): _\b";
	cin >> height_in_feet;
	cout << "\nInches (äþéìû): ____\b\b\b\b";
	cin >> height_in_inches;
	cout << "\nMass (in pound, â ôóíòàõ): ___\b\b\b";
	cin >> weight_in_pounds;
	
	height_in_inches += height_in_feet * FEET_TO_INCHES_RATIO;
	height_in_meter = height_in_inches * INCHES_TO_METER_RATIO;
	weight_in_kilograms = weight_in_pounds / POUND_TO_KILOGRAM_RATIO;
	body_mass_index = weight_in_kilograms / pow(height_in_meter, 2);

	cout << "\aYour BMI is: " << body_mass_index << endl;

	return 0;
}
*/

/*
Chapter 3
Task 3

Write a program that asks the user to enter a latitude in degrees, minutes,and seconds and
that then displays the latitude in decimal format.There are 60 seconds of arc to a minute
and 60 minutes of arc to a degree; represent these values with symbolic constants.
You should use a separate variable for each input value.A sample run should look like this:
	
	Enter a latitude in degrees, minutes, and seconds:
	First, enter the degrees: 37
	Next, enter the minutes of arc: 51
	Finally, enter the seconds of arc: 19
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int SECONDS_IN_MINUTE = 60;
	const int MINUTES_IN_DEGREE = 60;


	cout << "Enter a latitude in degrees, minutes, and seconds!" << endl << endl;
	cout << "First, enter the degrees: ";

	float degrees{};
	cin >> degrees;

	cout << "\nNext, enter the minutes of arc: ";

	float minutes_of_arc{};
	cin >> minutes_of_arc;

	cout << "\nFinally, enter the seconds of arc: ";

	float seconds_of_arc{};
	cin >> seconds_of_arc;
	
	float result{};
	result = ((seconds_of_arc/SECONDS_IN_MINUTE) + minutes_of_arc) / MINUTES_IN_DEGREE + degrees;
	
	cout <<"\n" << degrees << " degrees, " << minutes_of_arc << " minutes, " << seconds_of_arc << " seconds = " << result << " degrees." << endl << endl;

	return 0;
}
*/


/*
Chapter 3
Task 4

	Write a program that asks the user to enter the number of seconds as an integer
	value (use type long, or, if available, long long) and that then displays the equivalent time in days,
	hours, minutes,and seconds. Use symbolic constants to represent
	the number of hours in the day, the number of minutes in an hour,and the number
	of seconds in a minute.The output should look like this:

		Enter the number of seconds: 31600000
		31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int SECONDS_IN_MINUTE = 60;
	const int MINUTES_IN_HOUR = 60;
	const int HOURS_IN_DAY = 24;
		
	cout << "Enter the number of seconds: ";
	
	long long number_of_seconds;
	cin >> number_of_seconds;

	long long days{};
	int hours{};
	int minutes{};
	int seconds{};

	days = number_of_seconds / (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	hours = number_of_seconds % (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE) / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	minutes = number_of_seconds % (MINUTES_IN_HOUR * SECONDS_IN_MINUTE) / SECONDS_IN_MINUTE;
	seconds = number_of_seconds % SECONDS_IN_MINUTE;

	cout << number_of_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

	return 0;
}
*/

/*
Chapter 3
Task 5

	Write a program that requests the user to enter the current world population and
	the current population of the U.S. (or of some other nation of your choice). Store
	the information in variables of type long long. Have the program display the percent that the U.S.
	(or other nation’s) population is of the world’s population.The output should look something like this:
	
		Enter the world's population: 6898758899
		Enter the population of the US: 310783781
		The population of the US is 4.50492% of the world population.
		You can use the Internet to get more recent figures
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter the world's population: ";
	unsigned long long world_population{};
	cin >> world_population;

	cout << "\nEnter the population of your country: ";
	unsigned long long country_population{};
	cin >> country_population;

	float percent_of_population{};
	percent_of_population = (static_cast<float>(country_population)/world_population) * 100.0f;
	cout << "The population of your country is " << percent_of_population << "% of the world population." << endl;
	
	return 0;
}
*/

/*
Chapter 3
Task 6

	Write a program that asks how many miles you have driven and how many gallons
	of gasoline you have used and then reports the miles per gallon your car has gotten.
	Or, if you prefer, the program can request distance in kilometers and petrol in liters
	and then report the result European style, in liters per 100 kilometers.
*/
/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter the distance in kilometers you have driven: ";
	float distance{};
	cin >> distance;

	cout << "How many liters of gasoline you have used: ";
	float liters_of_gasoline{};
	cin >> liters_of_gasoline;

	float result{};
	result = (100.0f * liters_of_gasoline) / distance;
	cout << "Your car has gotten "<< result <<" liters per 100 kilometers." << endl;

	return 0;
}
*/


