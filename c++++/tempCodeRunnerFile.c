//find prime number in number in c?
#include<stdio.h>

int prime(int n)
{
    int i, j, len=1, brk=0;
    int list[200]={2};
    for(i=2; i<=n; i++)
    {
        for(j=0; j<len; j++)
        {
            if(i%list[j]==0){
                brk=1;
                break;
            }
            else
            {
                brk=0;
            }
        }
        if(brk==0)
        {
            list[len]=i;
            len++;
        }
    }
    for(i=0; i<len; i++)
        printf("%d ",list[i]);
}

main()
{
    int i, n;
    scanf("%d",&n);
    prime(n);
}


