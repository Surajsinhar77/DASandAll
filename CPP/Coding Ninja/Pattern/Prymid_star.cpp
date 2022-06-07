#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int i = 1;
  int m = -1;

  while (i <= n)
  {
    int j = 1;
    while (j <= n - i)
    {
      cout << " ";
      j++;
    }

    int k = 1;
    int p = i;
    while (k <= i)
    {
      cout << p;
      k++;
      p++;
    }

    int l = 2;
    m = m + i;
    while (l <= i)
    {
      cout << m;
      l++;
      m--;
    }

    cout << endl;
    i++;
  }
}
