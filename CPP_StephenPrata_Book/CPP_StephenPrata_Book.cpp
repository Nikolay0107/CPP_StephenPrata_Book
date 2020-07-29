
/*
Chapter 1
Task 1

    Write a C++ program that displays your name and address (or if you value your
    privacy,a fictitious name and address).
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    const string MY_NAME = "Nikolay Bondarenko";
    string adress = "My adress!";
    int houseNumber = 555;
    int flatNumber = 777;

    cout << "My name: " << MY_NAME << endl;
    cout << "My adress: " << adress << endl;
    cout << "My house number: " << houseNumber << endl;
    cout << "My flat number: " << flatNumber << endl;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 2

    Write a C++ program that asks for a distance in furlongs and converts it to yards.
    (One furlong is 220 yards.)
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

double yardConverter(double furlongDistance)
{
    return furlongDistance * 220;
}

int main(void)
{
    double furlongDistance;

    cout << "Please, enter your distance in Furlong measure: ";
    cin >> furlongDistance;
    cout << "\nYour distance in Yard measure: " << yardConverter(furlongDistance) << endl;
    
    return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 3

    Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output:

        Three blind mice
        Three blind mice
        See how they run
        See how they run

    One function, called two times, should produce the first two lines,and the remaining function,
    also called twice, should produce the remaining output.
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void print_ThreeBlindMice()
{
    cout << "Three blind mice" << endl;
}

void print_SeeHowTheyTun()
{
    cout << "See how they run" << endl;
}

int main(void)
{
    print_ThreeBlindMice();
    print_ThreeBlindMice();
    print_SeeHowTheyTun();
    print_SeeHowTheyTun();
        
    return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 4

    Write a program that asks the user to enter his or her age.The program then should display the age in months :
        Enter your age : 29
        Your age in months is 384.
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int monthsAge(int yearsAge)
{
    return yearsAge * 12;
}

int main()
{
    int yearsAge;

    cout << "Please, enter your age: ";
    cin >> yearsAge;
    cout << "Your age in months: " << monthsAge(yearsAge) << endl;
       
    return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 5

    Write a program that has main() call a user - defined function that takes a Celsius
    temperature value as an argument and then returns the equivalent Fahrenheit value.
    The program should request the Celsius value as input from the user and display
    the result, as shown in the following code :

            Please enter a Celsius value : 20
            20 degrees Celsius is 68 degrees Fahrenheit.

    For reference, here is the formula for making the conversion :
            
            Fahrenheit = 1.8 × degrees Celsius + 32.0
 */

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

double celsiusToFahrenheit(double celsiusTemperature)
{
    return 1.8 * celsiusTemperature + 32.0;
}

int main()
{
    double celsiusTemperature;
    
    cout << "Please enter a temperature in Celsius degrees: ";
    cin >> celsiusTemperature;
    cout << celsiusTemperature << " degrees Celsius is " << celsiusToFahrenheit(celsiusTemperature) << " degrees Fahrenheit." << endl;
        
    return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 6

    Write a program that has main() call a user-defined function that takes a distance
    in light years as an argument and then returns the distance in astronomical units.
    The program should request the light year value as input from the user and display
    the result, as shown in the following code:

        Enter the number of light years: 4.2
        4.2 light years = 265608 astronomical units.

    An astronomical unit is the average distance from the earth to the sun (about
    150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
    a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
    sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this conversion factor:
        
        1 light year = 63,240 astronomical units
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

double lightYearToAstronomicalUnits(double lightYears)
{
    return lightYears * 63240;
}

int main()
{
    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years = " << lightYearToAstronomicalUnits(lightYears) << " astronomical units." << endl;

    return 0;
}
*/

//-----------------------------------------------------

/*
Chapter 1
Task 7

    Write a program that asks the user to enter an hour value and a minute value.The
    main() function should then pass these two values to a type void function that displays
    the two values in the format shown in the following sample run:

        Enter the number of hours: 9
        Enter the number of minutes: 28
        Time: 9:28
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void yourTime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    
    yourTime(hours, minutes);
    
    return 0;
}
*/

//-----------------------------------------------------