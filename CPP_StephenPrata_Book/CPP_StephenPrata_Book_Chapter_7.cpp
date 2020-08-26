// В конце ноября, в оттепель, часов в девять утра, поезд Петербургско-Варшавской железной дороги
// на всех парах подходил к Петербургу.
// Было так сыро и туманно, что насилу рассвело;
// в десяти шагах, вправо и влево от дороги, трудно было разглядеть хоть что - нибудь из окон вагона.

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const float MILES_IN_100_KILOMETERS = 62.14;
	const float LITERS_IN_1_GALLON = 3.875;

	float consumption_in_liters{};
	cout << "Please, enter the fuel consumption of your car in liters per 100 kilometers: ";
	cin >> consumption_in_liters;

	float consumption_in_gallons{};
	consumption_in_gallons = consumption_in_liters / LITERS_IN_1_GALLON;

	float result{};
	result = MILES_IN_100_KILOMETERS / consumption_in_gallons;

	cout << "Your car can drive " << result << " miles per gallon!" << endl;

	return 0;
}