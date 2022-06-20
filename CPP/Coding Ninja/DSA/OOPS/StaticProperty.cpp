#include<iostream>
using namespace std;

class Student{

    // if static member is Private then we must need a public function bt its type should be static (Static functions )
    static int totalNoOffStudent;

    public:
    int age;
    int rollno;

    //static int totalNoOffStudent;  // i want this is same for all objects so that this is must be only in the class 

    // if i want ki totalNoOffStudent always increment ho jaye jab bhi naya object bane to muje mujjhe constructor ki help lena hoga becasue constructor all call wheneven object created.

    Student(){
        totalNoOffStudent++;
    }

    void Display(){
        cout<< age <<" <- age "<<rollno<<" <- rollno "<<totalNoOffStudent<<" <- totalNo "<<endl;
    } 

    static int accessStaticMenber(){
        return totalNoOffStudent;
    }
};

// to initialize the static property use double collen (::) <- scope resolution oprator 
int Student :: totalNoOffStudent = 0;   // initialization the Static property

int main(){
    Student s1;
    
    Student s2,s3,s4,s5;
    s1.Display();

    //cout<<s1.totalNoOffStudent<<endl; // u can acces the value of the static member but it's this is not a ideal way

    //s4.totalNoOffStudent = 21;  // it is also possiable // ideal not good
    // ideal way to acces is :
    //cout<<s5.totalNoOffStudent<<endl;  

    //cout<<Student::totalNoOffStudent<<endl;

    // calling static function to read the static property of the class, becasue to read static property of the class we don't need any objects
    cout<<Student::accessStaticMenber()<<endl;    
    return 0;
}