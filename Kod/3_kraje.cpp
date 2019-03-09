#include<typeinfo>
#include<iostream>

class Polak
{
};

class Anglik
{
};

class Niemiec
{
};

class Wloch
{
};


int main()
{
	Wloch obiekt;

	if (typeid(obiekt) == typeid(Polak))
		std::cout << "Dzien dobry" << std::endl;

	if (typeid(obiekt) == typeid(Anglik))
		std::cout << "Good morning" << std::endl;

	if (typeid(obiekt) == typeid(Niemiec))
		std::cout << "Guten morgen" << std::endl;

	if (typeid(obiekt) == typeid(Wloch))
		std::cout << "Buongiorno" << std::endl;


	return 0;
}
