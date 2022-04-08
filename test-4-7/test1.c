#define _CRT_SECURE_NO_WARNINGS 1


//// malloc 和 free
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	// 像内存申请整型上限的空间，无法申请到
//	//int* p =  (int*)malloc(INT_MAX + 1);
//	// INT_MAX-C语言中整型的上限，malloc无法申请到这么多的空间，会返回NULL
//
//	// 像内存申请10个整型的空间
//	int* p =  (int*)malloc(10 * sizeof(int));
//	// malloc的返回值类型是一个无类型的整型，在接受时应该使用强制类型转换
//	// 当内存中没有足够的空间时，malloc会返回空指针：NULL
//	if (p == NULL) 
//	{
//		// 打印错误原因
//		printf("%s\n", strerror(errno)); // Not enough space - 没有足够的空间
//	}
//	else 
//	{
//		// 正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++) 
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	// 当动态申请的空间不在使用的时候
//	// 应该归还给操作系统
//	free(p);
//	// 此时内存空间被释放，但p依然指向申请空间的地址，p此时为野指针
//	p = NULL;
//	// 可将p设为空指针
//	return 0;
//}


// // calloc
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	// 像内存申请10个整型的空间(40bit)，并将它们初始化为0
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++) 
//		{
//			*( p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//	// 释放空间
//	// free函数是用来释放动态开辟的空间
//	free(p);
//	return 0;
//}


//// realloc
//// 调整动态开辟空间的大小
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++) 
//		{
//			*( p + i) = i;
//		}
//	}
//	// 此时可以使用的只有malloc开辟的20个字节的空间
//	// 由于一些原因，我们需要更大的空间，比如现在需要40个字节
//	// 可以使用realloc来调整动态开辟的内存
//	//
//	 //realloc追加内存的两种方式，
//	 //动态内存被放在内存中的堆区，堆区中有一些已被分配的内存和未被分配的内存，未分派的内存通常被夹在已分派之间
//	 //而realloc函数在给p追加内存时，
//		//	若追加的内容未超过p后面的未分派的内存大小，
//		//		则将就将p后面的未分派的内存追加给p
//		//	若追加的内容超过p后面的未分派的内存大小，
//		//		则将在堆区中新开辟一块满足p大小的空间给p，并将p之前旧空间的内容拷贝到新的空间，释放旧的空间
//	 //
//	 //realloc函数的使用注意事项：
//		//	1，如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//		//	2，如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//		//		开辟一块满足内存需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
//		//	3，当追加的内容足够大，realloc会返回NULL，得用一个新的变量来接收realloc函数的返回值
//	//
//
//
//	//int* ptr = realloc(p, INT_MAX+1); // 超出最大范围
//
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL) 
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else 
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	// 释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 1,空指针解引用
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40); 
//	// 万一malloc失败，p就被赋值未NULL
//	*p = 0; // err
//
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		*(p + i) = i; //err
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 2，对动态开辟空间的越界访问
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)(malloc(5 * sizeof(int)));
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		// 开辟的空间只有20bit，循环赋值需要40bit,越界访问
//		for (i = 0; i < 10; i++) 
//		{
//			*(p + i) = i;
//		}
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


// 对非动态开辟空间使用free释放
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int* p = &a;

	// 对非动态开辟空间使用free释放
	free(a);// err
	return 0;
}