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
#include <iomanip>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main()
{
	setlocale(LC_ALL, "ru");
	setprecision(5);
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

}
*/