#include<iostream>
#include "makingStudentClass.cpp"
using namespace std;

int main(){
    // Student ob;

    // ob.setter(23,56);
    // cout<<"ob : ";
    // ob.display();

    // Student ob2(ob);  // In Built Copy Constructor 

    // cout<<"ob2 : ";
    // ob2.display();

    // Student ob3 = ob2;  // copy Constructor call Ho jayega
    
    // cout<<"ob3 : ";
    // ob3.display();

    // // Dynamically Copy Constructor 
    // Student *ob5 = new Student(45,67);

    // ob5->setter(45,67);

    // cout<<"ob6 : ";
    // Student ob6(*ob5);  // Second way to 
    // ob6.display();

    // -------------------------------------------------------------------------------------
    // Copy constructor After Creation of the Objects 

    Student ob1(12,78);

    ob1.display();
    Student ob8(87,12);
    
    ob8 = ob1; 
    ob8.display();

    return  0;
}