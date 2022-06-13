using namespace std;
class Student{
    public:
    int age;

    // private:
    int rollno;


    public:

    // Parameterize Constructor
    Student(int a,int rol){
        age = a;
        rollno = rol;
    }

    int getter(){
        return age;
    }

    void setter(int a, int roll){
        age = a;
        rollno = roll;
    }

    void display(){
        cout << age <<" "<< rollno <<endl;
    }
};
