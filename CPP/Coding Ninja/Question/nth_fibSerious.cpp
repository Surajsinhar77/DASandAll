#include <iostream>
using namespace std;

int F(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int a = F(n - 1);
        int b = F(n - 2);
        return a + b;
    }
};

int main()
{
    //Write your code here.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = F(i);
        cout << a << endl;
    }
}
