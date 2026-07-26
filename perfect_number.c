#include<stdio.h>
int main()
{
  int num,i,sum=0;
printf("enter the number: ");
scanf("%d",&num);

for(int i=0;i<num;i++)
{
if(num%i==0)
  sum=sum+i;
}
if(sum==num)
  printf("%d is perfect number\n",num);
else
  printf("%d is a not a perfect number\n,num);
    }
