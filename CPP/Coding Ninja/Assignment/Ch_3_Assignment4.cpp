#include<iostream>
#include<math.h>
using namespace std;

int counting(int n){
    int count = 0;
    while(n > 0){
        int y = n%10;
        count++;
        n = n/10;
    }
    return count;
}

int main(){
	// Write your code here
	int n;
    cin>>n;
    int result=0;
    int count = counting(n);
    int i=0;
    
    while(i < count){
        int y = n%10;
        int z = pow(2,i);
        z = z * y;          
        result = result + z;
        n = n/10;
        i++;
    }
    cout<<result<<endl;
}
