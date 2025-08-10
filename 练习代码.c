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
//将三个数从大到小输出 
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
//	printf("zhong=%d\n", zhong);//用自定义的函数太复杂不建议使用，且此处自定义函数未完成是错误的 
	printf("%d %d %d\n", a, b, c);
	return 0;
}*/ 

//输出1到100中3的倍数
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
		printf("最大公约数为：%d\n", i);
		break;
		}
	}
	return 0;
}
*/
//较为简洁的找最大公约数的方法 
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
	}//下面两个循环都可以使用 
	
    //while(n%m)//此处n%m不用谢不等于0是因为n%m为0为逻辑假自动跳出循环，有余便为真继续循环
	//{
	//	int trp = n%m;
	//	n = m;
	//	m = trp; 
	//}

	for(;n%m;trp=n%m,n=m,m=trp)
	{
		;
	}
	printf("最大公约数为：%d\n", m); 
	return 0;
}*/
//找出1000-2000的闰年，闰年判定调节1.能被4整除且不能被100整除。2.能被400整除 
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
		printf("闰年:%d\n", i);
		sum++;
		}
	}
	printf("共有%d年\n",sum);
	return 0;
}*/
//打印素数 

#include<stdio.h>
#include<math.h>//引用sqrt数学库函数
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	//for(i=100;i<=200;i++)
	for(i=101;i<=200;i+=2)//效率提升 
	{
		//for(j=2;j<i;j++)
		for(j=2;j<=sqrt(i);j++)//sqrt数学库函数的作用是开平方 
		{
		    if(i%j==0)
		        break;
		}
		//if(j==i)
		if(j>sqrt(i))
		{
			printf("素数：%d\n", i);
			sum++;
		}
	}
	printf("共有：%d\n", sum);
	return 0;
}
