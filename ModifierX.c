#include<stdio.h>
int main()
{
	int i =10;
	int j=-10;
	int k=+10;

	signed int a=10;   // 1 bit is reserved 
	signed int b=-10;
	signed int c=+10;	

	unsigned int x=10;  // all 32 bit is usable
	unsigned int y=+10;
	unsigned int z=-10;

	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",b);

return 0;
}