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

void linearSearch(int ary[],int f,int n){
	
	for(int i=0 ; i<n; i++) {
		if(f == ary[i]){
            cout<<"yes and its position is :" <<i;
            break;
        }
        
	}
}

int main() {

	int n;
	cout<<"Enter th size of the array: ";
	cin>>n;
	
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
	
	int b;
//	while(b==1 || b==2){
	
	cout<<"Press 1 for the liner Search \nPress 2 for the Binary Search"<<endl;
	cin>>b;
	
	if(b==1){
		linearSearch(ary ,f,n);
	}
	else if(b==2){
		binarySearch(ary ,f,n);
	}
	
//}
	
	return 0;
}
