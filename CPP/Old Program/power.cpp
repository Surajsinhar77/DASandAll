#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class one 
{
	int p,q,result;
	public:
		one(int a,int b)
		{
						p=a;
						q=b;
		}
		void power()
		{
				result=pow(p,q);
				cout<<"\n THE POWER OF TWO NUM IS : "<<result;
		} 	
};
void main()
{
	int x,y,result;
	cout<<"ENTER THE VALUE OF p :\t";
	cin>>x;
	cout<<"ENTER THE VALUE OF q :\t";
	cin>>y;
	one ob(x,y);
	ob.power();
	return 0;
	getch();
}
