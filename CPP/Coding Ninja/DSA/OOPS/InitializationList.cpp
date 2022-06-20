#include<iostream>
using namespace std;
class Student{
    
    int age;
    const int rollno;
    int &x;   // need to be reference of the age 

    //Initialization List 
    //1. To use initialization List We must to uset this formate after arguments  : age(age), rollno(rollno) // colen is nesseary and outside age is instant variable of the class and the inside bracket age is argument age  // age(age)

    //2. Line no 15 how we use initialization list to inslize the variable at the time of creation which ideal user for inslize the const variable and the refrence varaible

    public:
    Student(int age, int rollno) : age(age), rollno(rollno), x (this-> age) {
        
    }

    void Display(){
        cout << "Age => " <<age << "  " << "Roll-No => " <<rollno <<endl;
    }
};

int main(){
    
    Student ob1(17,37);

    ob1.Display();
    return 0;
}