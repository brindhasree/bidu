#include <stdio.h>
int main()
 {
	int a[10],i,n,j,cnt=0,t,b[10],k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
  if(a[i]==i)
	{
	++cnt;
	if(cnt>0)
	{
	k++;
	b[k]=a[i];
    }
}
    for(i=1;i<=k;i++)
	{for(j=i+1;j<=k;j++)
	{
	if(b[i]>b[j])
	{
	t=b[i];
	b[i]=b[j];
	b[j]=t;
	}
	}
}
	for(i=1;i<=k;i++)
	{
	printf("%d\n",b[i]);
	}
    if(cnt==0)
    printf("'-1'");
return 0;
}
