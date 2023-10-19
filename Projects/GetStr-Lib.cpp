// biblioteca
#include <iostream>
#ifndef MYLIB_CPP
#define MYLIB_CPP

using namespace std;

string leStr() {
	string txt;
	getline(cin,txt);
	if (txt[0] == '\0') //elimina lixo do buffer caso exista
		getline(cin,txt);
	return txt;
}
#endif
