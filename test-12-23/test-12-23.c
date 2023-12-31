#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//操作符
//算术操作符
//+ - * / %
//int main()
//{
	//除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
	//int a = 7 / 2;
	//int b = 7 % 2;
	//printf("%d\n", a);//3
	//printf("%d\n", b);//1 取模

//	float a = 7 / 2.0;
//	int b = 7 % 2;
//	printf("%.1f\n", a);//3.5
//	printf("%d\n", b);//1 取模
//	//取模操作符的两端只能是整数
//
//	return 0;
//}
//移位操作符 涉及二进制，后面讲


//赋值操作符
//= += -= *= /= &= ^= |= >>= <<=

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;//与上面相同
//
//	a -= 3;
//	a = a - 3;
//
//	return 0;
//}

//a + b; + 双目操作符
//单目操作符，只有一个数的操作符，例 a！
//c语言中，0表示假，非0表示真
//
//int main()
//{
	/*int flag = 0;
	if (!flag)
	{
		printf("hehe\n");
	}*/
	//int a = -10;
	//int b = -a;//10
	//sizeof 是单目操作符
	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);*/

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr) / sizeof[0]));//10 求的是元素个数
	
	//int a = 10;
	//int b = a++;//后置++，先使用，后++ int b = a;a=a+1
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int b = ++a;//先++后使用,a=a+1;b=a
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11
	//--同理

	//int a = (int)3.14;//舍掉小数后的数字
	//3.14字面浮点数，编译器默认理解为double类型


//
//	return 0;
//}

int main()
{
	//&& 逻辑与 -并且
	//|| 逻辑或 -或者 

	//int a = 10;//0为假，非0为真
	//int b = 20;
	//if (a && b)
	//{
	//	printf("hehe\n");
	//}
	//三目操作符，exp?exp2:exp3 
	//           真  算   不算
	//           假  不算  算
	//int a = 10;
	//int b = 20;
	//int r = a > b ? a : b;//20

	//逗号表达式就是逗号隔开的一串表达式
	//特点是从左向右依次计算，整个表达式的结果是最后一个表达式的结果
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//int d = (c = a - 2, a = b + c, c - 3);//5

	//int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	//arr[];//[]就是下标引用符，arr和3就是[]的操作数


	return 0;
}
