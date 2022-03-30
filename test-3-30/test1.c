#define _CRT_SECURE_NO_WARNINGS 1

// 1，指向单个字符
//#include <stdio.h>
//int main()
//{
//    char a = 'w';
//    char* pa = &a;
//    printf("%c\n", *pa);
//    printf("%c\n", a);
//    return 0;
//}

//// 指向数组名
//#include <stdio.h>
//int main()
//{
//    char arr[] = "abcdefg";
//    char* pa = arr;
//    printf("*pa: %c\n", *pa);
//    printf("*pa+1: %c\n", *pa+1);
//    // 字符数组的数组名是首元素的地址
//    // 两种例外，sizeof(arr)、&arr
//    
//    printf("pa: %s\n", pa);
//    printf("pa+1: %s\n", pa+1);
//    
//    printf("arr: %s\n", arr);    
//    printf("arr+1: %s\n", arr+1);    
//    return 0;
//}


//// 娘娘相等吗？
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = arr1;
//	char* p2 = arr2;
//
//	printf("p1==p2\n");
//	if (p1== p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// 输出no，指针指向的是数组命，数组的数组名是首元素的地址，地址是唯一的
//
//	printf("*p1==*p2\n");
//	if (*p1 == *p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// 输出yes，指针指向的是数组命，数组的数组名是首元素的地址，对数组名解引用，得到数组的首元素
//	// 两个数组的首元素相同，输出yes
//
//	printf("arr1==arr2\n");
//	if (arr1 == arr2) 
//	{
//		printf("yes\n");
//	}
//	else 
//	{
//		printf("no\n");
//	}
//	// 输出no，数组的数组名是首元素的地址，地址是唯一的
//
//	printf("+++++++++++++++++++++++++++++++++++++++++++\n");
//	char* p11 = "abcdef";
//	char* p22 = "abcdef";
//	printf("p11==p22\n");
//	if (p11 == p22)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// 输出yes，两个指针指向同一个常量字符串，内存为了节省空间就存了一份，让他俩都指向这一份
//
//	printf("*p11==*p22\n");
//	if (*p11 == *p22)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}


//// 监视指针数组
//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int d = 40;
//    int* parr[4] = { &a, &b, &c, &d };
//    return 0;
//}


////数组指针是啥？
//#include <stdio.h>
//int main()
//{
//	// int* p = NULL; // p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	// char* ch = NULL; // pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//						// 数组指针 - 指向数组的指针 - 可以存放数组的地址
//
//	// int arr[10] = {0}; 
//	// arr - 首元素地址
//	// &arr[0] - 首元素地址
//	// &arr - 数组地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; // 数组的地址要存起来
//	// 上面的p就是数组指针
//	return 0;
//}


//// 补充pa的类型
//#include <stdio.h>
//int main()
//{
//	char* arr[5];
//	// pa = &arr // 写出pa的类型
//	// 由于pa指向的是一个指针，所以pa是一个二级指针
//	// 又因为pa存放的是一个数组的指针，需要用（）把pa括起来
//	char* (*pa)[5] = &arr;
//	printf("%p\n", pa);
//	return 0;
//}

//// 数组指针的使用-笨
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	
//	//// 用数组指针遍历数组 - 1
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) 
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	//// 用数组指针遍历数组 - 2
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));
//	//}
//
//	// 指针遍历数组
//	int* p = arr;
//	int i =  0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}


