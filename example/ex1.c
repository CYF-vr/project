//Сѧ������ϵͳ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b,c,d,x,i,wrongtime,temp,grade,m;
	d=-1;
	i=1;
	grade=0;
	printf("		Сѧ��50���ڼӼ�������ϵͳ		\n");
	printf("��ʼ���⣺\n");
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
	           printf("��%d�� %d+%d=",i,a,b);
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
		           printf("��%d�� %d-%d=",i,a,b);
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
			    printf("�ش���ȷ��\n");
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
                    printf("���λش���󣡱������ȷ��Ϊ%d\n",c);
				    break;
				}
			    else
				{
	   	            printf("�ش��������������𰸣�");
			        scanf("%d",&d);
				}
			}
		 }
	   }
	}while(i>0&&i<11);
	if(i==11)
		printf("���β��Խ��������Ĳ��Խ��Ϊ��");
    m=grade/10;
	switch(m)
	{
	   case 10:
	   case 9:printf("%d��------------SMART\n",grade);
		   break;
	   case 8:printf("%d��------------GOOD\n",grade);
		   break;
	   case 7:printf("%d��------------OK\n",grade);
		   break;
	   case 6:printf("%d��------------PASS\n",grade);
		   break;
	   case 5:
	   case 4:
	   case 3:
	   case 2:
	   case 1:
	   case 0:printf("%d��------------TRY AGAIN\n",grade);
	};
	return 0;
}