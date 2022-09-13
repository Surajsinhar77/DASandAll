#include <iostream>
using namespace std;

void reversehalf(char a[], int size){
     
     int mid = (size+0)/2;

     int g = 0, d=mid;
     while(g<d){
          char temp = a[g];
          a[g] = a[d];
          a[d] = temp;
          g++;d--;
     }
     
     int h = mid+1;
     cout<<h<<endl;cout<<size<<endl;
     while(h<size){
          char temp = a[h];
          a[h] = a[size];
          a[size] = temp;
          h++;size--;
     }
}

int main() {

	int n;
	cin>>n;
	char a[];
     
     cin>>a;
     
     int i =0;
     int size=0;
     while(a[i] != '\0'){
          size++;
          i++;
     }	

	reversehalf(a,size-1);
	
	cout<<a<<endl;	return 0;
}
