#include<stdio.h>
int main()
{
    int num=0,sum=0,maxsum=0;
    while((scanf("%d",&num))!=EOF)
    {
        sum = sum + num;
        if(sum < 0)
        {
            sum = 0;
        }
        if(sum > maxsum)
        {
            maxsum = sum;
        }
        if(getchar()=='\n')
            break;
    }
    printf("%d",maxsum);
    return 0;
}