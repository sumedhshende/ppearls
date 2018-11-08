#include <iostream>
#include <vector>
using namespace std;
void print(int arr[]) {
	for(int i=0; i<10; i++)
		cout << arr[i] << " ";
	cout << endl;
}	
int main() {
	int a[] ={1, 2, 2, 3, 3, 3, 4, 5, 5, 5};
	int m=0;
	for(int i=1;i<10; i++) {
		if(a[m] != a[i]) {
			m = i
		}else{
			a[m] = a[i];
			m = i;
		}
		print(a);
	}
	return 0;
}
