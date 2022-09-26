#include <iostream>
using namespace std;

template <typename T>

class stack{
    T * dataAry;
    T nextindex;
    T capicity;
    public:

    stack(){
        dataAry = new T[4];
        capicity = 4;
        nextindex = 0;
    }

    T top(){
        if(!isEmpty()){
            return dataAry[nextindex-1];
        }
        cout << "stack is empty" << endl;
        return 0;
    }

    int size(){
        if(!isEmpty()){
            return nextindex;
        }
        return -1;
    }

    void push(int data){
        if(capicity==nextindex){
            int * newData = new int[capicity*2];
            for(int i =0; i<size(); i++){
                newData[i] = dataAry[i];
            }
            capicity = capicity*2;
            delete [] dataAry;
            dataAry = newData;
        }
        dataAry[nextindex] = data;
        nextindex++;
    }

    T pop(){
        int prev = dataAry[nextindex-1];  
        nextindex--;
        return prev; 
    }

    bool isEmpty(){
        if(nextindex == -1){
            return true;
        }
        return false;
    }
};