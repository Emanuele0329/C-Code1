#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//分支语句和循环语句
//分支语句 if/ switch
//循环语句 while/ for/ do while 
//goto语句

//if(表达式)
//语句；

//int main()
//{
//	if (3 == 5)
//		printf("hehe\n");//为真打印
//
//	return 0;
//}


//int main()
//{
//	int age = 20;
//
//	if (age > 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老登");
//
//
//	return 0;
//}


//else和离他最近的if匹配


//if (condition)
//{
//	return x;     如果是返回x，不是返回y
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


//switch(整形表达式)
//{
//    语句项;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
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
//		printf("选择错误\n");
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
//}//死循环


//while循环中的
//break是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
		/*if (5 == i)
		{
			break;
		}*///到5结束，1234
	/*	if (5 == i)
			continue;*///会死循环，continue会跳过之后的本次循环后面的代码重新循环

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
	
	//EOF；//end of file
	//int ch = getchar();//getchar获取字符
	//printf("%c\n", ch);//打印ch
	//putchar(ch);//打印字符，同上，打印ch

	/*int ch = 0;
	while ((ch = getchar()) != EOF);
	{
		putchar(ch);
	}

	return 0;*/

	//举例子
	//加入密码是一个字符串
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//123456

	//getchar();//不完全解决办法 加一个getchar()把\n拿掉，一旦加一个空格就又错误了

	int ch = 0;
	while ((ch = getchar()) != '\n')//完全解决
	{
		;
	}

	printf("请确认密码(Y/N)");
	int ret = getchar();
	if ('Y' == ret)                //错误原因 输入密码时打的回车(\n)在缓冲区直接被
	{                              //        getchar()拿走，导致\n不是Y，直接输出No
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}