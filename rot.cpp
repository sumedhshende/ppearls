#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>

using namspace std;

void reverse(vector<int>& vArr, int s, int e) {
	int f = s;
	int l = e;
	for(int f=0; f<l; f++, --l) {
		int t = vArr[f];	
		vArr[f] = vArr[l];
		vArr[l] = t;
	}
}
void rotate(vector<int>& vArr, int point) {
	reverse(vArr, 0, point);
	reverse(vArr, point+1, vArr.size());
	reverse(vArr, 0, vArr.size());
}
void printv(vector<int>& v) {
	for(auto& i : v) {
		cout << *i << " ";
	}
	cout << endl;
}
void test_rotate() {
	srand(time(NULL));
	for(int i=0; i<10; i++) {
		vector<int> v;
		int size = rand() % 20 + 1;
		for(int j=0; j<size; j++) {
			v.push_back(rand() % 50 + 1);
			
		}
		cout << "Original Array-------------------------------------------" << endl;
		printv(v);
		int rotpoint = rand() % size ;
		rotate(v, rotpoint);	
		cout << "Rotated Array-------------------------------------------" << endl;		
		printv(v);
}		

int main() {
	test_rotate();
	return 0;
}

