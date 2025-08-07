//输出两个数中较大的数 
//#include<stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if(num1 > num2)
//	{
//		printf("%d\n", num1);
//	}
//	else{
//	printf("%d\n", num2);
//	}
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int a = 8;
//	int b = 3;
//	int max = 0;
	//if(a>b)
	//max = a;
	//else
	//max = b;刺出可用三目操作符，如下
	//max = (a>b ? a:b);//满足?前面的条件则执行a，不满足则执行b 
	//printf("max=%d\n", max);
	//max = (a == b  ? 0:1);
	//printf("max=%d\n", max);
	//return 0;
//} 

//用函数的方法打印出两个数中较大的值 
//#include<stdio.h>
//int ass(int x, int y)
//{
//	if(x>y){
//	return x;
//	}	
//	else{
//	return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = ass(a, b);
//	printf("c = %d\n", c);
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int a = 0;//0是整型占4个字节32个比特位，所以a的二进制码为00000000000000000000000000000000 
//	int b = ~a;//~的意思是按（二进制）位取反得11111111111111111111111111111111负数存储在内存是存放的是其补码 
//	printf("%d\n",b);//打印出来的是其原码的十进制数10000000000000000000000000000001---1，二进制码的最左（高）位为符号位 
//	return 0;
//}
