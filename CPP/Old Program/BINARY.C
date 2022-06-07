//binary search//

#include<stdio.h>
#include<conio.h>
int main()
{
int a[30],n,i,l,u,m,item,loc=0;

printf("\t enter the range of an array\n");
scanf("\n %d",&n);
printf("\t enter the sorted element\n");
	for(i=0;i<n;i++)
	  	{
	    		scanf("\t %d",& a[i]);
	  	}


							printf("\t enter the item to search\n");
							scanf("\t %d",&item);
							
							
		 
		 u=a[0];
		 l=a[n];
		 
		  while(u>=l)
		  {
		      						m=(u+l)/2;
		    
		      	if(item==a[m])
		      	{
		      			loc=a[m];
		      			printf(" \t item is found %d",loc);
		      	}

		      			else if(item>a[m])
		      			{
			    				u=m+1;
		        		}
		        
				else
								
				      		l=m-1;
				
			    if(loc==0)

		          		printf("\t item is not found");
		          		
		}
		      

getch();
}

