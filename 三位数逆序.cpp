#include <stdio.h>
int main()
{int a,b,c,t;
printf("输入三个数字\n");
scanf("%d%d%d",&a,&b,&c);
t=c;
c=a;
a=t;
printf("逆序输出为%d %d %d",a,b,c);
return 0;

}