//// 数组指针的使用-常规
//#include <stdio.h>
//
//// 参数是数组的形式
//void print1(int arr[3][5], int x, int y) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) 
//	{
//		for (j = 0; j < y; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//// 参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (p[i])[j]);
//			//printf("%d ", *(p[i]+ j ));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(*(p + i) + j) );
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1, 2, 3, 4, 5},{2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
//	print1(arr, 3, 5); // arr - 数组名 - 首元素地址，
//	// 二位数组的首元素是第一个一位数组
//	// *arr ---> {1, 2, 3, 4, 5} √
//	// *arr ---> 1				 X
//
//	printf("============================\n");
//	print2(arr, 3, 5);
//
//	printf("\n%p", arr);
//	return 0;
//}


////  *(p + i) == *(arr + i) == arr[ i ] == p[ i ]
//// 他们是等价的
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("*(p + i): %d \t",*(p + i) );
//		printf("*(arr + i): %d \t",*(arr + i) );
//		printf("arr[i]: %d \t", arr[i]);
//		printf("p[i] % d \t",p[i]);
//		// *(p + i) == *(arr + i) == arr[ i ] == p[ i ]
//		printf("\n");
//	}
//	return 0;
//}

//// 说出他是啥
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	// 是一个有五个int类型元素的数组
//	
//	int* parr1[10];
//	// 是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//	
//	int(*parr2)[10];
//	// 是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针
//
//	int(*parr3[10])[5];
//	// 是一个(数组指针)数组，数组有10个元素，每个元素是一个指针，每一个指针指向了一个有5个元素且数组元素类型为int的数组
//
//
//	return 0;
//}

//// 一维数组传参
//#include <stdio.h>
//
//void test(int arr[])//ok?
//// 接收 一个整型数组
//{}
//void test(int arr[10])//ok?
//// 接收 一个有10个int类型元素的数组
//{}
//void test(int *arr)//ok?
//// 接收 一个整型指针
//{}
//void test2(int *arr[20])//ok?
//// 接收 一个有20个int*类型元素的整型指针数组
//{}
//void test2(int **arr)//ok?
//// 接收 一个二级指针
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr); // 一位数组传参
//	test2(arr2);// 指针传参
//	return 0;
//}


//// 二维数组传参
//#include <stdio.h>
//
//void test(int arr[3][5]) // ok?
//// 接收 一个3行5列的二维数组
//{}
//
//void test(int arr[][5]) // ok?
//// 接收 一个n行5列的二维数组
//{}
//
////void test(int arr[3][]) // ok?
////// 报错 二维数组传参时可以省略行，但不能省略列
////{}
//
////void test(int arr[][]) // ok?
////// 报错 二维数组传参时可以省略行，但不能省略列
////{}
//
///*
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字
//	  因为对于一个二维数组，可以不知道有多少行，但必须知道一行多少个元素
//	  这样方便运算
//*/
//
////void test(int* arr) // ok?
////// 报错 二维数组的首元素地址是二维数组中第一个一位数组的首元素地址，
//////      arr+1是二维数组中第二个一位数组的首元素地址
////{}
//
////void test(int** arr) // ok?
////// 报错，int**是一个二级指针，而二维数组中的arr是二维数组中第一个一位数组的首元素地址
////// 是一个数组的地址，二级指针只能用于存放一级指针的地址，不能存放数组的地址
////{}
//
//void test(int (*p)[5]) // ok?
//// 接收一个数组指针，该指针指向的数组有5个元素，类型为int
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr); // 二维数组传参
//
//	return 0;
//}


//// 一级指针传参
//#include <stdio.h>
//
//void print(int* p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *(p + i));
//		printf("%d\n", p[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 一级指针p，传参给函数
//	print(p, sz);
//	return 0;
//}


//// 当一个函数的参数部分为一级指针的时候，函数能接收什么参数?
//#include <stdio.h>
//
//void test1(int* p) 
//{}
//
//void test2(char* p)
//{}
//
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	test1(&a);// ok,变量的地址
//	test1(p1);// ok，存放变量地址的指针
//
//	char b = 'q';
//	char* p2 = &b;
//	test2(&b);// ok,变量的地址
//	test2(p2);// ok，存放变量地址的指针
//
//	return 0;
//}


//// 二级指针传参
//#include <stdio.h>
//
//void test(int** ptr)
//{
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n; // 一级指针
//	int** pp = &p; // 二级指针
//	int* arr[] = { 0 };// 存放一级指针的指针数组的数组
//
//	test(pp);// 一级指针
//	test(&p);// 二级指针
//	test(arr);// 存放一级指针的指针数组的数组名
//	return 0;
//}


// 函数指针
// 数组指针 - 指向数组的指针
// 函数指针 - 指向函数的指针 - 存放函数的地址
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	//printf("%d\n", Add(a, b));

	//// &函数名 和 函数名 都是函数的地址
	//printf("&Add: %p\n", &Add); // 00007FF74CDB1401
	//printf("Add: %p\n", Add); // 00007FF74CDB1401

	int (*pa)(int, int) = &Add;
	printf("int (*pa)(int, int): %p\n", pa); // 00007FF74CDB1401

	printf("%d\n", (*pa)(2, 6));// 8
	return 0;
}