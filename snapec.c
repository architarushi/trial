#include<stdio.h>
#include<math.h>
int t;
float rs1,rs2,ls,b;
float mi()
{
    float ans;
    ans=(ls*ls)-(b*b);
    ans=sqrt(ans);
    return ans;
}
float ma()
{
    float ans;
    ans=(ls*ls)+(b*b);
    ans=sqrt(ans);
    return ans;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f %f",&b,&ls);
        rs1=mi();
        rs2=ma();
        printf("%f %f\n",rs1,rs2);
    }
    return 0;
}

