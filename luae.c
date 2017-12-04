#include <stdio.h>
int main(void)
{
	int i,str[20000];
	for(i=0;;i++)
    {
        scanf("%d",&str[i]);
        if(str[i]==42)
            break;
    }
    i=0;
	while(str[i]!=42)
	{
        printf("%d\n",str[i]);
        i++;
	}

	return 0;
}
