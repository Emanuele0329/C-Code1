#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

////typrdef ����������
////typedef unsigned int uint
////int main()
////{
////	unsigned int num = 0;
////	uint num2 = 1;
////	return 0;
////}
////static ��̬ ���ξֲ�������ȫ�ֱ���������
//void test() //void ����Ҫ����
//{
//	static int a = 1;//�ֲ��������������򣬲����٣���������static�ı��˱����Ĵ洢λ��
//	                 //Ӱ���˱������������ڣ��������ڱ䳤���ͳ�����������һ��
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10);
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
////����ȫ�ֱ���
////ȫ�ֱ��������ⲿ��������
//// static����ȫ�ֱ�����ʱ�����ȫ�ֱ������ⲿ�������Ա�����ڲ���������
//// ���ʱ������Դ�ļ�(.c)�Ͳ�����ʹ�õ����ȫ�ֱ���
////�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//
////���κ���
////���������ⲿ��������
////ͬȫ�ֱ���
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//���飺3���ڼĴ�����(ֻ�ǽ���)
//
//	return 0;
//}
//
//#define NUM 100//define�����ʶ������
//
////#define�����
////�����в�����
//
//#define ADD(x,y) ((x)+(y))
////ADD������(x,y)��Ĳ����������������ͣ�������Ǻ���
//int main()
//{
//	//print("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);//%p���Ե�ַ����ʽ���
//	int* p = &a;//p ָ����� p��������int* *˵��p��ָ�����
//	//�ڴ浥Ԫ ���->��ַ->��ַҲ����Ϊָ��
//	//���ָ����ߵ�ַ�ı�������ָ�����
//	*p = 20;//�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ�Ķ���*p����p��ָ�Ķ���
//	
//	printf("%d\n", a);//20
//
//
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	int* p1, * p2, * p3;
//
//
//	return 0;
//}


//struct
//�ṹ�� ��һЩ��һ����������һ�������


//ѧ��
struct Stu
{
	//�ṹ���Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	//ps��ָ���������.��->
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "shangsan",20,"nan","13838384388" };

	//�ṹ�����.��Ա��
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}

//define ���ǹؼ��֣���Ԥ����ָ��