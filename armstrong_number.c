#include<stdio.h>
int main()
{
  int num,temp,rem,sum=0;

printf("enter the number: ");
scanf("%d",&num);

temp=num;
while(num!=0)
{
rem=temp%10;
sum+=rem*rem*rem;
temp/=10;
}

if(sum==num)
  printf("%d is Armstrong number\n",num);
else
  printf("%d is not a armstrong number\n,num);
    return 0;
    }
    

