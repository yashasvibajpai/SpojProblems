#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    printf("W");
    while(i!=0)
    {
        printf("O");
        i--;
    }
    printf("W/n");
    printf("This is awesome");
    return 0;
}
