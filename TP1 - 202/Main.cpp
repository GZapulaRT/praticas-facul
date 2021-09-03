#include "Banda.hpp"
#include "Musica.hpp"
#include "Album.hpp"
#include "Potencia.hpp"
#include "ProcuraMapa.hpp"
#include <iostream>
#include <string>

using namespace std;

void Exercicio1();
void Exercicio2();
void Exercicio3();

int main()
{
	int exOpt;
	cout << "Exercicio:\n1 - Albuns\n2-Labirinto\n3 - Potencia\n";
	cin>> exOpt;
	switch(exOpt)
	{
		case 1:
			Exercicio1();
			break;
		case 2:
			Exercicio2();
			break;
		case 3:
			Exercicio3();
			break;
	}

	return 0;
}

void Exercicio1()
{
	int numAlbums;

	cout << "Insira o numero de albuns a serem tratados: ";
	cin >> numAlbums;
	cin.ignore();

	Album** albuns = new Album*[numAlbums];

	for(int i = 0; i<numAlbums; i++)
	{
		string bNome, bNat;
		
		cout << "Nome do artista: ";
		getline(cin, bNome);
		cout << "Nacionalidade do artista: ";
		getline(cin, bNat);

		Band* banda = createBand(bNome, bNat);

		int numMusic;
		cout << "Insira o numero de musicas no album: ";
		cin >> numMusic;

		cout << "\tMusicas:\n";
		Song** musicas = new Song*[numMusic];
		for(int j = 0; j<numMusic; j++)
		{
			string mNome;
			cout << "Nome da musica: ";
			cin.ignore();
			getline(cin, mNome);
			int duracao;
			cout << "Duracao da musica: ";
			cin >> duracao;

			musicas[j] = createSong(mNome, duracao);
		}

		cout << "Nome do album: ";
		string aNome;
		cin.ignore();
		getline(cin, aNome);

		cout << "Ano de lancamento do album: ";
		int anoLanc;
		cin >> anoLanc;

		cout << "Genero do album: ";
		string aGenero;
		cin.ignore();
		getline(cin, aGenero);

		albuns[i] = createAlbum(banda, aNome, anoLanc, aGenero, musicas, numMusic);
	}

	cout << "Opcoes:\n\t1 - Imprimir musicas de um album\n\t2 - Imprimir os albuns ordenados \n\n";
	int opt;
	cin >> opt;

	switch(opt)
	{
		case 1:
			cout << "Escolha o album para imprimir as musicas: ";
			int albumInd;
			cin >> albumInd;
			printSongs(albuns[albumInd]);
			break;
		case 2:
			orderingYear(albuns, numAlbums);
			for(int i = 0; i<numAlbums; i++)
			{
				cout << readAlbumBandName(albuns[i]) << " (" << readAlbumBandNat(albuns[i]) << ")\n" << readAlbumName(albuns[i]) << endl << readAlbumRelease(albuns[i]) << endl << readAlbumGenre(albuns[i]) << endl << endl;
			}
			cout << endl;
			break;
	}

	for(int i = 0; i<numAlbums; i++)
	{
		deleteAlbum(albuns[i]);
	}

	delete[] albuns;
}

void Exercicio2()
{
	char mapa[100] = {'i', '*', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '*', '0', '*', '*', '*', '*', '*', '*', '*', '0', '0', '*', '0', '0', '0', '*', '0', '*', '*', '*', '0', '0', '*', '0', '0', '*', '0', '0', '0', '*', '*', '0', '0', '*', '0', '*', '0', '0', '0', '0', '0', '*', '0', '*', '0', '*', '0', '0', '0', '0', '0', '0', '0', '*', '0', '*', '0', '0', '0', '*', '*', '*', '*', '*', '0', '*', '*', '*', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '*', '*', '*', '*', '*', '*', '*', '*', '*', 'f'};

	for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<10; j++)
		{
			cout << mapa[i*10+j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	pathFind(mapa, 0, 0, caminho);
}

void Exercicio3()
{
	cout << "Insira os valores da potencia x e y (x^y): ";
	int x, y;
	cin >> x >> y;
	cout << mathPower(x,y) << endl;
}