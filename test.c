#include<studio.h>
int main()
{
	for(int x=2;x<=9;x++)
	{
		for(int y=2;y<=9;y++)
		{
			printf("%d x %d = %d\n",x,y,x*y);
		}
		printf("\n");
	}
	return 0;
}