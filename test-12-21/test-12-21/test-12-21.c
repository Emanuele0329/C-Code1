#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf( "������\n") ;
//	}
//	return 0;
//}//if else �﷨

//int main()
//	{
//		int line = 0;
//        printf("�������\n");
//		while (line < 20000)
//		{
//			printf("д����:%d\n",line);
//			line++;
//		}
//		if (line >= 20000)
//		{
//			printf("��offer\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//		return 0;
//	}
// 




//
////����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1,n2);
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}


//����
//int main()
//{
//	int arr[10] = (10, 12, 11, 13, 14, 15, 16, 17, 18, 19);
//	           //   0   1   2   3   4   5   6   7   8   9
//	           //������±� ��0��ʼ �� arr[8]
//	int i = 0;
//	while (i < 10);
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
//
//	}
//	
//	
//
//
//	return 0;
//}
//c99��׼֮ǰ������ֻ֧�ֳ������߳������ʽ
//c99��׼֮��֧�ֱ䳤���飬��ʱ��������Ĵ�С�Ǳ����������ַ���ָ�������鲻���Ա���ʼ��

//int main()
//{
//	int n = 10;
//	int arr[n];//err
//	return 0;
//}

//Max(int x, int y)
//{
//	if (x > y)
//	    return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//��2�������Ľϴ�ֵ
//	int r = Max(a, b);
//	printf("%d\n", r);
//	return 0;
//}

int main()
{
	//����
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	//���
	printf("%d\n", y);

	return 0;
}


