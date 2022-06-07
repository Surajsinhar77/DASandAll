#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int a,b,res;
	public:
		void add(int x,int y)
		{
			a=x;
			b=y;
			res=a+b;
			cout<<"\nTHE ADDITION OF TWO NUM IS :\t"<<res;
		}
};
class B:public A
{
	int a,b,res;
	public:
		void sub(int x,int y)
		{
			a=x;
			b=y;
			res=a-b;
			cout<<"\nTHE SUBTRACT OF TWO NUM IS :\t"<<res;
		}
};
class C:public B
{
	int a,b,res;
	public:
		void mult(int x,int y)
		{
			a=x;
			b=y;
			res=a*b;
			cout<<"\nTHE MULTIPLY OF TWO NUM IS :\t"<<res;
		}
};
class D:public C
{
	int a,b,res;
	public:
		void div(int x,int y)
		{
			a=x;
			b=y;
			res=a/b;
			cout<<"\nTHE DIVISION OF TWO NUM IS :\t"<<res;
		}
};
int main()
{
	int p,q;
	
	D ob;
	
	cout<<"ENTER THE VALUE OF A :\t";
	cin>>p;
	cout<<"ENTER THE VALUE OF A :\t";
	cin>>q;
	ob.add(p,q);
	ob.sub(p,q);
	ob.mult(p,q);
	ob.div(p,q);
	
	getch();
		
	
}
