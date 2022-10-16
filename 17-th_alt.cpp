#include <iostream>

using namespace std;
int max(int a, int b) {
	int res;
	if (a>b) {
		res = a;
		
	}
	else{
		res =b;
	}
	
	return res;
	
}

int max(int a, int b, int c) {
	return max(max(a,b),c);
}


int main() {
	cout<<max(10,7,5)<<endl;
	
}
