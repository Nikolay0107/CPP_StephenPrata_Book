
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

    const string myName = "Nikolay Bondarenko";
    string adress = "My adress!";
    int houseNumber = 555;
    int flatNumber = 777;

    cout << "My name: " << myName << endl;
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