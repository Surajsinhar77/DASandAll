#include<iostream>
using namespace std;

class Student{
    int age;
    int rollno;

    public:
    // constant function are the those function which are not allow to change the property of this or u can say instance variable and function

    Student(){

    }

    Student(int age, int rolno){
        this->age = age;
        this->rollno = rolno;
    }    

    int getAge() const {
        return age;
    }
    
    int getRollno() const{
        return rollno;
    }

    void setAge(int age){
        this->age = age;
    }

    void setRollno(int rollno){
        this->rollno = rollno;
    }
};

int main(){
    
    // Objects can also be the constant so that from the that objctes reading is only allow.

    const Student ob1;  // So from this object only constant function are allow to call 
    cout << ob1.getAge() <<" "<<ob1.getRollno()<<endl;


    // without constant object can allow to read the Constant function 
    Student ob2(17,19);
    cout << ob2.getAge()<<" "<<ob2.getRollno() <<endl;
    return 0;
}