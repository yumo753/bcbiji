#define _CRT_SECURE_NO_WARNINGS 1

// 函数指针数组
// 计算器
//#include <stdio.h>
//
//void print() 
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do 
//	{
//		print();
//		printf("请选择：\n>:");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			printf("请输入两个数：(空格隔开)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数：(空格隔开)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数：(空格隔开)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数：(空格隔开)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入有误\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//// 过于臃肿复杂 


//// 改进(自己写的)
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int (*parr[4])(int, int) = { &Add, &Sub, &Mul, &Div };
//
//void calculate(int i) 
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数：(空格隔开)\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*parr[i - 1])(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		print();
//		printf("请选择：\n>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calculate(input);
//			break;
//		case 2:
//			calculate(input);
//			break;
//		case 3:
//			calculate(input);
//			break;
//		case 4:
//			calculate(input);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入有误\n");
//		}
//	} while (input);
//
//	return 0;
//}


//// 改进(老师写的)
// // 改进(老师写的)
// 使用if-else替换了switch函数
// 创建了函数指针数组，未设置数组容量，由编译器自己算，
// 	// 后续添加其他运算时改动小，只需添加运算函数，改菜单、和第一个判断语句即可
// 在数组首位放了一个0，使数组下标与菜单选项保持一致
// 利用菜单选项作为数组的下标索引值 - i
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0, &Add, &Sub, &Mul, &Div };
//	do
//	{
//		print();
//		printf("请选择：\n>:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) 
//		{
//			printf("请输入两个操作数(空格隔开)\n:>");
//			scanf("%d %d", &x, &y);
//			int ret = (*pfArr[input])(x, y);
//			printf("%d\n", ret);
//
//			//printf("%d\n", (*pfArr[input])(x, y));
//		}
//		else if (input == 0) 
//		{
//			printf("退出\n");
//		}
//		else 
//		{
//			printf("选择有误\n");
//		}
//	} while (input);
//	return 0;
//}



// 回调函数Cala()
// 回调函数的参数类型为函数指针
// 函数指针类型 -> int (*___)(int, int)
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void Calc(int (* pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数：(空格隔开)\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		print();
//		printf("请选择：\n>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择有误\n");
//		}
//	} while (input);
//	return 0;
//}

// 回调函数
//// 打印字符串演示
//#include <stdio.h>
//
//void print(char* str)
//{
//
//    printf("Hello %s\n", str);
//}
//
//void test(void (*f)(char*))
//{
//    printf("test()\n");
//    f("world");
//}
//
//int main()
//{
//    test(print);
//    return 0;
//}

//// 冒泡排序//只能判断整型，不能判断浮点型数组，结构体数组
//#include <stdio.h>
//
//void paixv(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int count = 0;// 判断这一趟中函数是否进行冒泡排序
//		for (j = 0; j < sz - i - 1; j++) 
//		{
//			if (arr[j] > arr[j+1]) 
//			{
//				int pum = arr[j+1];
//				 arr[j+1] = arr[j];
//				 arr[j] = pum;
//				 count = 1;
//			}
//		}
//		if (count == 0) 
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 7, 3, 9, 22, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// qsort详解，使用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 整型类型比较
int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
    // 将e1类型从void* 强制类型转换为int* 然后解引用
}

void test1()
{
    int arr[] = { 0, 11, 7, 3, 9, 22, 10, 13, 21, 9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}


// 浮点型类型比较
int cmp_float(const void* e1, const void* e2)
{
    //if (*(float*)e1 > *(float*)e2) 
    //{
    //    return 1;
    //}
    //else if (*(float*)e1 < *(float*)e2)
    //{
    //    return -1;
    //}
    //else if (*(float*)e1 == *(float*)e2)
    //{
    //    return 0;
    //}
    return ((int)(*(float*)e1 - *(float*)e2));
    // 将e1类型从void* 强制类型转换为float* 然后解引用

}

void test2()
{
    float arr[] = { 2.0, 11.2, 7.3, 3.5, 9.7, 22.2, 10.9, 13.3, 21.2, 9.1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_float);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%.2f ", arr[i]);
    }
}


// 结构体类型比较
struct Stu
{
    char name[30];
    int age;
};

// 比较两个整型
int cmp_stu_by_age(const void* e1, const void* e2) 
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

// 比较两个字符串
// 字符串的比较不能用><=，应该用strcmp函数
    // strcmp() 会根据 ASCII 编码依次比较 str1 和 str2 的每一个字符，直到出现不到的字符，或者到达字符串末尾（遇见\0）
    // 返回值：
    // 如果返回值 < 0，则表示 str1 小于 str2。
    // 如果返回值 > 0，则表示 str2 小于 str1。
    // 如果返回值 = 0，则表示 str1 等于 str2。

int cmp_stu_by_name(const void* e1, const void* e2)
{
    return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name );
}

void test3()
{
    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 10}, {"wangma", 30} };
    int sz = sizeof(s) / sizeof(s[0]);
    //qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);// 根据age排序
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name); // 根据name排序
}


int main()
{
    //test1();
    //printf("\n");
    //test2();
    //printf("\n");
    test3();
    printf("\n");
    return 0;
}