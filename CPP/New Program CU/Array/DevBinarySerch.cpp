#include<iostream>
using namespace std;

int binarySearch(int ary[],int f,int n)
{
	int mid,start=0,end=n,i,j,temp;
	
    for(j=0; j<=n; j++){
        
        for(i=0; i<=n; i++){

            if(ary[i]>ary[i+1]){
                temp = ary[i];
                ary[i]=ary[i+1];
                ary[i+1]=temp;
            }

        }

    }
        cout<<"\n\n";

    for(i=0; i<=n; i++){
        
            cout<<ary[i];
            cout<<"\t";
        
    }
		
	for(start=0;start<=end;){
	
		mid = (start+end)/2;
		
		if(ary[mid]==f){
			cout<<"yes  :"<<mid;
			return 0;
		}
		else if(ary[mid]<f){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}		
	return 0;
} 

int main(){
	
	int n;
	cout<<"Enter th size of the array: ";
	cin>>n;
	int newN =n;
	
	int f,ary[n];
	
	cout<<"Enter th element of the array :"<<endl;
	for(int i = 0 ; i<n; i++) {
		cin>>ary[i];
		
	}

	cout<<"Printinf th element of the array :=> \t";
	for(int i = 0 ; i<n; i++) {
		cout<<ary[i]<<" ";
		cout<<" -|"<<i<<"|"<<"\t";
	}

	cout<<"\nEnter the Element to search in the array: ";
	cin>>f;
		
		binarySearch(ary,f,newN);
		
	return 0;
}
