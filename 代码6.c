//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
	//int c = a&&b;//逻辑与
//	int c = a||b;//逻辑或 
//	printf("c=%d\n",c);
//	return 0;
//} 
//常见关键字
//1  auto 
//#include<stdio.h>
//int main()
//{
//	auto int b = 0;//a是一个局部变量，局部变量前面都有一个关键字auto但基本都会省略
//	printf("%d\n", b); 
//	return 0;
//}
//2 unsigned 和 typedef 
//#include<stdio.h>
//int main()
//{
//	unsigned int a = -3;//无符号整数 
	//typedef是类型重定义字符
//	typedef unsigned int u_int;//将unsigned int命名为u_int; 
//	printf("%d\n", a);
//	return 0; 
//}
//3 static
#include<stdio.h>
int jia()
{
	//int a = 1;//输出结果是五个a=2
	static int a = 1;//输出结果是a=2,a=3,a=4,a=5,a=6
	//static是一个静态变量关键字，就是将变量（a）改变后的值固定住不被程序销毁返货变量初值 
	a++;
	printf("a=%d\n", a); 
}
int main()
{
	int i = 0;
	while(i<5)
	{
		jia();
		i++;
	}
	return 0;
}
