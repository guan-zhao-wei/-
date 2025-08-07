//***指针   指针变量就是用来存放地址的变量 
#include<stdio.h>
int main()
{
	//int a = 10;
	//int* p = &a;//此时的p就是指针变量 
	//*p = 20; //*就是解引用操作符/间接引用操作符，此时的*p就是a，所以改变*p的值就是再改变a的值 
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//printf("%d\n", a);
	//char ch = 'w';
	//char* pd = &ch;
	//*pd = 'a';
	//printf("%p\n", pd);
//	printf("%c\n", ch);
	//printf("%d\n", sizeof(ch));
	//printf("%d\n", sizeof(pd));
	printf("%d\n", sizeof(char*));
	 printf("%d\n", sizeof(short*));
	 printf("%d\n", sizeof(int*));
	 printf("%d\n", sizeof(long*));
	 printf("%d\n", sizeof(long long*));
	 printf("%d\n", sizeof(float*));
	 printf("%d\n", sizeof(double*));
	return 0;
}
