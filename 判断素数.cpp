#include<stdio.h>
int main()
{
int k,a;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
k=2;
while(k<a)
{
if(a%k==0)
break;
k++;
}
if(k==a)
printf("Y\n",a);
else
printf("N\n",a);
}


}
