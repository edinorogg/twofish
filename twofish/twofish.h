#pragma once


#include <iostream>
#include <iomanip>
#include <assert.h>

using namespace std;


typedef unsigned int UINT;


typedef unsigned char BYTE;


class TwoFish {
public:
    //consturctors
    TwoFish(char* key, size_t length);
    TwoFish(BYTE* key, size_t length);
    //destructor
    ~TwoFish();
    //interface
    BYTE* encrypt(BYTE* plain);
    BYTE* decrypt(BYTE* cypher);
private:
    void printSubkeys();
    //System methods
    void keySchedule(BYTE* key, size_t length);
    unsigned long long h(UINT inputWord, UINT* inputWordArray, short arraySize); //???
    BYTE q(BYTE x, int qt);
    BYTE ROR4(BYTE x);
    UINT ROR(UINT x, BYTE shift);
    UINT ROL(UINT x, BYTE shift);
    //attributes
    UINT keys[40];
    short k;
    UINT* SBox;
};

