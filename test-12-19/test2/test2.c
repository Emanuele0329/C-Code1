#define _CRT_SECURE_NO_WARNINGS
//1.���泣��
//2.const ���εĳ�����
//3.define �����ʶ������
//4.ö�ٳ���
#include <stdio.h>

//int main()
//{
//	//30; 
//	//3.14;
//	//'w';//�ַ�
//	//"abc";
//	//int a = 10;
//	//a = 20;
//	//printf("%d\n", a);//20
//    //const int a = 10;
//	//a = 20;
//	//printf("%d\n", a);//�޷�����
//	//��C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
//	//const int n = 10;
//	//int arr[n] = { 0 };//˵��n����һ������
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
//ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
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
//	//char �ַ�����
//	//'a'
//	//char ch='w';
//	//�ַ���
//	//C������û���ַ�������
//	//"abcder";//˫������������һ���ַ����ַ�������ֵ
//	char arr1[] = "abcdef";//7
//	char arr2[] = { 'a','b','c','d','e','f'};//'\0'
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	
//	int len = strlen("abc");//���ַ������ȵ�һ��������string length ͷ�ļ� string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));//6
//	printf("%d\n", strlen(arr2));//22
//	return 0;
//}


//int main()
//{
//	printf("abc\n");// \n�ǻ��У�ת���ַ�
//	printf("abc\0def");// \0���ַ����Ľ�����־
//
//
//
//
//	return 0;
//}
// ת���ַ�
//??) --> ]
//??( --> [
int main()
{
	//printf("%s\n", "(are you ok??)");
	//(are you ok]
	printf("%s\n", "(are you ok\?\?)");
	printf("%c\n", '\'');// \'��ʾ������
	printf("\"");// \" ��ʾ˫����
	printf("abcd\\0def");// \\��ʾб��
	printf("c:\\test\\test.c");// \t һ����ո� ˮƽ�Ʊ�� \v��ֱ�Ʊ��
	printf("\a\a\a\a\a\a\a");// \a������
	printf("abc\ndef");// \n����
	printf("%c\n", '\130');// \130�ó�����130��8���Ƶ�ASCII��ֵ
	printf("%c\n", '\x061');// \x��ʾ61��Ϊ16���Ƶ�ֵ���㵽10���Ƶ�ASCII���ֵ
	return 0;
}
//%d  ��ӡ����
//%c  ��ӡ�ַ�
//%s  ��ӡ�ַ���
//%f  ��ӡfloat���͵�����
//%lf ��ӡdouble���͵�����
//%zu ��ӡsizeof�ķ���ֵ
