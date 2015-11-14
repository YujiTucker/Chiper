#include <iostream>
#include <cstring>
#include <sstream>
#include "Vigenere.h"

using namespace std;

int main(){


	stringstream key_sstr;
	stringstream plain_sstr;
	Vigenere V;

	key_sstr << "aaa" << flush;
	plain_sstr << "Plain_sstr" << flush;

	V.setKeyPhrase(key_sstr);
	V.setPlainText(plain_sstr);
	cout << V.getKeyPhrase() << endl;
  V.showVigenereSqure();
	V.encipher();

	return 0;
}
