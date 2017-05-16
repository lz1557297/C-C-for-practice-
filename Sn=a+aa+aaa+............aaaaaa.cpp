#include <stdio.h>
int main()
{int n,a,l;
int k,t;
scanf("%d",&t);
for(k=1;k<=t;k++)
{
int i=1;
int sum=0;
scanf("%d %d",&a,&n);
l=a;
sum=a;
while (i!=n)
{l=10*l+a;
sum+=l;
i++;
}
printf("%d",sum);
}


}
