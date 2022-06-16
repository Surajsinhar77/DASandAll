#include<iostream>
#include "StudentClass2.cpp"



using namespace std;

int main(){
    char nam[] = "abcd";
    
    Studentcl s1(20,nam);

    

    nam[3] = '5'; 
    Studentcl s2(21,nam);

    s1.display();
    s2.display();

    Studentcl s3(s1);


    s3.display();

    return 0;
}