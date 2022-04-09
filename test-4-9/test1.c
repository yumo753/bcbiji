#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//// 预定义符号
//#include <stdio.h>
///*
//__FILF__		// 进行编译的源文件
//__LINE__		// 文件当前的行号
//__DATE__		// 文件被编译的日期
//__TIME__		// 文件被编译的时间
//__STDC__		// 如果编译器遵循ANSI C，其值为1，否则未定义
//*/
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__); //error， vs2022并不严格遵守ANSI C
//
//	// 写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 预处理质量 #define
//#include <stdio.h>
//#define MAX 100;
//int main()
//{
//	int i = MAX;
//	printf("%d", MAX);
//	return 0;
//}


//// 宏
//#include <stdio.h>
//#define SQUARE(x) x * x;
//
//int main()
//{
//	int ret = SQUARE(5);
//	// 预处理后：
//	// int ret = 5 * 5;
//
//	printf("%d\n", ret); // 25
//	return 0;
//}


//// 宏是替换不是传参
//#include <stdio.h>
//#define SQUARE(x) x * x;
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	// 预处理后：
//	// int ret = 5 + 1 * 5 + 1;
//	//		   = 5 + 5 + 1
//
//	printf("%d\n", ret); // 11
//	return 0;
//}


//// 宏是替换不是传参
//// 改进使ret = 36
//#include <stdio.h>
//#define SQUARE(x) (x) * (x);
//// 提升x的优先级
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	// 预处理后：
//	// int ret = (5 + 1) * (5 + 1);
//	//		   = 6 * 6
//	//		   = 36
//
//	printf("%d\n", ret); // 36
//	return 0;
//}


//// 写宏的时候要勤加()
//#include <stdio.h>
//#define DOUBLE1(x) x + x
//#define DOUBLE2(x) (x) + (x)
//#define DOUBLE3(x) ((x) + (x))
//
//int  main()
//{
//	int a = 5;
//	printf("DOUBLE1: %d\n", 10 * DOUBLE1(a)); // 55
//	// 预处理后：10 * 5 + 5
//	printf("DOUBLE2: %d\n", 10 * DOUBLE2(a)); // 55
//	// 预处理后：10 * (5) + (5)
//	printf("DOUBLE3: %d\n", 10 * DOUBLE3(a)); // 100
//	// 预处理后：10 * ((5) + (5))
//	return 0;
//}


//#include <stdio.h>
//
//void print(int a) 
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a); // the value of a is 10
//	print(b); // the value of a is 20
//	// 现在我们希望在传递的值为b时，输出：the value of b is 20，使用宏
//}


//#include <stdio.h>
//
//#define PRINT(X) printf("the value of " #X " is %d\n", X);
//
//int main()
//{
//	// 来看一组代码
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hell" "o wo" "rld\n");
//	// 上面三行代码的输出结果相同
//
//	// 想办法把参数插入到字符串中，#
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	// 预处理：
//	// printf("the value of " "a" " is %d\n", a);
//
//	PRINT(b);
//	// 预处理：
//	// printf("the value of " "b" " is %d\n", b);
//
//	// 在一个预处理器宏中的参数前面使用一个#,预处理器会把这个参数转换为一个字符数组
//}


// ##的作用
//#include <stdio.h>
//#define CAT(X, Y) X##Y
//// XY这个标识符必须存在，否则会报错
//
//int main() 
//{
//	int surui999 = 8888;
//	printf("surui999: %d\n", surui999);
//
//	printf("surui##999: %d\n", CAT(surui, 999));
//	printf("surui##999: %d\n", CAT(sumi, 999));// error sumi999不存在
//}


//// 带副作用的宏参数代码演示
//#include <stdio.h>
//#define MAX(x, y) ( (x) > (y) ? (x) : (y)) 
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	// 预处理后
//	// int max = ((a++) > (b++) ? (a++) ; (b++));
//	// 第一步，先比较 a++ 和 b++，先算后加
//	//  a < b，在比较后，a和b都+1，a = 11; b = 12
//	// 再将 b++ 的值赋给max，先算后加，先将值赋给max，然后+1，
//	// max = 12，b = 13
//
//	printf("%d\n", max);// 12
//	printf("%d\n", a); // 11
//	printf("%d\n", b); // 13
//
//	return 0;
//}


