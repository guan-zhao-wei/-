//�ṹ�塪�������������Ӷ��������ˡ����ʣ���һ�����ͣ��Լ�����Ĵ���ġ��ؼ�����struct 
#include<stdio.h>
#include<string.h>//Ϊ������strcpy���� 
struct book
{
	char Add[10];
	char Acc[10];
	short jiage;
}; 
int main()
{
	struct book b1 = {"����", "��", 55};
	//struct book* pd = &b1;
	//ָ��ķ�ʽ��ӡ 
	//printf("������%s\n", (*pd).Add);
    //printf("���ߣ�%s\n", (*pd).Acc);
   //printf("�۸�%d\n", (*pd).jiage);
   //���Ҫ�����������������ַ������и�������ҪӦ����strcpy����
   strcpy(b1.Add, "�������������ɵ�");//�������ֵ������ǰ�������ַ��ȥ 
   //printf("������%s\n", pd->Add);
  // printf("���ߣ�%s\n", pd->Acc);
   //printf("�۸�%dԪ\n", pd->jiage); 
	printf("������%s\n", b1.Add);
	//printf("���ߣ�%s\n", b1.Acc);
	//printf("�۸�%d\n", b1.jiage); 
	return 0;
} 
