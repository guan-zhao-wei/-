/*#include<stdio.h>
int Add(int x, int y, int z)
{
	int max = 0;
    int zhong = 0;
    int min = 0;
	if(x>=y)
	{
		if(x>=z)
		 max = x;
		else if(y>=z)
		{
		 zhong = y;
		 min = z;
		}
		else
		{
		zhong = z;
		min = y;
		}
	}
	else if(y>=z)
	{
		max = y;
		if(x>=z)
		{
			zhong = x;
			min = z;
		}
		else
		{
			zhong = z;
			min = x;
		}
		
	}
	return max;
	return zhong;
	return min;
}*/
//���������Ӵ�С��� 
/*#include<stdio.h>
int main()
{
    int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	scanf("%d%d%d", &a, &b, &c);
	if(a<b)
	    {
		    int i = a;
		    a = b;
		    b = i;     
	    }
	    
	if(a<c)
	{
		int i = a;
		a = c;
		c = i;
	}
	if(b<c)
	{
		int i = b;
		b = c;
		c = i;
	}
//	int Add(a, b, c);
//	printf("max=%d\n", max);
//	printf("zhong=%d\n", zhong);//���Զ���ĺ���̫���Ӳ�����ʹ�ã��Ҵ˴��Զ��庯��δ����Ǵ���� 
	printf("%d %d %d\n", a, b, c);
	return 0;
}*/ 

//���1��100��3�ı���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1;i<101;i++)
//	{
// 		if(i%3 == 0)
//		 printf("%d\n", i);
// 	}   
//	return 0;
//}
/*
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int m = 0;
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		int m = a;
		a = b;
		b = m;
	}
	for(i=a;i>0;i--)
	{
	    if(a%i==0&&b%i==0)
		{
		printf("���Լ��Ϊ��%d\n", i);
		break;
		}
	}
	return 0;
}
*/
//��Ϊ���������Լ���ķ��� 
/*
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int trp = 0;
	scanf("%d%d", &n, &m);
	if(n<m)
	{
		int trp = n;
		n = m;
		m = trp;
	}//��������ѭ��������ʹ�� 
	
    //while(n%m)//�˴�n%m����л������0����Ϊn%mΪ0Ϊ�߼����Զ�����ѭ���������Ϊ�����ѭ��
	//{
	//	int trp = n%m;
	//	n = m;
	//	m = trp; 
	//}

	for(;n%m;trp=n%m,n=m,m=trp)
	{
		;
	}
	printf("���Լ��Ϊ��%d\n", m); 
	return 0;
}*/
//�ҳ�1000-2000�����꣬�����ж�����1.�ܱ�4�����Ҳ��ܱ�100������2.�ܱ�400���� 
/*
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for(i=1000;i<2001;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
		{
		printf("����:%d\n", i);
		sum++;
		}
	}
	printf("����%d��\n",sum);
	return 0;
}*/
//��ӡ���� 

#include<stdio.h>
#include<math.h>//����sqrt��ѧ�⺯��
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	//for(i=100;i<=200;i++)
	for(i=101;i<=200;i+=2)//Ч������ 
	{
		//for(j=2;j<i;j++)
		for(j=2;j<=sqrt(i);j++)//sqrt��ѧ�⺯���������ǿ�ƽ�� 
		{
		    if(i%j==0)
		        break;
		}
		//if(j==i)
		if(j>sqrt(i))
		{
			printf("������%d\n", i);
			sum++;
		}
	}
	printf("���У�%d\n", sum);
	return 0;
}
