#include<iostream>
#include "makingStudentClass.cpp"

using namespace std;

int main(){
    
    // Creating object s1 of Student Class
    Student s1;
    s1.age = 77;
    cout<< s1.getter() << endl;
    s1.setter(88,26);
    s1.display();

    // Dynamic Object Creation  

    Student *s2 =  new Student;   // 1) both allow
    Student *s3 =  new Student(/*Value, value2 */);     // 2)

    s2->setter(72, 23);   // 1) allow 
    s2->display();

    (*s3).setter(88,61);  // 2) allow
    (*s3).display();

    return 0;
}