//// 宏和函数的对比
//
//#include <stdio.h>
//
//// 宏
//#define MAX(x, y) ( (x) > (y) ? (x) : (y)) 
//
//// 函数
//int Max(int x, int y) 
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	float c = 3.33;
//	float d = 4.44;
//
//
//	// 宏在预处理阶段就完成了替换
//	// 没有函数的调用和返回的开销
//	int max = MAX(a, b);
//	printf("%d\n", max);// 11
//
//
//	// 函数在调用的时候
//	// 会有函数调用和返回的开销
//	max = Max(a, b);
//	printf("%d\n", max);// 11
//
//
//	// 宏相比于函数更通用
//	float maxf = 0;
//	maxf = MAX(c, d);
//	printf("%lf\n", maxf);// 4.440000
//
//	// 由于函数的参数为int类型，会出现精度丢失
//	maxf = Max(c, d);
//	printf("%lf\n", maxf);// 4.000000
//
//	return 0;
//}


//// 宏能传递类型
//#include <stdio.h>
//
//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	// 宏可以传递类型
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p1 = (int*)malloc(10 * sizeof(int));
//
//	int* p2 = MALLOC(10, int);
//	// 预处理后
//	// int* p2 = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("max = %d\n", MAX);
//#undef MAX
//	// 移除对MAX的定义
//	//printf("max = %d\n", MAX); // error MAX未定
//
//	return 0;
//}
//


//// 条件编译
//#include <stdio.h>
//
////#define DEBUG
//
//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = 0;
//#ifdef DEBUG // 如果DEBUG定义了，就编译，未定义就不编译
//		printf("%d\n", i);
//#endif
//	}
//	return 0;
//}


//// add.h
//#ifndef ADD_H
//#defline ADD_H
//int Add(int x, int y);
//#endif
//
//// add.c
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//// test.c
//#include <stdio.h>
//#include "Add.h"
//#include "Add.h"
//#include "Add.h"
//#include "Add.h"
//// 虽然引用多次，但只会包含一次
//int main()
//{
//	int a = 10;
//	int b = 20;
//	return 0;
//}
//


//// offsetof的自主实现
//#include <stdio.h>
//#include <stddef.h>
//
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0) -> member_name)
//// (int)&(((struct_name*)0) -> member_name)
//// 将0强制类型转换为结构体struct S的指针，此时整个结构体地址值为0
//// 结构体内元素的地址就是偏移量，但其类型仍未指针
//// 将其强制类型转换未int类型就是结构体中元素的偏移量
//// 牛逼
//
//struct S
//{
//	char c1;
//	int i;
//	char c;
//	double d;
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, i)); // 4
//	printf("%d\n", OFFSETOF(struct S, c)); // 8
//	printf("%d\n", OFFSETOF(struct S, d)); // 16
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM 
//	{
//		unsigned char ucPim;
//		unsigned char ucData0 : 1; // 单位时bit
//		unsigned char ucData1 : 2; // 单位是bit
//		unsigned char ucData2 : 3; // 单位是bit
//	}*pstpimData;
//	pstpimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstpimData->ucPim = 2;
//	pstpimData->ucData0 = 3;
//	pstpimData->ucData1 = 4;
//	pstpimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}


#include <stdio.h>
// 冒泡排序
void paixv(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz-1; i++) 
	{
		for (j = 0; j < sz - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			}
		}
	}
}

// 找单身狗
void single_dog(int arr[], int sz, int num[])
{
	paixv(arr, sz);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d \n", arr[i]);
	}

	for (i = 0; i < sz;) 
	{
		if (arr[i] == arr[i + 1]) 
		{
			i = i + 2;
		}
		else
		{
			num[j] = arr[i];
			i = i + 1;
			j = j + 1;
		}
	}
	
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 3, 2, 4, 1, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num[2] = { 0 };
	single_dog(arr, sz, num);
	printf("单身狗是：%d %d", num[0], num[1]);
	return 0;
}



