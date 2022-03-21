////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	// 创建一个数组存放10个整型
//	int arr[10];
//	// int - 数组类型
//	// arr - 数组名
//	// 10 - 数组中元素的个数
//
//	// 创建一个数组存放5个字符
//	char arr1[5];
//
//	int n = 5;
//	char arr1[n];// 错误写法
//	// 数组的 [ ] 只能输入常量表达式，n属于变量
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 }; 
//	// 不完全初始化，剩下元素默认初始化为0
//	printf("arr[4]: %d\n", arr[4]);
//	printf("arr[4]的ASCII码值: %d\n", arr[4]);
//
//	char arr1[5] = {'a', 'b'};
//	// 不完全初始化，剩下元素默认初始化为0
//	printf("arr1[2]: %c\n", arr1[2]);
//	printf("arr1[2]的ASCII码值: %d\n", arr1[2]);
//
//	char arr2[5] = "yu";
//	// 不完全初始化，剩下元素默认初始化为0
//	printf("arr2[2]: %c\n", arr2[2]);
//	printf("arr2[2]的ASCII码值: %d\n", arr2[2]);
//
//	float arr3[5] = { 2.3, 1.4 };
//	// 不完全初始化，剩下元素默认初始化为0
//	printf("arr3[2]: %f\n", arr3[2]);
//	printf("arr3[2]的ASCII码值: %d\n", arr3[2]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 }; 
//
//	char arr1[5] = {'a', 'b'};
//	char arr11[5] = {'a', 98};
//
//	char arr2[] = "yumo753";
//
//	printf("sizeof(arr2): %d\n", sizeof(arr2)); // 8
//	// sizeof()-计算arr2所占空间的大小，包括字符串的结束符‘\0’
//	// 8个元素 - char 8*1 = 8
//
//	printf("strlen(arr2): %d\n", strlen(arr2)); // 7
//	// strlen()-只计算字符串的长度，‘\0’之前的字符个数
//	// 7
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("sizeof(arr1): %d\n", sizeof(arr1)); // 4
//	printf("strlen(arr1): %d\n", strlen(arr1)); // 3
//
//	printf("sizeof(arr2): %d\n", sizeof(arr2)); // 3
//	printf("strlen(arr2): %d\n", strlen(arr2)); // 随机值
//	// strlen只计算'\0'之前的字符个数，arr2后面没有'\0'，
//	// 而strlen只有在碰到‘\0’时才会终止计算，所以strlen(arr2)是随机值
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//// 字符数组
//	//int i;
//	//char arr1[] = "yumo753";
//	//// [y] [u] [m] [o] [7] [5] [3] [\0]
//	////  0   1   2   3   4   5   6   7
//	//// 想打印‘o’
//	//printf("%c\n", arr1[3]);
//
//	//// 循环遍历
//	//int len = strlen(arr1);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c\n", arr1[i]);
//	//}
//
//	// 整型数组
//	int i;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf(" &arr1[%d] ;%p\n", i, &arr1[i]);
//	}
//
//	/*
//	 &arr1[0] ;000000245AD6F7E8
//	 &arr1[1] ;000000245AD6F7EC
//	 &arr1[2] ;000000245AD6F7F0
//	 &arr1[3] ;000000245AD6F7F4
//	 &arr1[4] ;000000245AD6F7F8
//	 &arr1[5] ;000000245AD6F7FC
//	 &arr1[6] ;000000245AD6F800
//	 &arr1[7] ;000000245AD6F804
//	 &arr1[8] ;000000245AD6F808
//	 &arr1[9] ;000000245AD6F80C
//	 可以看到 &arr1[n] - &arr1[n-1] = 4
//	 int类型所占空间的大小为4个字节
//	 数组在内存中是连续存放的
//	*/
//
//	return 0;
//}
//
// 二维数组的初始化
//#include <stdio.h>
//int main()
//{
//	int arr[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	//int arr1[2][] = { 1, 2, 3, 4, 5, 6, 7, 8 };// 报错，二维数组可以省略行，但不能省略列
//	int arr2[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	return 0;
//}

//// 二位数组的使用
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1, 2, 3}, {4, 5} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//}


//// 二位数组在内存中的存储
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1, 2, 3}, {4, 5} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	/*
//	&arr[0][0] = 000000A1F3AFFBE8
//	&arr[0][1] = 000000A1F3AFFBEC
//	&arr[0][2] = 000000A1F3AFFBF0
//	&arr[0][3] = 000000A1F3AFFBF4
//	&arr[1][0] = 000000A1F3AFFBF8
//	&arr[1][1] = 000000A1F3AFFBFC
//	&arr[1][2] = 000000A1F3AFFC00
//	&arr[1][3] = 000000A1F3AFFC04
//	&arr[2][0] = 000000A1F3AFFC08
//	&arr[2][1] = 000000A1F3AFFC0C
//	&arr[2][2] = 000000A1F3AFFC10
//	&arr[2][3] = 000000A1F3AFFC14
//	二位数组在内存中也是连续存放的
//	步长为4
//	*/
//	return 0;
//}

//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;// 假设这一趟要排序的数据已经有序
//		// 每一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0; // 本趟排序的数据并不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			//printf("flag：%d\n", flag);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i;
//	//int arr[] = { 2, 4, 5, 1, 3, 8, 6, 7, 10, 9 };
//	// 对arr进行排序，排成升序
//	int arr[] = { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	// 会进行两趟冒泡排序，第一趟将10拿到最后面
//	// 此时数组为 { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
//	// 在第二趟排序时发现，数组时有序的，无需交换 arr[j] 和 arr[j+1]
//	// 跳出循环
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// arr是数组，数组在传参给函数时传递的其实时数组首元素的地址 &arr[0]
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{ 
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//
//	printf("    arr：%p\n", arr);
//	printf("&arr[0]：%p\n", &arr[0]);
//	printf("===========================\n");
//	printf("  *arr: %d\n", *arr);
//	printf("arr[0]: %d\n", *arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 1, sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位时字节
//	// 2，&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//
//	// 数组首个元素的地址
//	printf("      arr：%p\n", arr);
//	printf("    arr+1：%p\n", arr + 1);
//
//	// 数组首个元素的地址
//	printf("  &arr[0]：%p\n", &arr[0]);
//	printf("&arr[0]+1：%p\n", &arr[0] + 1);
//
//	// 整个数组的地址
//	printf("     &arr：%p\n", &arr);
//	printf("   &arr+1：%p\n", &arr + 1);
//
//	/*
//		  arr：00000055C03FFC98
//		arr+1：00000055C03FFC9C
//	  &arr[0]：00000055C03FFC98
//	&arr[0]+1：00000055C03FFC9C
//		 &arr：00000055C03FFC98
//	   &arr+1：00000055C03FFCB4
//	   B4(16) - 98(16) =180(10) - 152(10) =  28
//	   arr数组元素的个数是7，一个元素的大小是4，4*7=28
//	   &arr存放的是整个元素的地址
//	*/
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char arr[3][3] = { '*', '*', '*', '*', '*', '*', '*', '*', '*' };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 0) 
			{
				printf(" %c", arr[i][j]);
			}
			else if (j == 1 || j == 2)
			{
				printf(" | %c", arr[i][j]);
			}
		}
		if (i<2)
		{
			printf(" \n___|___|___\n");
		}
		else if (i = 2) 
		{
			printf("\n   |   |\n");
		}

	}
	return 0;
}
// * | * | * 
//___|___|___
// * | * | * 
//___|___|___
// * | * | * 
//   |   |