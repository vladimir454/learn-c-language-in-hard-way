#include<stdio.h>
#include<math.h>
int main()
{
	int n=8,i,c=0,x=0;

	for(i=1;i<=40; i++) //avanza hasta 10
	{
		switch(x)
		{
			case 0:
			if(c<3)
			{		
				c=c+1;				
			}
			else
			{
				c=3;
				x=x+1;
			}
			printf("%i ",c);
			break;
			
			case 1:
			if(c>0)
			{		
				c=c-1;				
			}
			else
			{
				c=1;
				x=x-1;
			}
			printf("%i.",c);
			break;	
				
		}	
			
		
		

			
	
	}
	


	

	
}
