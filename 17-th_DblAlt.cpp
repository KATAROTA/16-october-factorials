#include <iostream>
#include <math.h>
using namespace std;

double distance (int x, int y, int x2, int y2){
	double s = sqrt(pow(x-x2,2)+pow(y-y2,2));
	return s;
}

int main () {
	cout <<distance(5,2,5,1)<<endl;
	return 0;
}
