#include <iostream>
#include <cstring>
#include "Vigenere.h"

using namespace std;

int main(){

	Vigenere V;
	char str[]="aaa";

	V.setKeyPhrase(str);
	V.setPlainText("abcdefghijk");
	cout << V.getKeyPhrase() << endl;
  V.showVigenereSqure();
	V.encipher();

	return 0;
}
