#include <stdio.h>

int hcf(int, int);

int main()
{
    int num1, num2,k,t,i;

   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
    scanf("%d %d", &num1, &num2);

    k=hcf(num1,num2);
    printf("%d\n",2*k);
   }
    return 0;
}

int hcf(int x, int y)
{
    if (x % y == 0|| x==0 || y==0)
        return y;
    else
        return hcf(y, x % y);
}
