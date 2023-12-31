#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>//Sleep
#include<stdlib.h>//system
#include<time.h>//time

//编写代码，演示多个字符从两端移动，向中间汇聚

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
//		//清空屏幕
//		system("cls");//systen是一个库函数，可以执行系统命令
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr1);
//
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登陆三次
//只允许输入三次密码，正确则提示登陆成功，三次均错误，退出程序

//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//如果返回值是0，表示2个字符串相等

//int main()
//{
//
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}

//电脑产生一个随机数(1~100)
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

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
	//1.生成一个随机数
	int ret = rand()%100+1;//生成随机数  0~99-->1~100
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字的整个逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);


	return 0;
}
