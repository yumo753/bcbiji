#define _CRT_SECURE_NO_WARNINGS 1

//// 通用冒泡排序：回调函数，排序整型数组、浮点型数组、结构体数组 - 自己写一个qsort 
//#include <stdio.h>
//
//struct Stu
//{
//	char name[30];
//	int age;
//};
//
//// 比较大小
//
//// 整型类型比较
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//	// 将e1类型从void* 强制类型转换为int* 然后解引用
//}
//
//// 浮点型类型比较
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//	// 将e1类型从void* 强制类型转换为float* 然后解引用
//}
//
//// 结构体比较
//// 比较两个整型
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//// 比较两个字符串
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//
//
//// 交换元素
//void Swap(char* buf1, char* buf2, int width) 
//// 在交换时，必须知道宽度，否则不知道需要交换的字节的宽度
//// 当知道宽度是就可以一个字节一个字节的交换
//{
//	int i = 0;
//	for (i = 0; i < width; i++) 
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//// 自己写的qsort
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2)) 
//	// base 待排序数组首元素地址
//	// sz 待排序数组元素个数
//	// width 元素在内存中占用空间大小，单位字节
//{
//	int i = 0;
//	// 趟数
//	for (i = 0; i < sz - 1; i++) 
//	{
//		// 每一趟比较对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) 
//		{
//			// 两个元素比较
//			if (cmp( (char*)base + j*width, (char*)base + (j+1)*width ) > 0) 
//			// (char*)e1 + width = e2
//				// 将e1强制类型转换为char*的指针，再加上元素的宽度就等于e2的地址
//			{
//				// 交换
//				Swap( (char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//			;
//		}
//	}
//}
//
//void test1() 
//{
//	int arr1[] = { 0, 11, 7, 3, 9, 22, 10, 13, 21, 18 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	
//	// 调用 bubble_sort的程序员一定知道自己排序的是什么数据
//	// 就应该知道如何比较排序数组中的元素
//	bubble_sort(arr1, sz1, sizeof(arr1[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz1; i++) 
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//void test2()
//{
//	float arr2[] = { 2.0, 11.2, 7.3, 3.5, 9.7, 22.2, 10.9, 13.3, 21.2, 9.1 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//
//	// 调用 bubble_sort的程序员一定知道自己排序的是什么数据
//	// 就应该知道如何比较排序数组中的元素
//	bubble_sort(arr2, sz2, sizeof(arr2[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%.2f ", arr2[i]);
//	}
//}
//
//
//void test3()
//{
//	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 10}, {"wangma", 30} };
//	int szs = sizeof(s) / sizeof(s[0]);
//
//	// 调用 bubble_sort的程序员一定知道自己排序的是什么数据
//	// 就应该知道如何比较排序数组中的元素
//	bubble_sort(s, szs, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test1();
//	printf("\n\n");
//	test2();
//	printf("\n\n");
//	//test3();
//
//	return 0;
//}


//// 一维数组
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	// 数组名是首元素地址
//	// 1，sizeof(数组名) - 数组名表示整个数组
//	// 2，&数组名 - 数组名表示整个数组
//
//
//	printf("%d\n", sizeof(a)); // 16
//	// sizeof(数组名)-计算的是数组总大小-单位是字节-4*4=16
//
//	printf("%d\n", sizeof(a + 0)); // 8
//	// 此时数组表示首元素地址（指针）,首元素地址+0还是首元素地址(指针), 地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(*a)); // 4
//	// 此时数组表示首元素地址，对首元素地址解引用-得到首元素，元素类型为int，4个字节
//
//	printf("%d\n", sizeof(a + 1)); // 8
//	// 此时数组表示首元素地址（指针）,首元素地址+1是第二个元素地址(指针), 地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(a[1])); // 4
//	// 第二个元素大小，元素类型为int，4个字节
//
//	printf("%d\n", sizeof(&a)); // 8
//	// &a取出的是数组的地址，数组的地址也是地址，地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(*&a)); // 16
//	// &a取出的是数组的地址，对数组的地址解引用，得到数组，sizeof计算的就是数组的大小: 4*4=16
//
//	printf("%d\n", sizeof(&a + 1)); // 8
//	// &a取出的是数组的地址，&a+1虽然地址跳过这个数组，但还是地址，地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(&a[0])); // 8
//	// &a[0]取出第一个元素的地址，地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(&a[0] + 1)); // 8
//	// &a[0]+1取出第二个元素的地址，地址大小4(32)/8(64)
//
//	return 0;
//}


