#include "pch.h"

#include <iostream>
#include <typeinfo>

class Rycerz { virtual void jedz_do_zamku(); };
class Ksiezniczka : public Rycerz { };

class Mag { };
class Krol : public Mag { };

int main() {
	Ksiezniczka kubus;
	Rycerz* tomus = &kubus;
	Rycerz& romcio = kubus;
	std::cout << typeid(*tomus).name() << std::endl;
	std::cout << typeid(romcio).name() << std::endl;

	Krol franek;
	Mag* matus = &franek;
	Mag& paulinka = franek;
	std::cout << typeid(*matus).name() << std::endl;
	std::cout << typeid(paulinka).name() << std::endl;
}

void Rycerz::jedz_do_zamku()
{
}
