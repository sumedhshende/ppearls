#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>

using namespace std;

void reverse(vector<int>& vArr, int s, int e) {
	int f = s;
	int l = e;
	for(; f<l; f++, --l) {
		int t = vArr[f];	
		vArr[f] = vArr[l];
		vArr[l] = t;
	}
}
void printv(vector<int>& v) {
	for(auto& i : v) {
		cout << i << " ";
	}
	cout << endl;
}
void rotate(vector<int>& vArr, int point) {
	if (point  < 1) return ;
	reverse(vArr, 0, point-1);
	printv(vArr);
	reverse(vArr, point, vArr.size()-1);
	printv(vArr);
	reverse(vArr, 0, vArr.size()-1);
}

void test_rotate() {
	srand(time(NULL));
	for(int i=0; i<10; i++) {
		int size = rand() % 5 + 1;
		vector<int> v;
		vector<int> r(size);	
		for(int j=0; j<size; j++) {
			int e = rand() % 20 + 1;
			v.push_back(e);
			r[size-j-1] = e;
		}
		int rotpoint = rand() % size ;
		cout << "Original Array-------------- " << rotpoint << "  -------" << endl;
		printv(v);
		rotate(v, rotpoint);	
		cout << "Rotated Array-------------------------------------------" << endl;		
		printv(v);
		printv(r);
		for(int k=0; k<size; k++) {
			if(v[k] != r[k]) cout << " --------------Test Failed--------------------" << endl;
		}
		cout << " --------------Test Failed--------------------" << endl;
	}
}		

int main() {
	test_rotate();
	return 0;
}

