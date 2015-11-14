#include <sstream>
#include <string>
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
	
	void setKeyPhrase(const stringstream& sstr){ this->keyPhrase << sstr.rdbuf(); }
	void setPlainText(const stringstream& sstr){ this->plainText << sstr.rdbuf(); }
	void setChipherText(const stringstream& sstr){ this->cipherText << sstr.rdbuf(); }

	string getKeyPhrase(){ return this->keyPhrase.str(); }
	string getPlainText(){ return this->plainText.str(); }
	string getCipherText(){ return this->cipherText.str(); }

	virtual void encipher() = 0;
	virtual void decipher() = 0;

protected:
	stringstream keyPhrase;
	stringstream plainText;
	stringstream cipherText;
	typedef boost::unordered_map<std::string, int> map_type;
	static const map_type alphnum; 
};


#endif /* CIPHER_H_ */
