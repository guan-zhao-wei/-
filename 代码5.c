#include<stdio.h>
//1.判断语句 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if(a>0,b>0)
//	{
//		c = a + b;
//		printf("c = %d\n",c);		
//	}
//	else{
//		printf("c = 0\n");
//	}
//	return 0;
//}

//2.循环语句（whileyuju）
//int main()
//{
//	int a = 0;
//	while(a<20)
//	{
//		printf("变量加1\n"); 
//		a++;
//	}
//	printf("%d\n",a);
//	return 0;
//} 
//3.自定义函数 
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	sum = Add(a, b);
	//sum = Add(c, d);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//4.数组 
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%d\n",arr[1]);
//	int i = 0;
//	while(i<10){
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//5.位操作符和位移操作符 
//int main()
//{
//	int a = 2;//                  010
//	int b = 5;//                  101
//	int c = a&b;//（2进制）按位与 000 对应的二进制位都为1则为1其它为0 
//	int d = a|b;//(2进制）按位或  111对应的二进制位不同为1，相同为对应的值 
//	int e = a^b;//（2进制按位异或 111对应的二进制位相同为0，不同为1
//    a = a<<2;//a在二进制的基础上向左移两位01000
//    a = a>>2;//a在二进制的基础上左移两位 000
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n",e); 
//  printf("%d\n", a);
//	return 0;
//} 
//6.赋值操作符 
//int main()
//{
//	int a = 10;//二进制为1010
	//a += 10;//这个赋值符的意思是a = a+10
	//a -= 10;//a = a - 10
	//a %= 3; //a = a%3(a/3取余）
	//a /= 10; //a = a/10
	//a *= 10;//a = a*10
	//a <<= 2;//二进制为101000
	//a >>=2;//二进制数位0010 
	//printf("%d\n",a);
	//return 0;
//} 
//7.单目操作符(只有一个操作数的操作符例如负号-正号+，逻辑反操作符!），双目操作符（有两个操作数的符合如+-*/），三目操作符（.......） 
int main()
{
	//int a = 0;//a = 10;
	//printf("%d\n",!a);//c语言中0表示假，非0数表示真，!操作符将假变为真（通常显示1）将真变为假（显示0）
	//int a=10;
	 //printf("%d\n", sizeof(a));//sizeof操作符的作用是计算变量/类型所占空间的大小，单位是字节
	 //printf ("%d\n", sizeof a);//对于变量小括号可以去除
	 //printf("%d\n", sizeof(int));
	 //printf("%d\n",sizeof int);//对于类型小括号不可以去除 
	//printf("%d\n", -a);
	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	//int st = 0; 
	//printf("%d\n",sizeof(arr));
	 //st = sizeof(arr)/sizeof(arr[0]);//计算元素的个数方法之一原理：个数=数组大小/每个元素大小 
	// printf("st = %d\n", st);
	//int a = //0;//0是整型占4个字节32个比特位，所以a的二进制码为00000000000000000000000000000000 
	//int b = ~a;//~的意思是按（二进制）位取反得11111111111111111111111111111111负数存储在内存是存放的是其补码 
	//rintf("%d\n",b);//打印出来的是其原码的十进制数10000000000000000000000000000001---1，二进制码的最左（高）位为符号位
	//int a = 10;
	//int b = a++;//后置++的意思是先将a值赋给b，a再++，所以b = 10,a = 11
	//int b = ++a; //前置++的意思是a先++，再将a的值赋给b，所以b = 11,a = 11
	//int b = a--;//同上面的++ 
	//int b = --a; 
	//printf("a = %d\nb = %d\n", a, b); 
	return 0;
} 
