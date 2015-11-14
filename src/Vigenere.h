
#ifndef VIGENERE_H_
#define VIGENERE_H_

#include <iostream>
#include <cstring>
#include <stdio.h>
#include "Cipher.h"

#define ALPHNUM 27

using namespace std;

class Vigenere : public Cipher {
public:

	Vigenere();
	~Vigenere();	

	void encipher();
	void decipher();

	void showVigenereSqure(); 

private:
	
	static const char vigenereSqure[ALPHNUM][ALPHNUM];

};

#endif /* VIGENERE_H_ */
