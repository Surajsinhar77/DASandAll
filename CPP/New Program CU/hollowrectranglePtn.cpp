#include<iostream>
using namespace std;

int main(){


    int i,j,col,row;
    cout<<"enter the value of the row and col: ";
    cin>>col>>row;
    cout<<"Column :"<<col<<endl;
    cout<<"Row :"<<row<<endl;
    cout<<"\n";
    for (j=0; j<row ;j++ ){

            for (i=0;i<col;i++){
                
                if (j>0 && j<row-1 && i>0 && i<col-1){
                    cout<<" \t";
                }
                else{
                    cout<<"*\t";
                }
            }
            cout<<"\n";

    }
    return 0;
}