#include<iostream>
// #include "StudentClass2.cpp"
#include <string.h>
using namespace std;

class Studentcl{

    int rollno;
    char *name;

    public:
    Studentcl(int rollno, char *name){
        //Shallow Coping 
        // this->name = name;

        //Deep copy
        this->name  = new char[strlen(name)+1];
        strcpy(this->name,name);
        this->rollno = rollno;
    }

    // Studentcl(int age, char *name){
    //     //Deep copy 

    //     this->name  = new char[strlen(name)+1];
    //     strcpy(this->name,name);
    //     this->rollno = age;
    // }

    // Manual Copy constructor  with Deep copy 

    Studentcl(const Studentcl &s){
        this->rollno = s.rollno; 
        this->name = new char[strlen(s.name)+1];
        strcpy(name,s.name);
    }

    void display(){
        cout <<name<<" "<< rollno <<endl;
    }
};

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