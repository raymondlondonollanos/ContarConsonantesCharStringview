#include <iostream>
#include <algorithm>
#include <string>


void contadorConsonantes(std::string_view sv);

int main()
{

	std::string_view vista{ "Hola como Estas, Siempre bien. Cierto?" };

	contadorConsonantes(vista);

	return 0;
}

void contadorConsonantes(std::string_view sv)
{

	auto contador = std::count_if(sv.begin(), sv.end(), [](char c) {
		c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
		return std::isalpha(static_cast<unsigned char>(c)) &&
			c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'; });

	std::cout << "Contador " << contador;
}
