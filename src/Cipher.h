#include <cstring>
#include <boost/unordered_map.hpp>
#include <boost/assign.hpp>
#include <boost/foreach.hpp>
#include <boost/format.hpp>

#ifndef CIPHER_H_
#define CIPHER_H_

using namespace std;

/*
暗号クラス
setKeyPhrase:鍵を登録するメソッド
setPlainText:平文を登録するメソッド
setChipherText:暗号文を登録するメソッド

*/
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

protected:
	char keyPhrase[1024];
	char plainText[1024];
	char cipherText[1024];
	typedef boost::unordered_map<std::string, int> map_type;
	static const map_type alphnum; 
};


#endif /* CIPHER_H_ */
