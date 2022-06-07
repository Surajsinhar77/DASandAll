#include<iostream>
#include<conio.h>
using namespace std;
class one 
{
	int a,run;
	public:
		one(int x)
		{
			a=x;	
		}
		void first()
		{
				run=a/2;
					switch(run)
					{
							case 1:
								cout<<"5";
								break;
							case 2:
								cout<<"4";
								break;
							case 3:
								cout<<"3";
								break;
							case 4:
								cout<<"2";
								break;
							case 5:
								cout<<"1";
								break;						
					}
		}
};
int main()
{
	int q;
	cout<<"\n ENTER THE VALE FOR SWITCH CASE";
	cin>>q;
	one ob(q);
	ob.first();
	getch();
}			
