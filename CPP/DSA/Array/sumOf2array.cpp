#include <iostream>
using namespace std;

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[])
{

    int i = size1, j = size2, k = size1 + 1;
    int carry = 0;
    int temp = 0;
    int a, b;
    while (i >= 0)
    {
        if (i > j && j <= 0){
            output[k] = input1[i];
            if(i==0){
                output[k-1] = carry;
            }
        }
        a = input1[i] + input2[j] + carry;

        if (i >= 0 && j >= 0){

            if (a % 10 != a){
                temp = a % 10;
                output[k] = temp;
                carry = a / 10;
                if(i==0){
                    output[k-1] = carry;
                }
            }
            else{
                output[k] = a % 10;
                carry = 0;
            }
            
        }
        i--;
        j--;
        k--;
    } 
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *input1 = new int[size1];

        for (int i = 0; i < size1; ++i)
        {
            cin >> input1[i];
        }

        int size2;
        cin >> size2;

        int *input2 = new int[size2];

        for (int i = 0; i < size2; ++i)
        {
            cin >> input2[i];
        }

        int outsize = 1 + max(size1, size2);

        int *output = new int[outsize];

        sumOfTwoArrays(input1, size1, input2, size2, output);

        for (int i = 0; i < outsize; ++i)
        {
            cout<<output[i] << " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout << endl;
    }
    return 0;
}

