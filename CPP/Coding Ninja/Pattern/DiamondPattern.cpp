#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int i=1;
    int m=-1;
    int get = n/2;
    n=n-get;
    
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        
        int k=1;
    
        while(k<=i){
             cout<<"*";
               k++;
             
        }
        
        int l=2;
        
        while(l<=i){
             cout<<"*";
             l++;
         
        }
        
        cout<<endl;
        i++;
    }
    
        int a=1;
        while(a<=get)
        {
                  int b=1;
                  while(b<=a)
               {
                    cout<<" ";
                    b++;
               }
                    int c = 1;
                    while(c<=get-a+1)
               {
                    cout<<"*";
                    c++;
               }
               
               int d = 1;
               while(d<=get-a)
               {
                    cout<<"*";
                    d++;
               }
               
               cout<<endl;
               a++;
        }
    
}
