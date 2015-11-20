 /*for i = 2, 3, 4, ..., not exceeding √n:
  if A[i] is true:
    for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n :
      A[j] := false*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main()
  {
  	int t,i,j,k;
  	int *c = calloc(5000000,8);
  	for(i=2;i<=sqrt(5000000.0);i++)
  	{
  		if(c[i]==0)
  		{
  			for(j=i*2;j<=5000000;j+=i)
  			{
  				if((j-1)%4==0)
  					c[i]=1;
  			}
  		}
  	}
  	scanf("%d",&t);
  	for(i=0;i<t;i++)
  	{
  		int n;
  		scanf("%d",&n);
  		if(c[n]==1)
  			printf("YES\n");
  		else
  			printf("NO\n");
  	}
  }