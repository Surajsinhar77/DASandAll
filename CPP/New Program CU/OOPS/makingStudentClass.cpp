using namespace std;
class Student{
    public:
    int age;

    private:
    int rollno;

    public:
    int getter(){
        return age;
    }

    void setter(int a, int roll){
        age = a;
        rollno = roll;
    }

    void display(){
        cout << age << endl;
        cout << rollno << endl;
    }
};
