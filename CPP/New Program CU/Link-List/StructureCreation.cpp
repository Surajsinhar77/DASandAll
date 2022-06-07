#include<iostream>
using namespace std;

struct NameofStructure{  // this is the way to create Structure
    int Sno ;
    char favchar;
    float marks;
    string Name;
    struct NameofStructure* nxt;
};

int main(){

    struct NameofStructure suraj;  // this way make an object of the or u called refrence
    suraj.Sno = 2;
    suraj.favchar = 'R';
    suraj.marks = 7.5;
    suraj.Name= "Suraj Sinha";


    cout<<suraj.Name<<endl;

    return 0;
}