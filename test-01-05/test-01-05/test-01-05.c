#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>//Sleep
#include<stdlib.h>//system
#include<time.h>//time

//��д���룬��ʾ����ַ��������ƶ������м���

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//.........
//welcome to bit!!!!

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr1)/sizeof(arr[0])-2
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//systen��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr1);
//
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½����
//ֻ���������������룬��ȷ����ʾ��½�ɹ������ξ������˳�����

//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ2���ַ������

//int main()
//{
//
//	int i = 0;
//	char password[20] = { 0 };
//	//����������abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s",password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//	return 0;
//}

//���Բ���һ�������(1~100)
//������
//�´���
//��С��
//ֱ���¶��ˣ�����

void menu()
{
	printf("********************************\n");
	printf("***********  1.play  ***********\n");
	printf("***********  0.exit  ***********\n");
	printf("********************************\n");
}
//0~RAND_MAX(32767)
void game()
{
	int guess = 0;
	//1.����һ�������
	int ret = rand()%100+1;//���������  0~99-->1~100
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//�����ֵ������߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);


	return 0;
}
