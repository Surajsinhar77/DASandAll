#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class first
{
	int a,b,res;
	public:
				
		
		void add()
		{	
				cout<<"ENTER THE VALUE OF A :\t";
				cin>>a;
				cout<<"ENTER THE VALUE OF B :\t";
				cin>>b;
			res=a+b;
			cout<<"\n THE RESULT OF addition IS = \t"<<res;
			
		}
		void sub()
		{
				cout<<"ENTER THE VALUE OF A :\t";
				cin>>a;
				cout<<"ENTER THE VALUE OF B :\t";
				cin>>b;
			res=a-b;
			cout<<"\n\n  THE RESULT OF subtraction IS :\t"<<res;
		}
		void mult()
		{	
			cout<<"ENTER THE VALUE OF A :\t";
				cin>>a;
				cout<<"ENTER THE VALUE OF B :\t";
				cin>>b;
			res=a*b;
			cout<<"\n\n  THE RESULT OF multipliction IS :\t"<<res;
		}
		void div()
		{	
				cout<<"ENTER THE VALUE OF A :\t";
				cin>>a;
				cout<<"ENTER THE VALUE OF B :\t";
				cin>>b;
			res=a/b;
			cout<<"\n\n  THE RESULT OF division IS :\t"<<res;
		}
		void power()
		{	
				cout<<"ENTER THE VALUE OF A :\t";
				cin>>a;
				cout<<"ENTER THE VALUE OF B :\t";
				cin>>b;
			res=pow(a,b);
			cout<<"\n\n  THE RESULT OF power IS :\t"<<res;
		}
};

int main()
{
	int index;
	int a;
while(a!=0)
{
		
	cout<< " \n\n PRESS 1 FOR ADD \n PRESS 2 FOR SUB \n PRESS 3 FOR MULT \n PRESS 4 FOR DIV \n PRESS 5 FOR POW \n PRESS 0 FOR EXIT \n \n";
	cin>>a;
		
	first ob;

	index=a;
	switch(index)
	{
			case 1:
					ob.add();
					break;
			case 2:
					ob.sub();
					break;
			case 3:
					ob.mult();
					break;
			case 4:
					ob.div();
					break;
			case 5: 
					ob.power();
					break; 
			case 0:
					cout<<"\nTHANK YOU FOR USING CALCULATER ";
					break;
	}
}
	getch();
}

