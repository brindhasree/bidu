
#include<stdio.h>
int main()
{
int n,n1[10],n2,i,j,t;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&n1[i]);
}
scanf("%d",&n2);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(n1[i]>n1[j])
{
t=n1[i];
n1[i]=n1[j];
n1[j]=t;
}
}
}
printf("%d",n1[n2]);
return 0;
}
