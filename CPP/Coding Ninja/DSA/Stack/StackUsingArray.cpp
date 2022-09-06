#include<climits>
using namespace std;
class Stack{
    int * data ;
    int nextElement;
    int totalSize ;

    public:
        Stack(){
            data = new int[4];
            nextElement = 0;
            totalSize = 4;
        }

        bool isEmpty(){
            if(nextElement==0){
                return true;
            }else{
                return false;
            }
        }

        int sizeOfStack(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return INT_MIN;
            }else{
                return nextElement;
            }
        }

        int top(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return INT_MIN;
            }
            return data[nextElement-1];
        }

        void push(int element){
            if(totalSize==nextElement){
                int * newData = new int[totalSize*2];
                for(int i = 0; i<totalSize; i++){
                    newData[i] = data[i];
                }
                delete [] data;
                data = newData;
            }
            data[nextElement] = element;
            nextElement++;
        }

        int pop(){
            if(isEmpty()){
                cout<<"Stack is Empty"<<endl;
                return INT_MIN;
            }
            nextElement--;
            return data[nextElement];
        }

};