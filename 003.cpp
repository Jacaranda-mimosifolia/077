#include<stdio.h>
#include<math.h>
#define len 10
int main()
{
	for(int i=0;i<len;i++)
	{
		float m;
		static int numble[len];
		printf("请输入一个数:");
		scanf("%f",&m);
		int n=m,j=0;
		for(int i=1;i<=m;i++)
		{
			if(n%i==0)
			{
				numble[j]=i;
//				printf("numble[%d]=%d\n",j,numble[j]);
				j++;
			}
		}
		if(j==2)
		{
			printf("素数:%d\n\n",n);
		}
		else
		{
			printf("%d不是一个素数\n\n",n);
		}
		
	}
	return 0;
}

