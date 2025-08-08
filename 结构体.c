//结构体————描述复杂对象（数。人。物质）的一种类型，自己定义的创造的。关键字是struct 
#include<stdio.h>
#include<string.h>//为了引用strcpy函数 
struct book
{
	char Add[10];
	char Acc[10];
	short jiage;
}; 
int main()
{
	struct book b1 = {"钢铁", "管", 55};
	//struct book* pd = &b1;
	//指针的方式打印 
	//printf("书名：%s\n", (*pd).Add);
    //printf("作者：%s\n", (*pd).Acc);
   //printf("价格：%d\n", (*pd).jiage);
   //如果要对书名作者这样的字符串进行更改则需要应引用strcpy函数
   strcpy(b1.Add, "钢铁是怎样练成的");//将后面的值拷贝到前面这个地址里去 
   //printf("书名：%s\n", pd->Add);
  // printf("作者：%s\n", pd->Acc);
   //printf("价格：%d元\n", pd->jiage); 
	printf("书名：%s\n", b1.Add);
	//printf("作者：%s\n", b1.Acc);
	//printf("价格：%d\n", b1.jiage); 
	return 0;
} 
