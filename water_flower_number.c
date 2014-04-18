#include<stdio.h>
#include<math.h>
int check_nu(int a)
{
	int i=0;
	int k;
	int j=a;
	while(a)
	{
		k=a%10;
		i=i+k*k*k;
		a=a/10;
	
	}
	if(i==j)
	return 1;
	else
	return 0;
}
int main()
{
	int j;
	for(j=100;j<10000;j++)
	{
		if(check_nu(j)==1)
		     {
		         printf("  %d ",j);
			 }
	}
	return 0;
}
