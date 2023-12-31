#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//
//		i++;//调整
//	}
//	return 0;
//}

//for (表达式1; 表达式2; 表达式3;)
//    循环语句;
//表达式1为初始化部分，用于初始化循环变量的。
//表达式2为条件判断部分，用于判断循环时候中止。
//表达式3为调整部分，用于循环条件的调整。


//打印1~10

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
//			break;//如果是continue，1 2 3 4 6 7 8 9 10，跳过之后继续
//
//		printf("%d ", i);//1 2 3 4 因为到五的时候先break所以没5，之后没有是因为break是彻底中止
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

	//for循环的判断省略，意味着判断会恒成立
	//for (;;)
	//{
	//	printf("hehe\n")//会死循环
	//}

	//int i = 0;
	//for (i=0; i < 10; i++)
	//{
	//	printf("hehe\n");//循环10次
	//}
	
	//int i = 0;
	//int j = 0;
	//
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 0; j++)
	//	{
	//		printf("hehe\n");//100次
	//	}
	//}


	//for (; i < 10; i++)
	//{
	//	for (; j < 0; j++)
	//	{
	//		printf("hehe\n");//10次 因为j没有初始化 之后不会进行
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
//    循环语句;
//while(表达式）

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

//计算n的阶乘

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


//鞋
//不超过300，你猜
//1.2.3.4.5...err
//1-150 225 ...(二分法)

//1 2 3 4 5 6 7 8 9 10
//最左边下标left0，最右边下标right9

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
		//int mid = (left + right) / 2;//可能会溢出
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
			printf("找到了，是%d",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}