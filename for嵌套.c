#include <stdio.h>
int main()
{
	int i,j;//������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
	for(i=2;i<100;i++)
	{
		for(j=2;j<=(i/j);j++)
		if(!(i%j))break;
		if(j>(i/j))printf("%d������\n",i);
	}
	return 0;
}
