#include "Album.hpp"
#include "Banda.hpp"
#include "Musica.hpp"
#include <string>
#include <iostream>

using namespace std;

struct album
{
	Band* artist;
	string name;
	int yearRelease;
	string genre;
	Song** musics;
	int numMusics;
};

Album* createAlbum(Band* artista, string nome, int anoLanc, string genero, Song** musicas, int numMusicas)
{
	Album* disco = new Album;

	disco->artist = artista;
	disco->name = nome;
	disco->yearRelease = anoLanc;
	disco->genre = genero;
	disco->musics = musicas;
	disco->numMusics = numMusicas;

	return disco;
}

void updateAlbumArtist (Album* disco, Band* novoArtista)
{
	disco->artist = novoArtista;
}

void updateAlbumName (Album* disco, string novoNome)
{
	disco->name = novoNome;
}

void updateAlbumRelease (Album* disco, int novoAno)
{
	disco->yearRelease = novoAno;
}

void updateAlbumGenre (Album* disco, string novoGenero)
{
	disco->genre = novoGenero;
}

void updateAlbumMusics (Album* disco, Song** novasMusicas)
{
	disco->musics = novasMusicas;
}

string readAlbumBandName (Album* disco)
{
	return readBandName(disco->artist);
}

string readAlbumBandNat (Album* disco)
{
	return readBandNationality(disco->artist);
}

string readAlbumName (Album* disco)
{
	return disco->name;
}

int readAlbumRelease (Album* disco)
{
	return disco->yearRelease;
}

string readAlbumGenre (Album* disco)
{
	return disco->genre;
}

void deleteAlbum (Album* disco)
{
	delete disco;
}

void orderingYear(Album** albuns, int size)
{
	for(int i = 0; i<size; i++)
	{
		int iMin = i;
		for(int j = i; j<size; j++)
		{
			if(albuns[j]->yearRelease < albuns[iMin]->yearRelease)
			{
				iMin = j;
			}
		}
		if(iMin != i)
			swapAlbumInfo(albuns[iMin], albuns[i]);
	}
}

void swapAlbumInfo(Album* albumA, Album* albumB)
{
	Album* auxMin = createAlbum(albumA->artist, albumA->name, albumA->yearRelease, albumA->genre, albumA->musics, albumA->numMusics);
	delete albumA;
	albumA = createAlbum(albumB->artist, albumB->name, albumB->yearRelease, albumB->genre, albumB->musics, albumB->numMusics);
	delete albumB;
	albumB = createAlbum(auxMin->artist, auxMin->name, auxMin->yearRelease, auxMin->genre, auxMin->musics, auxMin->numMusics);
	delete auxMin;
}

void printSongs(Album* album)
{
	for(int i = 0; i<album->numMusics; i++) // Dividir por 8 por ser tamanho padrão de ponteiro
	{
		cout << readSongName(album->musics[i]) << " " << readSongLength(album->musics[i]) << "s\n";
	}
}