#include <stdio.h>
int main()
{
	int i,j;//质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
	for(i=2;i<100;i++)
	{
		for(j=2;j<=(i/j);j++)
		if(!(i%j))break;
		if(j>(i/j))printf("%d是质数\n",i);
	}
	return 0;
}
