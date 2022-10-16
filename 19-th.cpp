#include <iostream>
#include <math.h>

using namespace std;

double func(int F) {
	if (F==1) return 1;
	else if (F==2) return 3;
	else{
		return func(F-1)*F+func(F-2)*(F-1);
	}
	
	
}

int main() {
	cout << func(5) << endl;
}
