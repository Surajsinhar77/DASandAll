#include<iostream>
#include<climits>
using namespace std;

// Method 1
void intersection(int *input1, int *input2, int n1, int n2)
{	
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            if(input1[i] == input2[j]){
                cout<<input1[i]<<" ";
                for(int k = i; k<n2; k++){
                    input2[k] = input2[k+1];
                }
                break;
            }
        }
    }
}

// Method 2 
void intersection(int *input1, int *input2, int n1, int n2)
{	
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            if(input1[i] == input2[j]){
                cout<<input1[i]<<" ";
                input2[i]=INT_MIN;
                break;
            }
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size1, size2;
		cin >> size1;
		// int *input1 = new int[size1];
        int input1[size1];
		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}
		cin >> size2;
		// int *input2 = new int[size2];
        int input2[size2];
		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}
		intersection(input1, input2, size1, size2);
		// delete[] input1;
		// delete[] input2;
		cout << endl;
	}
	return 0;
}

// 1
// 4
// 6 9 8 5
// 5
// 9 2 4 1 8

// 2
// 6
// 1 1 3 3 5 5
// 8
// 1 1 1 3 3 3 5 5
// 5
// 11 11 12 12 13
// 5
// 11 12 12 13 13
