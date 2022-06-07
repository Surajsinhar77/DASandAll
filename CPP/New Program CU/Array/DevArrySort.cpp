#include<iostream>

    using namespace std;

int main (){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
	int ary[n],i,j,temp=0;
//
    
    
    cout<<"enter the number of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i];
    }

//    for(i=0; i<5; i++){
//        cout<<"\t";
//        cout<<ary[i];
//    }

//    for(j=0; j<6; j++){
//        
//        for(i=1; i<6; i++){
//
//            if(ary[i]>ary[i+1]){
//                temp = ary[i];
//                ary[i]=ary[i+1];
//                ary[i+1]=temp;
//            }
//
//        }
//
//    }
//        cout<<"\n\n";

//    for(i=0; i<6; i++){
//        
//            cout<<"\t";
//            cout<<ary[i];
//        
//    }

    return 0;
}
