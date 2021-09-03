#include "Musica.hpp"
#include <string>

using namespace std;

struct song
{
	string name;
	int timeLength;
};

Song* createSong(string nome, int tamanho)
{
	Song* musica = new Song;
	musica->name = nome;
	musica->timeLength = tamanho;

	return musica;
}

void createSongList(Song** musicas, int size)
{
	musicas = new Song*[size];
}

void updateSongName(Song* musica, string novoNome)
{
	musica->name = novoNome;
}

void updateSongLength(Song* musica, int novoTamanho)
{
	musica->timeLength = novoTamanho;
}

string readSongName(Song* musica)
{
	return musica->name;
}

int readSongLength(Song* musica)
{
	return musica->timeLength;
}

void deleteSong(Song* musica)
{
	delete musica;
}