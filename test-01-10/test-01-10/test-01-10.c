#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//goto���

//void test()
//{
//again://���ܿ纯��
//
//}
//
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}


//�����������ʹ�û�������

//{for (...)
//    for (...)
//    {
//	    for (...)
//	    {
//			if (disaster)
//				goto error;//����ֱ����ת
//	    }
//    } 
//error:
//    if(disaster)
//		//����������
//}


//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��������ȡ���ػ�

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵĵ��Խ���60���ڹػ��������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown - a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//�����Ķ���
//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//дһ���������Խ����������ͱ���������

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//x��y����ʽ���������ߵ�ַ��ͬ
//	//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//
//	return 0;
//}

//void Swap(int *px, int *py)
//{
//	int z = *px;//z=a  ����ǵ�ַ���Ǳ���
//	*px = *py;//a=b
//	*py = z;//b=z
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//����
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//x��y����ʽ���������ߵ�ַ��ͬ
//	//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//дһ�����������ж�һ�����ǲ�������

//��ӡ100~200֮�������
//������ֻ�ܱ�1����������������

//����������1
//������������0

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮�������ȥ�Գ�
		//int flag = 1;//flag��1����ʾ������
		//int j = 0;
		//for (j = 2; j <= sqrt(i); j++)
		//{
		//	if (i % j == 0)
		//	{
		//		flag = 0;
		//		break;
		//	}
		//}
		//if (flag == 1)
		//{
		//	
		//	
		//}
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);

	return 0;
}