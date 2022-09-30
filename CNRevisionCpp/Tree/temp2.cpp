#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


int biggest_on_digit_delete(int num) {
        int result = 0;
        vector<int> num_digits;
    while(num) {
        num_digits.push_back(num % 10);
        num = floor(num / 10);
    }
    for (int index_num = 0; index_num < num_digits.size(); index_num++) {
        int n = 0;
        for (int i = num_digits.size() - 1; i >= 0; i--) {
            if (i != index_num) {
                n = n * 10 + num_digits[i];
            }
        }
        result = max(n, result);
    }
    return result;
}

int main()
{

	int N;
	//char X = '2';
    cin>>N;
	cout << biggest_on_digit_delete(N)<<endl;
	return 0;
}

// This code is contributed by Ishan Khandelwal
