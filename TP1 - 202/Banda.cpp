#include "Banda.hpp"
#include <string>

using namespace std;

struct banda
{
	string name, nationality;
};

Band* createBand(string nome, string nacao)
{
	Band* novaBanda = new Band;
	novaBanda->name = nome;
	novaBanda->nationality = nacao;

	return novaBanda;
}

void updateBandName(Band* banda, string novoNome)
{
	banda->name = novoNome;
}

void updateBandNationality(Band* banda, string novaNacao)
{
	banda->nationality = novaNacao;
}

string readBandName(Band* banda)
{
	return banda->name;
}

string readBandNationality(Band* banda)
{
	return banda->nationality;
}

void deleteBand(Band* banda)
{
	delete banda;
}