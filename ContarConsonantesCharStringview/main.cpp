#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>


void contadorConsonantes(std::string_view sv);

void contadorConsonantesChar(char* fr);

int main()
{

	std::string_view vista{ "Hola como Estas, Siempre bien. Cierto? 1111 09097" };

	//contadorConsonantes(vista);

	char frase[]{ "Hola, como estas" };

	std::cout << std::endl;

	contadorConsonantesChar(frase);

	//contadorConsonantes(frase);

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

void contadorConsonantesChar(char* fr)
{
	//por defecto se hace false
	std::size_t contador{};

	for (std::size_t i{}; fr[i] != '\0'; ++i)
	{
	
			char c = static_cast<char>(std::tolower(static_cast<unsigned char>(fr[i])));
		     
			if (std::isalpha(static_cast<unsigned char>(c)) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
			++contador;

	
	}

	std::cout << "\nContador de consonante metodo void " << contador;

}
