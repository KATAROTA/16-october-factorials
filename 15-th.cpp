#include <iostream>

using namespace std;

int fact(int n) {
	int res=1;
	for (int i=1;i<=n;i++) {
		res*=i;
		i++;
	}
	
	return res;
}

int main() {
	cout<<fact(7)<<endl;
	
	return 0;
}
