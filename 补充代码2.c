//#include<stdio.h>
//#define a 10
//enum d{
//	a,
//	b,
//	c
//};
//#include<cstring>
//int main()
//{
	//const int a = 10;
	//a += a;
	//int a = 5;
	//if(a>=10)
	//printf("a=1\n");
	//else
	//printf("a=0\n");
	//while(a<10){
	//	a++;
	//}
	//printf("%d\n", a);
	//char arr[] = {'a','b','c','d'};
	//printf("%d\n", strlen(arr));
	//printf("%d\n", sizeof(arr));
	//return 0;
//}
//#define的宏的应用 
#include<stdio.h>
#define Add(x,y)(x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	int max = 0; 
	scanf("%d%d", &a ,&b);
	//max = a + b;
    max = Add(a,b);
	printf("%d\n", max);
	return 0;
} 

