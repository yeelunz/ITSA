#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char b[64];
    scanf("%d", &a);
    sprintf(b, "%d", a);
    for (int i = 0;i<(strlen(b))/2;i++)
    {
        if(b[i]!=b[strlen(b)-1-i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}