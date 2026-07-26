#include<stdio.h>
int main()
{
  int num,reverese=0,rem;
printf("enter the numnber: ");
scanf("%d",&num);

while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/2;
}
printf("reversed numnber =%d",num);
return 0;
}
