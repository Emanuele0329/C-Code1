#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//
//		i++;//����
//	}
//	return 0;
//}

//for (���ʽ1; ���ʽ2; ���ʽ3;)
//    ѭ�����;
//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ġ�
//���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ��
//���ʽ3Ϊ�������֣�����ѭ�������ĵ�����


//��ӡ1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//�����continue��1 2 3 4 6 7 8 9 10������֮�����
//
//		printf("%d ", i);//1 2 3 4 ��Ϊ�����ʱ����break����û5��֮��û������Ϊbreak�ǳ�����ֹ
//	}
//	return 0;
//}

//int main()
//{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

	//forѭ�����ж�ʡ�ԣ���ζ���жϻ�����
	//for (;;)
	//{
	//	printf("hehe\n")//����ѭ��
	//}

	//int i = 0;
	//for (i=0; i < 10; i++)
	//{
	//	printf("hehe\n");//ѭ��10��
	//}
	
	//int i = 0;
	//int j = 0;
	//
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 0; j++)
	//	{
	//		printf("hehe\n");//100��
	//	}
	//}


	//for (; i < 10; i++)
	//{
	//	for (; j < 0; j++)
	//	{
	//		printf("hehe\n");//10�� ��Ϊjû�г�ʼ�� ֮�󲻻����
	//	}
	//}
//
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}



//do while
//do
//    ѭ�����;
//while(���ʽ��

//int main()
//{
//	int i = 1;
//	do
//	{
//      printf("%d ", i);
//	  i++;
//	}
//		
//	while (i <= 10);
//
//	return 0;
//}

//����n�Ľ׳�

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//Ь
//������300�����
//1.2.3.4.5...err
//1-150 225 ...(���ַ�)

//1 2 3 4 5 6 7 8 9 10
//������±�left0�����ұ��±�right9

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
       
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
        int left = 0;
		int right = sz - 1;
		
	while (left<=right)
	{
		//int mid = (left + right) / 2;//���ܻ����
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ���%d",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}