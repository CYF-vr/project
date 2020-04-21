//小学生测试系统
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b,c,d,x,i,wrongtime,temp,grade,m;
	d=-1;
	i=1;
	grade=0;
	printf("		小学生50以内加减法测试系统		\n");
	printf("开始答题：\n");
	do
	{
	   srand(time(NULL));
	   a=rand()%51;
	   b=rand()%51;
   	   x=rand()%2;
	   if(x==0)
	   {
		   if((a+b)>=0&&(a+b)<=50&&a>=0&&b>=0)
		   {
	           printf("第%d题 %d+%d=",i,a,b);
	           c=a+b;
               scanf("%d",&d);
		       i++;
		   }
	   }
	   if(x==1)
	   {
		   if(a<b)
		   {
			   temp=a;
			   a=b;
			   b=temp;
		   }
		   else
		   {
			   if((a-b)>=0&&(a-b)<=50&&a>=0&&b>=0)
			   {
		           printf("第%d题 %d-%d=",i,a,b);
		           c=a-b;
                   scanf("%d",&d);
		           i++;
			   }
		   }
	   }
	   if(d!=-1)
	   {
	     for(wrongtime=1;wrongtime<=3;wrongtime++)
		 {
	        if(d==c)
			{
			    printf("回答正确！\n");
				d=-1;
			    if(wrongtime==1)
				    grade+=10;
			    else if(wrongtime==2)
				    grade+=7;
			    else
				    grade+=5;
			    break;
			}
	        else
			{
			    if(wrongtime==3)
				{
                    printf("三次回答错误！本题的正确答案为%d\n",c);
				    break;
				}
			    else
				{
	   	            printf("回答错误！请重新输入答案：");
			        scanf("%d",&d);
				}
			}
		 }
	   }
	}while(i>0&&i<11);
	if(i==11)
		printf("本次测试结束！您的测试结果为：");
    m=grade/10;
	switch(m)
	{
	   case 10:
	   case 9:printf("%d分------------SMART\n",grade);
		   break;
	   case 8:printf("%d分------------GOOD\n",grade);
		   break;
	   case 7:printf("%d分------------OK\n",grade);
		   break;
	   case 6:printf("%d分------------PASS\n",grade);
		   break;
	   case 5:
	   case 4:
	   case 3:
	   case 2:
	   case 1:
	   case 0:printf("%d分------------TRY AGAIN\n",grade);
	};
	return 0;
}