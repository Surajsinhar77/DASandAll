// #include<iostream>
// using namespace std;

// void findNgtndPostive(){
//     int no;
//         cout<<"Enter the the no : ";
//         cin>>no;
//     if (no <= -1){
//             cout<<"Number is negative"<<endl;
//         }
//         else{
//             cout<<"Number is Positive"<<endl;
//         }
// }
// void primeFinder(){
//     if (){
//         cout<<"number is prime";
//     }
// };
// int shifting(int ary[]){
// 	for(int i=5+1;i>=0;i--){
//             ary[i+1]=ary[i];
//         }
// }

// int main(){

// struct str1{
//     int roll =1;
//     float no =1.4;
// };

// str1 one;

// cout<<"the ans is : "<<one.roll;

// if(0<1){
//     cout<<"u  r zero";
// }

// struct st1 {
//     int rollno = 55;
//     string name = "Suraj";
//     float marks = 7.5;
// };

// st1 one;
// cout<<"the roll no is : "<<one.rollno;
// cout<<"\nthe name  is : "<<one.name;
// cout<<"\nthe marks  is : "<<one.marks;
// int col=4,row=5,i,j;

// for (i=0; i<row; i++){
//     for(j=0; j<col; j++){

//         if (j>0 || j<col-2 && i>0 || i<row-2){
//             cout<<"true\n";
//         }
//         else{
//             cout<<"false\n";
//         }

//         cout<<"\n";
//     }
// }
// int a = 1;
// int  *no ;
// *no = a;

// cout<<&no;

// int i = 0;

// i = i++ + 2;
// cout<<i;

// cout<<i;
// int a;
// long b;
// char c;
// float d;
// double e;

// int a=3;
// long b=1234567891;
// char c = 'a';
// float d=334.23;
// double e=14049.30493;

// cout<<"enter the no 3";
// cin>>a>>b>>c>>d>>e;
// cout<<a;

// // cout<<"enter the no long numbers";
// // cin>>b;
// cout<<b;

// // cout<<"enter the char a,";
// // cin>>c;
// cout<<c;

// // cout<<"enter the float 334.23";
// // cin>>d;
// cout<<d;

// // cout<<"enter the char 14049.30493";
// // cin>>e;
// cout<<e;

//  Finding the Fundamental size of DataType
// cout<<"The Fundamental size of the int is : "<<sizeof(int)<<" bytes"<<endl;
// cout<<"The Fundamental size of the Float is : "<<sizeof(float)<<" bytes"<<endl;
// cout<<"The Fundamental size of the double is : "<<sizeof(double)<<" bytes"<<endl;
// cout<<"The Fundamental size of the long is : "<<sizeof(long)<<" bytes"<<endl;
// cout<<"The Fundamental size of the char is : "<<sizeof(char)<<" bytes"<<endl;
// cout<<"The Fundamental size of the string is : "<<sizeof(string)<<" bytes"<<endl;

// // write a program to cheak no is -ve or +ve
// findNgtndPostive();

// SHIFTING THE ARRAT FUNCTION EXAMPLE
// int n=6;
// int ary[5];
// cout<<"enter the element of the array :"<<endl;
// for(int i=0;i<5;i++){
//     cin>>ary[i];
// }
// cout<<"print the first arry"<<endl;
// for(int i=0;i<5;i++){
//     cout<<ary[i];
//     cout<<"\n";
// }

// ary[n]= shifting(ary);
// ary[0]=11;

// cout<<"the final array"<<endl;
// for(int i=0;i<5+1;i++){
//     cout<<ary[i];
//     cout<<"\n";
// }
// int i=2;
// while(i==1){
//     cout<<"Suraj";
// }

//     return 0;

// }

// =============================================================================
#include <iostream>
using namespace std;

void sort(int ary[], int ary2[], int n1, int n2)
{
    int n3 = n1 + n2;
    int ary3[n3];

    int i = 0; //   1 3 4 7 11
    int j = 0; //   2 4 6 13
    int k = 0;
    while (i < n3 && j < n1 && k < n2)
    {

        if (ary[j] > ary2[k])
        {
            ary3[i] = ary2[k];
            i++;
            k++;
        }
        else if (ary[j] == ary2[k])
        {
            ary3[i] = ary[j];
            ary3[i + 1] = ary2[k];
            i = i + 2;
            j++;
            k++;
        }
        else
        {
            //    cout<<"------>"<<ary[j]<<"-----"<<ary2[k]<<endl;
            ary3[i] = ary[j];
            i++;
            j++;
        }
    }
    if (j < n1)
    {
        while (j < n1)
        {

            // cout<<"=>"<<ary[j]<<endl;
            ary3[i] = ary[j];
            j++;
            i++;
        }
    }
    else if (k < n2)
    {

        while (k < n2)
        {
            ary3[i] = ary2[k];
            k++;
            i++;
        }
    }

    for (int i = 0; i < n3; i++)
    {
        cout << ary3[i] << " ";
    }
}

int main()
{
    // your code goes here

    int n1, n2;
    cin >> n1 >> n2;

    int ary[n1], ary2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> ary[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> ary2[i];
    }

    sort(ary, ary2, n1, n2);
    return 0;
}
