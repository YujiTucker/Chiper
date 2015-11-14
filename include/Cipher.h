#include <cstring>

#ifndef CIPHER_H_
#define CIPHER_H_

using namespace std;

class Cipher {
public:
	
	void setKeyPhrase(const char *s){ strcpy(this->keyPhrase, s); }
	void setPlainText(const char *s){ strcpy(this->plainText, s); }
	void setChipherText(const char *s){ strcpy(this->cipherText, s); }

	char* getKeyPhrase(){ return this->keyPhrase; }
	char* getPlainText(){ return this->plainText; }
	char* getCipherText(){ return this->cipherText; }

	virtual void encipher() = 0;
	virtual void decipher() = 0;

private:
	char keyPhrase[1024];
	char plainText[1024];
	char cipherText[1024];

};

#endif /* CIPHER_H_ */
