#include <iostream>
#include <typeinfo>

class Bron {
	virtual void wybierz_bron() {};
};

class Kamien : public Bron {
};

class Papier : public Bron {
};

class Nozyczki : public Bron {
};

int main()
{

	Kamien gracz_kamienia;
	Kamien *gracz1 = &gracz_kamienia;
	Papier gracz_papieru;
	Papier *gracz2 = &gracz_papieru;


	if (dynamic_cast<Kamien*>(gracz1)) {
		if (dynamic_cast<Kamien*>(gracz2)) {
			std::cout << " Remis";
		}
		else if (dynamic_cast<Papier*>(gracz2)) {
			std::cout << " Gracz 2 wygrywa, papier bije kamien";
		}
		else if (dynamic_cast<Nozyczki*>(gracz2)) {
			std::cout << " Gracz 1 wygrywa, kamien bije nozyczki";
		}
	}

	else if (dynamic_cast<Papier*>(gracz1)) {
		if (dynamic_cast<Papier*>(gracz2)) {
			std::cout << " Remis";
		}
		else if (dynamic_cast<Kamien*>(gracz2)) {
			std::cout << " Gracz 1 wygrywa, papier bije kamien";
		}
		else if (dynamic_cast<Nozyczki*>(gracz2)) {
			std::cout << " Gracz 2 wygrywa, nozyczki bija papier";
		}
	}

	else if (dynamic_cast<Nozyczki*>(gracz1)) {
		if (dynamic_cast<Nozyczki*>(gracz2)) {
			std::cout << " Remis";
		}
		else if (dynamic_cast<Papier*>(gracz2)) {
			std::cout << " Gracz 1 wygrywa, nozyczki bija papier";
		}
		else if (dynamic_cast<Kamien*>(gracz2)) {
			std::cout << " Gracz 2 wygrywa, kamien bije norzyczki";
		}
	}

	return 0;
}