#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf( "卖红薯\n") ;
//	}
//	return 0;
//}//if else 语法

//int main()
//	{
//		int line = 0;
//        printf("加入比特\n");
//		while (line < 20000)
//		{
//			printf("写代码:%d\n",line);
//			line++;
//		}
//		if (line >= 20000)
//		{
//			printf("好offer\n");
//		}
//		else
//		{
//			printf("继续加油\n");
//		}
//		return 0;
//	}
// 




//
////函数
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
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1,n2);
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}


//数组
//int main()
//{
//	int arr[10] = (10, 12, 11, 13, 14, 15, 16, 17, 18, 19);
//	           //   0   1   2   3   4   5   6   7   8   9
//	           //数组的下标 从0开始 例 arr[8]
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
//c99标准之前，数组只支持常量或者常量表达式
//c99标准之后，支持变长数组，这时允许数组的大小是变量，但这种方法指定的数组不可以被初始化

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
//	//求2个整数的较大值
//	int r = Max(a, b);
//	printf("%d\n", r);
//	return 0;
//}

int main()
{
	//输入
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	//输出
	printf("%d\n", y);

	return 0;
}


