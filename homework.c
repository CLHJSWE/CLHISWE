//第一次作业 
//5.4
#include <stdio.h>
#include <string.h>
#include <math.h>

void fun_5_4()
{
	int a;
	if(a<0)
		printf("<0\n");
	else if(a==0)
		printf("0\n");
	else
		printf(">0\n");
}
void fun_5_6()
{
	char ch;
	if(ch>='A' && ch<='Z')
		ch+=32;
	else if(ch>='a' && ch<='z')
		ch-=32;
	printf("%c",ch);
}
void fun_5_9()
{
	char str[11];
	int i;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(i==4 || i==7)
			continue;
		if(str[i]<'0' || str[i]>'9')
			break;
	}
	if(i<=strlen(str))
	{
		printf("Format error.\n");
		return;
	}
}
void fun_5_10()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(!(a+b>c && a+c>b && b+c>a))
		printf("Can\'t forming a triangle.\n");
	else
	{
		printf("%lf %lf %lf\n",pow(a,2),pow(b,2),pow(c,2));
		printf("%d\n",pow(a,2)+pow(b,2)==pow(c,2));
		if(pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(b,2)+pow(c,2)==pow(a,2))
			printf("Right triangle.\n");
		else if(1)
			printf("Acute triangle.\n");
		else
			printf("Obtuse triangle.\n");
	}
}

int main()
{
	fun_5_10();
	return 0;
}




//第二次作业
