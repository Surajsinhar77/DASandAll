#include<iostream>
using namespace std;

int findUniq(int ary[], int n){
    int temp = 0, j =0;

    for(int i =0; i<n; i++){
        if(ary[i]==ary[j] && i!=j){
            j++;
            i=-1;
        }else{
            if(i==n-1){
                temp = ary[j];
            }
        }
    }
    return temp;
}

int main(){
    int n; 
    cin>>n;

    int ary[n];
    for(int i =0; i<n; i++){
        cin>>ary[i];
    }

    int ans = findUniq(ary, n);
    cout<<ans<<endl;

    
	// int temp;
	// int j=0;
	// int arr[5];
	// for(int i=0;i<5;i++){
	// 	cin>>arr[i];
	// }
	// for(int i=0;i<5;i++){
		
	// 	if(arr[i]==arr[j] && i!=j){
	// 		j++;
	// 		i=0;
	// 	}
	// 	else{
	// 		if(i==5-1){
	// 			temp=arr[j];
	// 		}
			
	// 	}
	// }
	// cout<<temp<<endl;
    return 0;
}