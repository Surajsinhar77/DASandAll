#include <iostream>
using namespace std;

void rotate(int ary[], int d, int n){
     int j = 0;
     while(j<d){
          int temp = ary[0];
          for(int i=0; i<n; i++){
               ary[i] = ary[i+1];
          }
          ary[n-1] = temp;
          
          j++;
     }
}

int main(){
          
         	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}