// 字符数组
// char arr[ ] = { 'a', 'b', 'c', 'd', 'e', 'f' };类型
// 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("sizeof:\n");
//	
//	printf("%d\n", sizeof(arr)); // 6
//	// sizeof(数组名) - 计算的是数组总大小 - 单位是字节 - 6 * 1 = 6
//	
//	printf("%d\n", sizeof(arr + 0)); // 8
//	// 此时数组表示首元素地址（指针）,首元素地址+0还是首元素地址(指针), 地址大小4(32)/8(64)
//	
//	printf("%d\n", sizeof(*arr)); // 1
//	// 此时数组表示首元素地址，对首元素地址解引用-得到首元素，元素类型为char，1个字节
//	
//	printf("%d\n", sizeof(arr[1])); // 1
//	// 第二个元素大小，元素类型为int，4个字节
//	
//	printf("%d\n", sizeof(&arr)); // 8
//	// &a取出的是数组的地址，但还是地址，地址大小4(32)/8(64)
//	
//	printf("%d\n", sizeof(&arr+1)); // 8
//	// &a取出的是数组的地址，&a+1虽然地址跳过这个数组，但还是地址，地址大小4(32)/8(64)
//	
//	printf("%d\n", sizeof(&arr[0]+1)); // 8
//	// 取出数组首元素地址+1，还是地址，地址大小4(32)/8(64)
//
//	printf("========================\nstrlen:\n");
//	// strlen
//
//	// char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", strlen(arr)); // 随机值
//	// arr首元素地址，从首元素地址开始，向下找'\0',arr数组中没有'0'，
//	// strlen只有在碰到'\0'才会停止计算，'\0'的位置不确定，随机值
//
//	printf("%d\n", strlen(arr + 0)); // 随机值
//	// arr=0还是首元素地址，从首元素地址开始，向下找'\0',arr数组中没有'0'，
//	// strlen只有在碰到'\0'才会停止计算，'\0'的位置不确定，随机值
//
//	//printf("%d\n", strlen(*arr)); // 报错
//	// *arr-首元素，向strlen中传入一个字符，strlen的参数为char*类型的指针，
//	// strlen会把a变成97，用97作为地址值去访问，越界访问，报错
//
//
//	//printf("%d\n", strlen(arr[1])); // 报错
//	// arr[1]-第二个元素，向strlen中传入一个字符，strlen的参数为char*类型的指针，
//	// strlen会把b变成98，用98作为地址值去访问，越界访问，报错
//
//	printf("%d\n", strlen(&arr)); // 随机值
//	// &arr数组地址，数组地址等于首元素地址开始，从首元素地址开始，向下找'\0',
//	// arr数组中没有'0'，strlen只有在碰到'\0'才会停止计算，'\0'的位置不确定，随机值
//
//	printf("%d\n", strlen(&arr + 1)); // 随机值-6
//	// &arr+1跳过整个数组后地址，数组中有6个元素，随机值-6
//
//	printf("%d\n", strlen(&arr[0] + 1)); // 随机值-1
//	// &arr[0]+1第二个元素地址，从第二个元素地址开始，向下找'\0',
//
//
//	return 0;
//}


//// char arr[] = "abcdef"; 类型
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { "abcdef"};
//
//	// sizeof
//	printf("sizeof:\n");
//
//	printf("%d\n", sizeof(arr)); // 7
//	// 在C语言中，系统对字符串常量也自动加一个’\0’作为结束符，
//	// 而sizeof是计算所占空间的大小，回将'\0'纳入计算，结果：字符串中字符多少+1 = 7
//
//	printf("%d\n", sizeof(arr + 0)); // 8
//	// arr表示数组首个元素，arr+0还是表示数组首个元素，是一个地址，地址大小4(32)/8(64)
//
//	
//	printf("%d\n", sizeof(*arr)); // 1
//	// 此时数组表示首元素地址，*arr对首元素地址解引用-得到首元素，元素类型为char，1个字节
//	
//	printf("%d\n", sizeof(arr[1])); // 1
//	// 第二个元素大小，元素类型为int，4个字节
//	
//	printf("%d\n", sizeof(&arr)); // 8
//	// &arr取出的是数组的地址，但还是地址，地址大小4(32)/8(64)
//	
//	printf("%d\n", sizeof(&arr + 1)); // 8
//	// &arr取出的是数组的地址，&arr+1虽然地址跳过这个数组，但还是地址，地址大小4(32)/8(64)
//	
//	printf("%d\n", sizeof(&arr[0] + 1)); // 8
//	// 取出数组首元素地址+1，还是地址，地址大小4(32)/8(64)
//	
//	printf("========================\nstrlen:\n");
//	// strlen
//
//	// char arr[] = { "abcdef"};
//
//	printf("%d\n", strlen(arr)); // 6
//	// arr中存放的为字符串，在C语言中，系统对字符串常量也自动加一个’\0’作为结束符
//	// 从第首个元素地址开始，向下找'\0',第七位为'\0'，统计'\0'之前的6位，6
//
//	printf("%d\n", strlen(arr + 0)); // 6
//	// arr表示数组首个元素，arr+0还是表示数组首元素地址
//	// 从第首个元素地址开始，向下找'\0',第七位为'\0'，统计'\0'之前的6位，6
//
//	//printf("%d\n", strlen(*arr)); // 报错
//	// *arr-首元素地址解引用得到首元素，向strlen中传入一个字符，而strlen函数的参数为char*类型的指针，
//	// strlen会把a变成97，用97作为地址值去访问，越界访问，报错
//
//	//printf("%d\n", strlen(arr[1])); // 报错
//	// arr[1]第二个元素，向strlen中传入一个字符，而strlen函数的参数为char*类型的指针，
//	// strlen会把a变成97，用97作为地址值去访问，越界访问，报错
//
//
//	printf("%d\n", strlen(&arr)); // 6
//	// &arr取出数组的地址，数组地址等于首元素地址，步长不相等
//	// 从第首个元素地址开始，向下找'\0',第七位为'\0'，统计'\0'之前的6位，6
//
//
//	printf("%d\n", strlen(&arr + 1)); // 随机值
//	// &arr+1跳过整个数组后的地址，地址后内容未知，随机值
//	// 从第首个元素地址开始，向下找'\0',第七位为'\0'，统计'\0'之前的6位，6
//
//	printf("%d\n", strlen(&arr[0] + 1)); // 5
//	// &arr[0]+1第一个元素地址+1，第二个元素地址
//	// 从第二元素地址开始，向下找'\0'，字符串第7个是'\0',由于从第二个开始只统计前5个
//
//	return 0;
//}



