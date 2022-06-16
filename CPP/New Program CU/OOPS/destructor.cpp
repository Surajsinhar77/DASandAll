#include<iostream>
#include "makingStudentClass.cpp"
using namespace std;

int main(){

    Student obj(67,8);
    Student obj1(99,2);

    Student *obj2 = new Student(56,1);  // this is how to make Make object of dynamic
    
    //delete obj2; //Delocate or Destroctor dynamic Objects
    return 0;
}