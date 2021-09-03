#ifndef Musica_hpp
#define Musica_hpp

#include <string>

typedef struct song Song;

Song* createSong(std::string, int);

void updateSongName(Song*, std::string);
void updateSongLength(Song*, int);

std::string readSongName(Song*);
int readSongLength(Song*);

void deleteSong(Song*);

#endif