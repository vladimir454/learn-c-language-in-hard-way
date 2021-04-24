#include<stdio.h>
#include<math.h> // ejercio serie 2 0,0,0,0,1,1,1, dividir el tamano total en 2
int main()
{
	int n=13,i,c=0,s,d,r,u=1,a=0;

	for(i=1;i<=n; i++) //avanza hasta 10
	{	
		d=n%2;
		r=n/2;
		s=r+d;
		
		
		if(c<s)
		{
			printf("%i",a);
			c=c+1;
		}
		else 
		{
			printf("%i",u);
		}

		
	
	}
