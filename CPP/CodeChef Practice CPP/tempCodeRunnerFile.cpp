#include <iostream>
using namespace std;

void towerOfHanoi(int n, char rod_1, char rod_2, char rod_3)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << rod_1 <<" to rod " << rod_2<<endl;
        return;
    }
    towerOfHanoi(n - 1, rod_1, rod_3, rod_2);
    cout << "Move disk " << n << " from rod " << rod_1 << " to rod " << rod_2 << endl;
    towerOfHanoi(n - 1, rod_3, rod_2, from_rod);
}

int main()
{
    int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

