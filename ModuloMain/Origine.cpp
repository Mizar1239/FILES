#include <iostream>
#include <fstream>
#include <string>
#include <ios>

#define FOGLIO "nuove frasi.txt"
#define FRASE_OUTPUT "mannacc a maronn"
#define NUOVA_FRASE "nuova frase in appendix"

void lettura(void) ;
void scrittura(void) ;
void scrittura_appendix(void) ;

int main(void)
{
	lettura() ;

	scrittura() ;

	scrittura_appendix() ;

	return 0 ;
}

void lettura(void)
{
	std::ifstream libro ; 
	std::string str ;

	libro.open(FOGLIO) ;

	getline(libro, str) ;

	std::cout << str << std::endl ;

	libro.close() ;
}

void scrittura(void)
{
	std::ofstream outline ;

	outline.open(FOGLIO) ;

	outline << FRASE_OUTPUT << std::endl ;

	outline.close() ;
}

void scrittura_appendix(void)
{
	std::ofstream outline ;

	outline.open(FOGLIO, std::ios::app) ;

	outline << NUOVA_FRASE << std::endl ;

	outline.close() ;
}