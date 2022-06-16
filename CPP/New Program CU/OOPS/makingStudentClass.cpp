using namespace std;
class Student{
    public:
    int sno;
    int age;

    private:
    int rollno;

    public:
    // Public Destructors 
    ~Student(){
        cout << "Destructor" <<endl;
    }

    // Parameterize Constructor
    Student(int a,int rol){
        age = a;
        rollno = rol;
    }

    Student(int age,int rollno,int sno){          // using this keyword beacause instant variable
        this->sno = sno;                          // name and formal variable names are same this 
        this->age = age;                          // keyword belong to same/base class of refrence
        this->rollno = rollno;
    }

    // This is how to make Destructor to delocate memory from objects 
    
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
