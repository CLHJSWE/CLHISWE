#include <stdio.h>

int judge(int a[][16],int i,int j)
{
	int i,j,b[4][4];
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			b[i][j]=a[i][i*4+j];
	
	
	
	
	 
	
	return 0;
}


int main()
{
	int T,i,j,count;
	char a[20][16]; 
	
	scanf("%d%c",&T);
	
	for(i=0;i<T;i++)
		for(j=0;j<16;j++)
			scanf("%c",*(a+i)+j);
	
	for(i=0;i<T;i++)
	{
		count=0;
		for(j=0;j<16;j++)
		{
			printf("%c ",a[i][15]);
			if(a[i][j]=='.' && judge(a,i,j)==0)
				count++;
		}
		printf("%d\n",count);
	}
	
	return 0;
}
