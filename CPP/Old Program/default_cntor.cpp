#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int a,b,res;
	public:
	A(int x,int y)
	{
		res=20;
		
	}
	void add()
	{
		cout<<"\n Printing the result";
		res=a+b;
		cout<<"\n Result is : => "<<res;
	}
};
int main()
{
	
	A ob(3,3);
	getch();
}
