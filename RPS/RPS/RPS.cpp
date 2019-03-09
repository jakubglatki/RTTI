#include <iostream>
#include <typeinfo>

class Kamien {
};

class Papier {
};

class Nozyczki {
};

int main()
{

	Kamien gracz1;
	Papier gracz2;


	if (typeid(gracz1) == typeid(Kamien)) {
		if (typeid(gracz2) == typeid(Kamien)) {
			std::cout << " Remis";
		}
		else if (typeid(gracz2) == typeid(Papier)) {
			std::cout << " Gracz 2 wygrywa, papier bije kamien";
		}
		else if (typeid(gracz2) == typeid(Nozyczki)) {
			std::cout << " Gracz 1 wygrywa, kamien bije nozyczki";
		}
	}

	else if (typeid(gracz1) == typeid(Papier)) {
		if (typeid(gracz2) == typeid(Papier)) {
			std::cout << " Remis";
		}
		else if (typeid(gracz2) == typeid(Kamien)) {
			std::cout << " Gracz 1 wygrywa, papier bije kamien";
		}
		else if (typeid(gracz2) == typeid(Nozyczki)) {
			std::cout << " Gracz 2 wygrywa, nozyczki bija papier";
		}
	}

	else if (typeid(gracz1) == typeid(Nozyczki)) {
		if (typeid(gracz2) == typeid(Nozyczki)) {
			std::cout << " Remis";
		}
		else if (typeid(gracz2) == typeid(Papier)) {
			std::cout << " Gracz 1 wygrywa, nozyczki bija papier";
		}
		else if (typeid(gracz2) == typeid(Kamien)) {
			std::cout << " Gracz 2 wygrywa, kamien bije norzyczki";
		}
	}

	return 0;
}