#include<stdio.h>
long int f(long int x)
{ 
if(x==1)
return 1;
if(x==2)
return 1;
if(x==0)
return 0;
else
return f(x-1)+f(x-2);
}

int main()
{
int a,i;
scanf("%d",&a);
 if(a<0)
 {printf("ÇëÖØÐÂÊäÈë\n");
 }
 else
 {
	 for(i=1;i<a;i++)
	 {
     printf("%d,",f(i));
	 }
if(i=a)
printf("%d\n",f(i));
system("pause");
return 0;
 }
}
