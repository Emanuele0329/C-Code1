#define _CRT_SECURE_NO_WARNINGS
//1.字面常量
//2.const 修饰的常变量
//3.define 定义标识符常量
//4.枚举常量
#include <stdio.h>

//int main()
//{
//	//30; 
//	//3.14;
//	//'w';//字符
//	//"abc";
//	//int a = 10;
//	//a = 20;
//	//printf("%d\n", a);//20
//    //const int a = 10;
//	//a = 20;
//	//printf("%d\n", a);//无法运行
//	//在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
//	//const int n = 10;
//	//int arr[n] = { 0 };//说明n不是一个常量
//	
//
//
//	
//	
//	return 0;
//}
//#define MAX 100
//#define STR "asdffaf"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}
//枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	RED = 20;//err
//
//
//
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	//#qWer$
//	//char 字符类型
//	//'a'
//	//char ch='w';
//	//字符串
//	//C语言中没有字符串类型
//	//"abcder";//双引号引起来的一串字符叫字符串字面值
//	char arr1[] = "abcdef";//7
//	char arr2[] = { 'a','b','c','d','e','f'};//'\0'
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	
//	int len = strlen("abc");//求字符串长度的一个函数，string length 头文件 string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));//6
//	printf("%d\n", strlen(arr2));//22
//	return 0;
//}


//int main()
//{
//	printf("abc\n");// \n是换行，转义字符
//	printf("abc\0def");// \0是字符串的结束标志
//
//
//
//
//	return 0;
//}
// 转义字符
//??) --> ]
//??( --> [
int main()
{
	//printf("%s\n", "(are you ok??)");
	//(are you ok]
	printf("%s\n", "(are you ok\?\?)");
	printf("%c\n", '\'');// \'表示单引号
	printf("\"");// \" 表示双引号
	printf("abcd\\0def");// \\表示斜杠
	printf("c:\\test\\test.c");// \t 一个大空格 水平制表符 \v垂直制表符
	printf("\a\a\a\a\a\a\a");// \a报个警
	printf("abc\ndef");// \n换行
	printf("%c\n", '\130');// \130得出的是130的8进制的ASCII码值
	printf("%c\n", '\x061');// \x表示61作为16进制的值换算到10进制的ASCII码的值
	return 0;
}
//%d  打印整形
//%c  打印字符
//%s  打印字符串
//%f  打印float类型的数据
//%lf 打印double类型的数据
//%zu 打印sizeof的返回值
