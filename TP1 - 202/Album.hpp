#ifndef Album_hpp
#define Album_hpp

#include "Banda.hpp"
#include "Musica.hpp"

typedef struct album Album;

Album* createAlbum(Band*, std::string, int, std::string, Song**, int);

void updateAlbumArtist(Album*, Band*);
void updateAlbumName(Album*, std::string);
void updateAlbumRelease(Album*, int);
void updateAlbumGenre(Album*, std::string);
void updateAlbumMusics(Album*, Song**);

std::string readAlbumBandName(Album*);
std::string readAlbumBandNat(Album*);
std::string readAlbumName(Album*);
int readAlbumRelease(Album*);
std::string readAlbumGenre(Album*);

void orderingYear(Album**, int);
void swapAlbumInfo(Album*, Album*);

void printSongs(Album*);

void deleteAlbum(Album*);

#endif