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

    // Student *ob7 = new Student(78,90);

    // // Dual Dymamic Copy Constructor
    // Student *ob8 = new Student(*ob7); 


    // -------------------------------------------------------------------------------------
    // Copy constructor After Creation of the Objects 

    // Student ob1(12,78);

    // ob1.display();
    // Student ob8(87,12);
    
    // ob8 = ob1; 
    // ob8.display();

    // //  Copy constructor After Creation of the Objects 

    // Student *ob9 = new Student(90,56);

    // Student *ob10  = new Student(34,4);

    // (*ob10) = (*ob9);

    // ob10->display();


    // Importance 

    Student s1();           // constructor 1

    Student s2(67);         // Constructor 2

    Student s3(61, 78);     // Constructor 3

    Student s5(s2);         // Copy Constructor 

    Student s4 = s1;        // Copy Constructor 

    Student s6(32)          // Constructor 2

    s6 = s1;                // Copy Assignment

    *s6 = *s1               // copy assignment dor dynamic 

    *s6 = s2                // copy assignment dor dynamic

    
    return  0;
}