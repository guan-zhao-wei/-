//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
	//int c = a&&b;//�߼���
//	int c = a||b;//�߼��� 
//	printf("c=%d\n",c);
//	return 0;
//} 
//�����ؼ���
//1  auto 
//#include<stdio.h>
//int main()
//{
//	auto int b = 0;//a��һ���ֲ��������ֲ�����ǰ�涼��һ���ؼ���auto����������ʡ��
//	printf("%d\n", b); 
//	return 0;
//}
//2 unsigned �� typedef 
//#include<stdio.h>
//int main()
//{
//	unsigned int a = -3;//�޷������� 
	//typedef�������ض����ַ�
//	typedef unsigned int u_int;//��unsigned int����Ϊu_int; 
//	printf("%d\n", a);
//	return 0; 
//}
//3 static
#include<stdio.h>
int jia()
{
	//int a = 1;//�����������a=2
	static int a = 1;//��������a=2,a=3,a=4,a=5,a=6
	//static��һ����̬�����ؼ��֣����ǽ�������a���ı���ֵ�̶�ס�����������ٷ���������ֵ 
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
