#include<stdio.h<
int main()
{
  int num,temp,reverse=0,rem;
printf("enter the number: ");
scanf("%d",&num);

temp=num;
while(temp!=0)
{
rem=temp%10;
reverse=reverse*10+rem;
temp/=10;
}
if(num==reverse)
  printf("%d is a polindome Number\n",num);
else
  printf("%d is not a polindrome\n",num);
return 0;
}
