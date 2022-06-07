#include<iostream>
#include<conio.h>
using namespace std;

class first
{
	int a[20],n,i,sum;
	public:
			first(int x)
			{
				sum=0;
				n=x;
			}
				void array()
				{		  		
				  		cout<<"ENTER THE ELEMENT OF ARRAY \n \n";
				  			for(i=0;i<n;i++)
				  			{
				  				cin>>a[i];
							}
				}
				
			void display()
			{
				for(i=0;i<n;i++)	
				{
					cout<<"\t"<<a[i];
				}	
			}	
};
int main()
{
	int p;
	
	cout<<"\t ENTER THE SIZE OF ARRAY";
	cin>>p;
	first ob(p);
	ob.array();
	ob.display();
}

