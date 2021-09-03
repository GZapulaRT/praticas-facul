#ifndef Banda_hpp
#define Banda_hpp

#include<string>

typedef struct banda Band;

Band* createBand(std::string, std::string);

void updateBandName(Band*, std::string);
void updateBandNationality(Band*, std::string);

std::string readBandName(Band*);
std::string readBandNationality(Band*);

void deleteBand(Band*);

#endif