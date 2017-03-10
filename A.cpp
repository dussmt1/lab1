#include<stdio.h>

int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		printf("%d",a);
		while(a>1)
		{
			if(a%2)
				a = 3*a + 1;
			else
				a>>=1;
			printf(" %d",a);
		}
		printf("\n");
	}
	return 0;
}
