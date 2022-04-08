#define _CRT_SECURE_NO_WARNINGS 1

//// 4，使用free释放一块动态开辟空间的一部分
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) 
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		*p++ = i;
//		// 由于p++的原因p此时指向了空间的中间
//		// 使用free释放的只是一块动态开辟空间的一部分
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 5，对一块动态内存的多次释放
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) 
//	{
//		return 0;
//	}
//
//	free(p);
//	// ...
//	// 解决方法，在动态内存释放后，将指针的值赋值为NULL
//	//p = NULL;
//	free(p);// err
//	// 对一块动态内存的多次释放
//}


//// 6，动态开辟内存忘记释放（内存泄漏）
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//int main()
//{
//	while (1) 
//	{
//		malloc(INT_MAX);
//		Sleep(1000);
//	}
//	return 0;
//}


//// 1，错
//#include <stdio.h>
// #include <stdlib.h>
//#include <string.h>
//
//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// 改正1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void
//GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// 改正2
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world\n");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//// 2，错
//#include <stdio.h>
//
//char* GetMemory(void) 
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// 2，错，改成
//#include <stdio.h>
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");// hello
//
//	printf(str);
//	// 忘记释放动态开辟的内存，导致内存泄漏
//	// 释放内存
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


////4,错
//#include <stdio.h>
//#include <stdlib.h>
//
//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL) 
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
////// 结构体中的正常数组
////struct S 
////{
////	int n;
////	int arr[10];
////};
//
//// 结构体中的柔性数组
//struct S 
//{
//	int n;
//
//	// 两种写法，编译器一般支持第二种
//
//	// 第一种
//	//int arr[]; //error，大部分编译器不支持次写法
//
//	// 第二种
//	int arr[0];// 部分编译器的支持次写法
//	// 未知大小-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d", sizeof(s)); // 4byte, 未包含数组arr[0]的大小
//
//	// 初始化柔性数组
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	// sizeof(struct S) - 未包含数组arr[0]的结构体的大小
//	// 5 * sizeof(int) - 想要创建的柔性数组arr[0]的大小
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		ps->arr[i] = i;
//	}
//
//	// 改变柔性数组的大小
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL) 
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++) 
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct S 
//{
//	int a;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 调整大小
//	printf("\n调整大小\n");
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL) 
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//71P-76P跳过，专升本考纲无文件操作
