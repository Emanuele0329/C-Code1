#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//goto语句

//void test()
//{
//again://不能跨函数
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


//可替代，具体使用环境如下

//{for (...)
//    for (...)
//    {
//	    for (...)
//	    {
//			if (disaster)
//				goto error;//可以直接跳转
//	    }
//    } 
//error:
//    if(disaster)
//		//处理错误情况
//}


//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的的电脑将在60秒内关机，请输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown - a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//函数的定义
//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求较大值
//	//函数的调用
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//写一个函数可以交换两个整型变量的内容

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
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//x和y叫形式参数，两者地址不同
//	//当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//直接改
//	*p = 30;//间接改
//
//	return 0;
//}

//void Swap(int *px, int *py)
//{
//	int z = *px;//z=a  存的是地址而非变量
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
//	//交换
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//x和y叫形式参数，两者地址不同
//	//当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写一个函数可以判断一个数是不是素数

//打印100~200之间的素数
//素数是只能被1和它本身整除的数

//是素数返回1
//不是素数返回0

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
		//判断i是否为素数
		//是素数就打印
		//拿2~i-1之间的数字去试除
		//int flag = 1;//flag是1，表示是素数
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