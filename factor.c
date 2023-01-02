#include <stdio.h>

int B(int x,int y)
{
if(x%y==0)
{ 
return y;
}

else

return B(y,x%y);

}

int main()
{
printf("Input 2 Values!\n");

int a,b;

scanf("%d %d",&a, &b);

int temp;
int s;
int w;

s=a;
w=b;

if(b>a)
{
temp=a;
a=b;
b=temp; 
}

printf("Highest common factor( %d , %d ) = %d\n",s , w, B(a,b));
}
