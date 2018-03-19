#include <stdio.h>
int divide(int nu,int de)
{
    
    int count = 0;
    while(nu>0)
    {
        nu= nu-de;
        count++;
    }
    if(nu<0)
    return count-1;
    else
    return count;
}

int main()
{
    int n,a,b;
    scanf("%d%d",&a,&b);
n=divide(a,b);
printf("%d",n);

    return 0;
}
