#include <stdio.h>

long long int stepN(int n)
{
	if(n>1)
		return n*stepN(n-1);
	else
		return 1;
}

void hanoi(char a,char b,char c,int n)
{
	if(n!=1)
	{
		hanoi(a,c,b,n-1);
		hanoi(a,b,c,1);
		hanoi(b,a,c,n-1);
	}
	else
	{
		printf("%c -> %c\n",a,c);
	}
}
int sigma(int n)
{
	int s=n;
	while(--n)
		s+=n;
	return s;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void permutations(int *arr,int m,int i)
{
	if(i<m)
	{
		swap(arr,arr+i);
		permutations(arr,m-1,i);
		swap(arr,arr+i);
	}
	else
	{
		
	}
}


int main()
{
	int arr[3]={1,2,3};
	permutations(arr,3,0);

	getchar();
	return 0;
}