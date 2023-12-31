#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

////typrdef 类型重命名
////typedef unsigned int uint
////int main()
////{
////	unsigned int num = 0;
////	uint num2 = 1;
////	return 0;
////}
////static 静态 修饰局部变量，全局变量，函数
//void test() //void 不需要返回
//{
//	static int a = 1;//局部变量出了作用域，不销毁，本质上是static改变了变量的存储位置
//	                 //影响了变量的生命周期，生命周期变长，和程序生命周期一样
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10);
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
////修饰全局变量
////全局变量具有外部链接属性
//// static修饰全局变量的时候，这个全局变量的外部连接属性变成了内部链接属性
//// 这个时候其他源文件(.c)就不能在使用到这个全局变量
////声明外部变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//
////修饰函数
////函数具有外部连接属性
////同全局变量
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
//
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议：3放在寄存器里(只是建议)
//
//	return 0;
//}
//
//#define NUM 100//define定义标识符常量
//
////#define定义宏
////宏是有参数的
//
//#define ADD(x,y) ((x)+(y))
////ADD宏名，(x,y)宏的参数，参数是无类型，后面的是宏体
//int main()
//{
//	//print("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//取地址操作符
//	//printf("%p\n", &a);//%p是以地址的形式打出
//	int* p = &a;//p 指针变量 p的类型是int* *说明p是指针变量
//	//内存单元 编号->地址->地址也被称为指针
//	//存放指针或者地址的变量就是指针变量
//	*p = 20;//解引用操作符，意思是通过p中存放的地址，找到p所指的对象，*p就是p所指的对象
//	
//	printf("%d\n", a);//20
//
//
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	int* p1, * p2, * p3;
//
//
//	return 0;
//}


//struct
//结构体 把一些单一类型整合在一起的做法


//学生
struct Stu
{
	//结构体成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	//ps是指针变量，可.可->
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "shangsan",20,"nan","13838384388" };

	//结构体对象.成员名
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}

//define 不是关键字，是预处理指令