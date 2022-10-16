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
	int res;
	if (a>b and a>c) {
		res = a;
	}
	else if(b>a and b>c){
		res =b;
	}
	else{
		res =c;
	}
	return res;
}


int main() {
	cout<<max(10,7,5)<<endl;
	
}

