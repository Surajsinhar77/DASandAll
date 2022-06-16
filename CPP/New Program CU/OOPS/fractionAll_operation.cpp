#include<iostream>
using namespace std;

class Fraction{

    private:
    int nemenator;
    int deminator;

    public:

    Fraction(int nemenator, int deminator){
        this->nemenator = nemenator;
        this->deminator = deminator;
    }
    
    void Simplilyfi(){
        int gcd = 1;
        int j = min(nemenator,deminator);

        for(int i =1; i<j; i++){
            if(nemenator%i == 0 && deminator%i == 0){
                gcd = i;
            }
        }
        nemenator = nemenator/gcd;
        deminator = deminator/gcd;
    }

    void Add(Fraction f2){
        int lcm = deminator * f2.deminator;
        int x =  lcm/deminator;
        int y =  lcm/f2.deminator;

        int result = (x*nemenator + (y*f2.nemenator))/lcm;

        nemenator = lcm;
        deminator = result;

        Simplilyfi();
    }

    void print(){
        cout<<nemenator<<"/"<<deminator<<endl;
    }

};

int main(){
    
    Fraction f1(6,2);
    Fraction f2(12,4);
    
    f1.Add(f2);
    f1.print();

    return 0;
}