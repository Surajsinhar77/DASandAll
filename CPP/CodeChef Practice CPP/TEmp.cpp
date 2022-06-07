#include<iostream>
using namespace std;
class area {
	int length;
	int breadth;
	public:
	area(int l,int b){
        length=l;
        breadth=b;		
	}
	void returnnarea(){
		int a =length*breadth;
		cout<<"the area of the rectangle is "<<a<<endl;
	}
};

int main(){
	area obj(4,5);  	// this is how call constructor
// obj.area(4,5);   	// not this
obj.returnnarea();
	return 0;
}