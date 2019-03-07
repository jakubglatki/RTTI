#include<iostream>
#include <vector>
#include<typeinfo>

class Postac {

};

class Rycerz : public Postac
{
};

class Ksiezniczka : public Postac
{
};





int main()
{
	Postac tab[2];
	
	
	Ksiezniczka kubus; 
	Rycerz tomus;

	tab[0] = kubus;
	tab[1] = tomus;

	if (typeid(kubus) == typeid(Ksiezniczka))
		std::cout << "Kubus jest ksiezniczka ..." << std::endl;

	if (typeid(tab[0]) == typeid(Ksiezniczka))
		std::cout << "i rycerz Tomus uratuje go z wiezy" << std::endl;
	else
		std::cout << "i rycerz Tomus nie uratuje go z wiezy" << std::endl;


	//if (typeid(tab[0]) == typeid(Rycerz))
	//	std::cout << "Witam!" << std::endl;

	/*std::cout << typeid(tab[0]).name() << std::endl;
	std::cout << typeid(Mag).name();*/
	return 0;
}