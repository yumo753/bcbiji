#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	// aa表示整个数组的地址，&aa取出整个数组的地址，&aa+1跳过整个数组后的地址，步长位整个数组的长度
//	// (int*)(&aa + 1)，还是为跳过整个数组后的地址，但步长位int类型的长度
//
//	int* ptr2 = (int*)(*(aa + 1));
//	// aa表示数组首元素的地址 -> 第一行一维数组的整个一维数组的地址,步长为该一位数组的长度
//	// aa + 1 -> 第二行一维数组的整个一维数组的地址,步长为该一位数组的长度 - 数组指针
//	// 解引用后强制转换为整型指针，步长变为int类型的长度
//
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));// 10  ,5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work", "at", "tmdalibaba" };
//	// char* p = "abcdef";
//		// 将字符串"abcdef"的首元素的地址放到p中，*p不可更改，因为p指向的是一个常量
//	// a实际上存放的是，"w"的地址,"a"的地址,"t"的地址
//
//	char** pa = a;
//	// a表示首元素的地址，a中首元素是一个指针，可以使用二级指针接收
//
//	pa++;
//	// 指向a中第二个元素的地址
//
//	printf("%s\n", *pa);// at
//	// *p，解引用得到第二个元素，一个指向字符串常量的指针，可以用%s和%p输出
//	// %s，以一个地址为开头打印一个字符串，%s后的内容必须是一个字符串或字符串地址或指针
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);// POINT
//	printf("%s\n", *--*++cpp + 3);// ER
//	printf("%s\n", *cpp[-2] + 3);// ST
//	printf("%s\n", cpp[-1][-1] + 1);// EW
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	// pulPtr指向数组的首元素
//
//	*(pulPtr + 3) += 3;
//	// pulPtr + 3指向数组的第四个元素
//	// *(pulPtr + 3) = *(pulPtr + 3) + 3 ;
//	// pulArray[3] = pulArray[3] + 3 = 9+3=12
//
//	printf("%d, %d", *pulPtr, *(pulPtr + 3));// 6, 12
//	return 0;
//}

//// 写一个函数逆序字符串的内容
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(char* pstr) 
//{
//	assert(pstr);
//	int count = 0;
//	while (*pstr != '\0')
//	{
//		pstr++;
//		count++;
//	}
//	return count;
//}
//
//void nixv(char* pstr) 
//{
//	assert(pstr);
//	int len = my_strlen(pstr);
//	char* left = pstr;// 左
//	char* right = pstr + len-1;// 右
//	while (right >= left) 
//	{
//		char map = *right;
//		*right = *left;
//		*left = map;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	printf("输入字符串\n>:");
//	gets(str);
//	nixv(str);
//	printf("%s\n", str);
//	return 0;
//}

//// 用户输入2，5，计算2+22+222+2222+22222=？
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("输入两个数空格隔开\n>:");
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int aa = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) 
//	{
//		aa = aa * 10 + a;
//		sum = sum + aa;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//// 求出0~100000的水仙花数
//#include <stdio.h>
//
//
//int cifangsum(int a, int n) 
//{
//	int i = 0;
//	int num = a;
//	int sum = 1;
//	int count = 0;;
//
//	while (num) 
//	{
//		int aa = num % 10;
//		sum = 1;
//		for (i = 0; i < n; i++) 
//		{
//			sum = aa * sum;
//		}
//		count += sum;
//		num = num / 10;
//	}
//	return count;
//}
//
//int cifang(int a, int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < n; i++)
//	{
//		sum = a * sum;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++) 
//	{
//		// 判断i是否为自幂数
//		// 1，计算i的位数
//		int num = i;
//		int n = 1;
//		int sum = 0;
//		while (num /= 10)
//		{
//			n++;
//		}
//
//		// 2，计算i的每一位的n次方之和 sum
//		num = i;
//		while (num) 
//		{
//			sum = sum + cifang(num%10, n);
//			num = num / 10;
//		}
//		//sum = cifangsum(num, n);
//
//		// 3,比较i == num
//		if (i == sum) 
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}


//// 打印菱形
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("菱形中间行的行数\n>：");
//	scanf("%d", &n);
//
//	// 输出正三角
//	for (i = 0; i < n; i++) 
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++) 
//		{
//			printf(" ");
//		}
//
//		// 打印*
//		for (j = 0; j < 2 * i + 1; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int nn = n - 1;
//	// 输出倒三角
//	for (i = 0; i < nn; i++)
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//
//		// 打印*
//		for (j = 2 *(nn - i - 1) + 1; j > 0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
///*
//	  *
//	* * *
//  * * * * *
//* * * * * * *
//  * * * * *
//	* * *
//	  *
//*/

//// 不能填入结构体的内容
//#include <stdio.h>
//
//struct S 
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	// struct S a;
//	//	struct S *p = &a;
//
//	a.a = 99;
//	printf("%d\n",*p.a);
//	/*
//	A, a.a
//	B, *p.a
//	// *优先级高于. ，会先与p.a结合，会报错，非法间接寻址
//	C, p->a
//	D, (*p).a
//	*/
//}


//#include <stdio.h>
//
//struct stu 
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p) 
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = {  { 9801, "zhangsan", 20 },
//								{ 9802, "lisi", 19 },
//								{ 9803, "wangwu", 18 }
//							  };
//	fun(students + 1);//lisi
//
//	return 0;
//}


//// 喝汽水问题
//// 喝汽水，1瓶汽水1元, 2个空瓶可以换一瓶汽水,给20元，可以多少汽水（编程实现)
//#include <stdio.h>
//int main()
//{
//	//20 / 1 = 20
//	//	20 / 2 + 20 % 2 = 10
//	//	10 / 2 + 10 % 2 = 5
//	//	5 / 2 + 5 % 2 = 3
//	//	3 / 2 + 3 % 2 = 2
//	//	2 / 2 + 2 % 2 = 1
//	int jine = 0;
//	printf("输入金额：");
//	scanf("%d", &jine);
//	int num = jine; // 统计金额可以买多少个瓶子
//
//	int count = jine;// 统计瓶子数量
//	
//	while (num >= 2) 
//	{
//		count += num / 2;
//		num = num / 2 + num % 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


// 排序，奇数在前，偶数在后
#include <stdio.h>

void print(int arr[], int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d\n", arr[i]);
	}
}

void move(int* pa, int sz)
{
	int* right = pa + sz; // 右
	int* left = pa;// 左
	while (left < right) 
	{
		// 从左边找偶数，没找到++，找到后从右边找奇数
		if (*left % 2 == 0)
		{
			// 从右边找奇数没找到--，找到交换
			if (*right % 2 == 1)
			{
				int map = *left;
				*left = *right;
				*right = map;
			}
			else
			{
				right--;
			}
		}
		else
		{
			left++;
		}
	}
}

int main()
{
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	int arr[] = { 1, 3, 5, 7, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);

	return 0;
}