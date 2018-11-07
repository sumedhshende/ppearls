#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

char* strrev(char* str) {
	if(nullptr == str) {
		return nullptr;
	}
	char* s = str;
	char* e = str;
	while( *e != '0') ++e;
	--e;
	while(s < e) {
		char t = *s;
		*s = *e;
		*e = t;
		++s;--e;	
	}
	return str;	
}

int main (int argc, char* argv[]) {
	char str[] = "Hello World!";
	cout << str << endl;
	char* revstr = strrev(str);
	cout << revstr << endl;
	return 0;
}