//// char* p = "abcdef"; 类型
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//
//	// sizeof
//	printf("sizeof:\n");
//
//	printf("%d\n", sizeof(p)); // 8
//	// p是指针，指针类型大小 4(32)/8(64)
//
//	printf("%d\n", sizeof(p + 0)); // 8
//	//p+0指向字符串中第二个元素地址，还是指针，指针类型大小 4(32)/8(64)
//
//	printf("%d\n", sizeof(*p)); // 8
//	// *p，对指针解引用的到字符串的首元素地址，地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(p[1])); // 1
//	// 字符串中第二个元素，类型为char，大小1个字节
//
//	printf("%d\n", sizeof(&p)); // 8
//	// 指针变量p的地址，地址大小4(32)/8(64)
//
//	printf("%d\n", sizeof(&p + 1)); // 8
//	// 跳过指针变量p的地址，步长为指针的长度，虽然跳过，但还是个地址，地址大小4(32)/8(64)
//
//
//	printf("%d\n", sizeof(&p[0] + 1)); // 8
//	// 字符串第二个元素的地址，是个地址，地址大小4(32)/8(64)
//
//
//	printf("========================\nstrlen:\n");
//	// strlen
//	// 	char* p = "abcdef";
//
//	printf("%d\n", strlen(p)); // 6
//	// 在C语言中，系统对字符串常量也自动加一个’\0’作为结束符，p指向的是字符串的首元素地址
//	// 从第首元素地址开始，向下找'\0'，第七个是'\0',统计前六个
//
//
//	printf("%d\n", strlen(p + 0)); // 6
//	// p+0，指向的还是首元素地址，
//	// 从第首元素地址开始，向下找'\0'，第七个是'\0',统计前六个
//
//	//printf("%d\n", strlen(*p)); // 报错
//	// strlen接收的是char*类型的指针，接收到一个字符时，
//	// 会将该字符的ASCII码值作为地址去访问，越界访问，报错
//
//	//printf("%d\n", strlen(p[1])); // 报错
//	// strlen接收的是char*类型的指针，接收到一个字符时，
//	// 会将该字符的ASCII码值作为地址去访问，越界访问，报错
//
//	printf("%d\n", strlen(&p)); // 随机数
//	// 指针变量p的地址，对于'\0'未知，随机数
//
//	printf("%d\n", strlen(&p + 1)); // 随机值
//	// &p+1跳过指针变量p的地址，对于'\0'未知，随机数
//
//	printf("%d\n", strlen(&p[0] + 1)); // 6-1 = 5
//	// &p[0]字符串首个元素，&p[0] + 1字符串的第二个元素
//	// 从第二元素地址开始，向下找'\0'，字符串第7个是'\0',由于从第二个开始只统计前5个
//
//	return 0;
//}


// 二维数组
#include <stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf( "%d\n", sizeof(a) );// 48 3*4*4(int类型)

	
	printf( "%d\n", sizeof(a[0][0]) ); // 4 第一行第一个元素
	
	
	printf( "%d\n", sizeof(a[0]+1) ); // 8 二维数组中第一个一维数组的地址+1=第二个一维数组的地址，地址
	
	
	printf( "%d\n", sizeof(*(a[0] + 1)) );// 4 第二个一维数组的地址解应用，第二个一维数组中首元素
	
	
	printf( "%d\n", sizeof(a + 1) ); // 8 二维数组数组名指向数组的首元素地址，+1后还是，指针
	
	
	printf( "%d\n", sizeof(&a[0] + 1) ); // 8 指针


	printf( "%d\n", sizeof(*(&a[0] + 1)) ); // 报错
	
	
	printf( "%d\n", sizeof(*a) ); // 4


	printf( "%d\n", sizeof(a[3])); // 报错
	return 0;
}