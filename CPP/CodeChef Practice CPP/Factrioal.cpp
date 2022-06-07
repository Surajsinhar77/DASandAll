#include <iostream>
using namespace std;

int fact(int n)
{
	int fac = 1;
	int i = 1;
	while (i <= n)
	{
		fac = fac * i;
		i++;
	}
	return fac;
}

int main()
{
	int n;
	cin >> n;

	int res = fact(n);
	int in = fact(2);
	int c = fact(3);

	cout << res << " " << in << " " << c << endl;
	cout << res / (c - in) << endl;

	// 	while(i<=n)
	// 	{
	// 	     fact = fact * i;
	// 	     i++;
	// 	}
	// 	cout<<fact;
	return 0;
}
