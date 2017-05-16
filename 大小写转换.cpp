#include<stdio.h>
int main( )
{  char ch;
  printf("please input a letter£º");
scanf("%c",&ch);
if (ch>='A'&& ch<='Z')  ch=ch+32;
else  if (ch>='a'&& ch<='z')
         ch=ch-32       ;
printf("the converted letter is:%c\n",ch);
}

