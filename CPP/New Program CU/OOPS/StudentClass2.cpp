using namespace std;
#include <string.h>
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
