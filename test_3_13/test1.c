//#include <stdio.h>
//int main()
//{
//	printf("今天白天上班，晚上出去干饭了,没学习\n");
//	printf("这是14号补的\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10; 
//	// 向内存申请一块空间存放变量a
//	int* p = &a;
//	// 将变量a的地址赋值给整型指针变量
//	printf("&a: %p\n", &a);
//	printf(" p: %p\n", p);
//	// a的地址与p中存储的值相同
//
//	printf("a: %d\n", a);
//	printf("a(*p): %d\n", *p);
//	// * - 解引用操作符/间接访问操作符
//	// 指针变量通过解引用可以得到a的值
//
//	*p = 20;
//	printf("a: %d\n", a);
//	printf("a(*p): %d\n", *p);
//	// 通过对修改指针变量，来修改a
//
//	double num = 3.14;
//	double* dp = &num;
//	*dp = 3.1415926535;
//	printf("num: \n%f\n", num);
//	printf("num(*dp): \n%f\n", *dp);
//  printf("指针变量dp的大小是%d个字节", sizeof(dp));
//
//	return 0;
//}

// 结构体
// 对于一些复杂对象，比如人、书
// 只用int、float、char来表示是不够的
// 
// 人：人名+年龄+性别+身高+体重...
// 书：书名+出版社+定价+编号...
//
// 在C语言中可以通过结构体来描述复杂变量
// 复杂变量	- 结构体 - 我们自己创造出的一种类型 
//

#include<stdio.h>
#include<string.h>

struct Book //创建一个结构体类型
{
	char name[20]; // 书名
	int prince;	// 定价
};
int main()
{
	// 利用结构体类型创建一个该类型的变量
	struct Book b1 = { "C语言程序设计", 55 };

	printf("修改结构体中的书名(数组)\n");
	strcpy(b1.name, "C++");
	// strcpy - string copy - 字符串拷贝-库函数-string.h
	// 两个参数：拷到哪里去？、拷贝什么？
	// 将"C++"这个字符串拷贝到b1.name
	printf("修改书名：%s\n", b1.name);

	struct Book* pb = &b1;
	// 创建结构体指针变量，'*'前面的类型应该位结构体类型 - struct Book
	printf("利用指针访问，结构体中的成员\n");

	////两种写法，第一种
	//printf("书名：%s\n", (*pb).name);
	//printf("价格：%d\n", (*pb).prince);

	//两种写法，第二种
	printf("书名：%s\n", pb->name);
	printf("价格：%d\n", pb->prince);
	// 推荐使用第二种，书写简单直观

	// 两种操作符'.'、'->'
	// '.'	结构体变量.成员
	// '->'	结构体指针->成员
	//


	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.prince);
	//// 通过-变量名.成员名 可以对变量中的值进行赋值和获取
	//b1.prince = 100;
	//printf("修改后的价格：%d\n", b1.prince);

	return 0;
}