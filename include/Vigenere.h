
#ifndef VIGENERE_H_
#define VIGENERE_H_

#include <iostream>
#include <cstring>
#include "Cipher.h"

#define ALPHNUM 26

using namespace std;

class Vigenere : public Cipher {
public:

	Vigenere();
	~Vigenere();	

	void encipher();
	void decipher();

	void showVigenereSqure(); 

private:
	
	static const char vigenereSqure[32][32];

};

#endif /* VIGENERE_H_ */
