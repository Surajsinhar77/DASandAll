#include<iostream>
#include "makingStudentClass.cpp"

using namespace std;

int main(){
    
    Student s1;

    s1.age = 77;

    cout<< s1.getter() << endl;

    s1.setter(88,26);

    s1.display();
    return 0;
}