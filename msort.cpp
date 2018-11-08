#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <climits>
#include <sstream>

using namespace std;
void getArr(vector<long long>& vArr) {
	for(long long  i=0; i < LLONG_MAX; i++ ) {
		long long num = rand() % LLONG_MAX + 1;
		vArr.push_back(num);
	}
}

void saveArr(vector<long long>& vArr) {
	ofstream of;
	of.open("data.txt", ios_base::out);
	
	for(long long i=0; i <  vArr.size(); i++) {
		ostringstream str("");
		str << vArr[i] << endl;
		of <<	str.str();
	}
	of.close();
}
int main() {
	srand(time(NULL));
	vector<long long> vArr;
	getArr(vArr);
	saveArr(vArr);
	return 0;
}
