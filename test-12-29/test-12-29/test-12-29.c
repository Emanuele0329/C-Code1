#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��֧����ѭ�����
//��֧��� if/ switch
//ѭ����� while/ for/ do while 
//goto���

//if(���ʽ)
//��䣻

//int main()
//{
//	if (3 == 5)
//		printf("hehe\n");//Ϊ���ӡ
//
//	return 0;
//}


//int main()
//{
//	int age = 20;
//
//	if (age > 18)
//		printf("����\n");
//	else
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϵ�");
//
//
//	return 0;
//}


//else�����������ifƥ��


//if (condition)
//{
//	return x;     ����Ƿ���x�����Ƿ���y
//}
//return y;
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//
//	}
//
//	return 0;
//}


//switch(���α��ʽ)
//{
//    �����;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}//��ѭ��


//whileѭ���е�
//break���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
		/*if (5 == i)
		{
			break;
		}*///��5������1234
	/*	if (5 == i)
			continue;*///����ѭ����continue������֮��ı���ѭ������Ĵ�������ѭ��

		/*printf("%d ", i);
		i++;*/
		/*i++;
		if (5 == i)
			continue;

		printf("%d ", i);*///23467891011
//	}
//	return 0;
//}


int main()
{
	
	//EOF��//end of file
	//int ch = getchar();//getchar��ȡ�ַ�
	//printf("%c\n", ch);//��ӡch
	//putchar(ch);//��ӡ�ַ���ͬ�ϣ���ӡch

	/*int ch = 0;
	while ((ch = getchar()) != EOF);
	{
		putchar(ch);
	}

	return 0;*/

	//������
	//����������һ���ַ���
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//123456

	//getchar();//����ȫ����취 ��һ��getchar()��\n�õ���һ����һ���ո���ִ�����

	int ch = 0;
	while ((ch = getchar()) != '\n')//��ȫ���
	{
		;
	}

	printf("��ȷ������(Y/N)");
	int ret = getchar();
	if ('Y' == ret)                //����ԭ�� ��������ʱ��Ļس�(\n)�ڻ�����ֱ�ӱ�
	{                              //        getchar()���ߣ�����\n����Y��ֱ�����No
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}