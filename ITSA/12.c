#include<stdio.h>
#include<math.h>



int rec(int a)
{
    if(a==1 || a==0)
        return a + 1;
    return (rec(a - 1) + rec((floor(a / 2))));
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", rec(a));
}