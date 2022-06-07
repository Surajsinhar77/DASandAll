#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int a = 9;

	int *b = &a;
	cout << &a << endl;
	cout << b << endl; 

	b++;                            // b++ use to change in address 	*b++ use  to change in value of b pointer  or address
	cout << b << endl; 
	cout <<  sizeof(b) << endl;
	
	cout << &a << endl;

	double  g = 6.6;
	double * t  = &g;
	t++;
	cout << t << endl;
	
	cout << sizeof(t) << endl;
	return 0;
}
