#include<stdio.h>
int a[50],max,t,n;
int gcd()
{
    int i=0,f=0,h=1,j=0;
    for(i=1;i<=max;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
                f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
            h=i;
    }
    return h;
}
int main()
{
    int i=0,h=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max=a[0];
        for(i=0;i<n;i++)
            if(a[i]>max)
            max=a[i];
        h=gcd();
        for(i=0;i<n;i++)
            printf("%d ",a[i]/h);
            printf("\n");
    }
    return 0;
}
