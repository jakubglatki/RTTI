#include<iostream>
#include<typeinfo>
#include <algorithm>

#define TAB_SIZE 9
#define KURS_DOLLARA 3.8297

class Swiat
{
public:
	double PKB;
	double liczba_ludnosci;

	virtual double policz_PKB_per_Capita()
	{
		return PKB / liczba_ludnosci;
	}
};

class Europa : public Swiat
{
};

class Azja : public Swiat
{
};

class Afryka : public Swiat
{
};

class Polska : public Europa
{
public:
	Polska()
	{
		PKB = 614190;
		liczba_ludnosci = 38.4;
	}
};

class Niemcy : public Europa
{
public:
	Niemcy()
	{
		PKB = 3684816;
		liczba_ludnosci = 80.59;
	}
};
class Austria : public Europa
{
public:
	Austria()
	{
		PKB = 416845;
		liczba_ludnosci = 8.75;
	}
};
class Sudan : public Afryka
{
public:
	Sudan()
	{
		PKB = 58239;
		liczba_ludnosci = 37.34;
	}
};
class RPA : public Afryka
{
public:
	RPA()
	{
		PKB = 349299;
		liczba_ludnosci = 54.84;
	}
};
class Erytrea : public Afryka
{
public:
	Erytrea()
	{
		PKB = 5813;
		liczba_ludnosci = 5.918;
	}
};
class Chiny : public Azja
{
public:
	Chiny()
	{
		PKB = 12014610;
		liczba_ludnosci = 1420;
	}
};
class Katar : public Azja
{
public:
	Katar()
	{
		PKB = 166326;
		liczba_ludnosci = 2.314;
	}
};
class Wietnam : public Azja
{
public:
	Wietnam()
	{
		PKB = 220408;
		liczba_ludnosci = 96.16;
	}
};

int main()
{
	Swiat* ziemia[TAB_SIZE] = { new Polska, new Niemcy, new Austria, new Sudan, new RPA, new Erytrea, new Wietnam, new Katar, new Chiny};

	std::cout << "ZADANIE 5" << std::endl;
	for (int i = 0; i < TAB_SIZE; ++i)
		if (dynamic_cast<Europa*>(ziemia[i]))
			std::cout << typeid(*ziemia[i]).name() << "\t" << ziemia[i]->liczba_ludnosci << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "ZADANIE 6" << std::endl;
	for (int i = 0; i < TAB_SIZE; ++i)
		if (dynamic_cast<Afryka*>(ziemia[i]))
			std::cout << typeid(*ziemia[i]).name() << "\t" << ziemia[i]->policz_PKB_per_Capita() << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "ZADANIE 7" << std::endl;
	for (int i = 0; i < TAB_SIZE; ++i)
		if (dynamic_cast<Swiat*>(ziemia[i]))
			std::cout << typeid(*ziemia[i]).name() << "\t" << ziemia[i]->PKB << "\t" << ziemia[i]->liczba_ludnosci << std::endl;
	std::cout << std::endl << std::endl;

	int mini = 0;
	double min = ziemia[0]->policz_PKB_per_Capita();

	for (int i = 1; i < TAB_SIZE; ++i)
		if (ziemia[i]->policz_PKB_per_Capita() < min)
		{
			min = ziemia[i]->policz_PKB_per_Capita();
			mini = i;
		}

	for (int i = 0; i < TAB_SIZE; i++)
	{
		for (int j = 0; j < TAB_SIZE - 1; j++)
		{
			if (ziemia[i]->policz_PKB_per_Capita() > ziemia[j]->policz_PKB_per_Capita())
				std::swap(ziemia[j], ziemia[i]);
		}
	}

	std::cout << "ZADANIE 8 - Posortowane kraje po PKB per capita" << std::endl;
	for (int i = 0; i < TAB_SIZE; ++i) {
		std::cout << typeid(*ziemia[i]).name() << "\t" << (int)(ziemia[i]->policz_PKB_per_Capita() * KURS_DOLLARA)  << std::endl;
	}

	system("pause");
	return 0;
}
