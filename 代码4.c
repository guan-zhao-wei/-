#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//此处的字符串用的存储方法是数组，字符串“abc”中包含着'a''b''c''\0'四个字符，\0是字符串的结束标志不占用内存也不会被显示出 
//	char arr2[] = {'a','b','c','\0'};//此处的字符串必须要手动加上结束标志\0，不然会打印出乱码 
//	printf("%s\n", arr1);//打印字符串要用%s 
//	printf("%s\n", arr2);
//	return 0;
//}
#include<cstring>//调用函数strlen的函数库 
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));//strlen函数是用于计算字符串长度的函数遇到\0便结束，\0不算在长度中 
//	printf("%d\n",strlen(arr2));//此处没有\0所以字符串长度是一个随机值，计算直到遇到乱码中的\0方结束 
//	return 0;
//} 
#include<stdio.h>
int main()
{
	printf("\35");//("c:\tfer\32\tfer\n");//\t是一个转义字符（相当于一个TAB键即长空格），如上面的\0也是转义字符 ，\32也是....... 
	return 0; 
} 
