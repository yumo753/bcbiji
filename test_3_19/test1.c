////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}

//#include <stdio.h>
//
//int jiou(int x, int* pnum)
//{
//	if (x % 2 == 0)
//	{
//		// *pnum++; // 错误写法，++会作用于pnum，而不会作用于*pnum
//		(*pnum)++; // 真确写法，用括号时，++会作用于*pnum
//		return 0;
//	}
//	else
//	{
//		(* pnum)++;
//		return 1;
//	}
//
//}
//
//int main()
//{
//	int i, num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (jiou(i, &num) == 0) 
//		{
//			printf("%d偶数\n", i);
//		}
//		else
//		{
//			printf("%d奇数\n", i);
//		}
//	}
//	printf("函数调用了%d次", num);
//	return 0;
//}

//#include <stdio.h>
//
//void new()
//{
//	printf("Fuck you\n");
//}
//
//void three()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		new();
//	}
//}
//
//int main()
//{
//	three();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int mian()
//{
//    int len = 0;
//    // 1
//    len = strlen("abc");
//    printf("%d\n", len);
//    // 2
//    //printf("%d\n", strlen("abc"));
//    return 0;
//}
// 离谱他妈给离谱开门，离谱到家了


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	// 结果为4321， 不是434343，也不是43
//	// printf()函数的返回值是，打印字符的个数
//	// 比如printf("%d", 43)的返回值就是2
//	// 中间层打印最里层的返回值“2”，中间层的返回值是“1”
//	// 最外层打印中间层的返回值“1”.最外层的返回值是“1”
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	// 多了一个是因为加了"\n"
//	return 0;
//}


//#include <stdio.h>
//// #include 引用头文件时，编译器会将头文件的全部代码拷贝
//// 有1000拷1000，有10000拷10000，有多少拷多少
//// 在实际工作中，一份工程是由多个人共同完成的，
//// 想象一下，你引一份，我引一份，他再引一份，
//// 同样的代码重复多分，嘭，电脑炸了
//// 为了避免同一个头文件被多次引用，在头文件中会....
//// 看add.h去，写不下了
//
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = 0;
//	num = Add(a, b);
//	printf("num = %d\n", num);
//}


// 接受一个整型值（无符号），按照顺序打印它的每一位。例如︰输入:1234，输出1 2 3 4
// 
//#include <stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n%10);
//	// 把大事化小（找到整数最右边的数，然后打印）
//	// printf(1234)
//	// printf(123) 4
//	// printf(12) 3 4
//	// printf(1) 2 3 4
//	// printf() 1 2 3 4
//	//
//}
//
//int main()
//{
//	int num;
//	printf("输入一个整数");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


// 编写函数不允许创建临时变量，求字符串的长度。
 
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	// while循环
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	// 递归
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//	// 把大事化小（找‘\0’）
//	// my_strlen("yum");
//	// 1 + my_strlen("um");
//	// 1 + 1 + my_strlen("m");
//	// 1 + 1 + 1 + my_strlen("");
//	// 1 + 1 + 1 + 0
//	// 3
//}
//
//int main()
//{
//	char arr[] = "yum";
//	// int len = strlen(arr);// 求字符串长度
//	// printf("%d\n", len);
//
//	int len = my_strlen(arr);
//	// arr数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}

//// 求n的阶乘（递归）
//#include <stdio.h>
//
//// 循环
//int Fac1(int n)
//{
//	int i = 0;
//	int set = 1;
//	for (i = 1; i <= n; i++)
//	{
//		set *= i;
//	}
//	return set;
//}
//
//// 递归
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("你要求谁的阶乘？\n>:");
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d的阶乘是%d", n, ret);
//	return 0;
//}

// 求第n个斐波那契数
// 1、1、2、3、5、8、13、21、34

//#include <stdio.h>
//
//int count = 0;
//
//// 递归
//int Fib1(int n)
//{
//	if (n == 3) 
//	{
//		count = count + 1;// 测试第三个斐波那契数的计算次数
//	}
//	 if (n <= 2) 
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib2(n - 1) + Fib2(n - 2);
//	}
//}
//// 这个递归函数的效率过低，比如要求第50个斐波那契数
////					50
////			49			    48
////		48	  47		47     46
////	   47 46 46 45	   46 45  45 44
////			..................
////		运算量过大，重复运算过多
//// 效率过低，运算量过大，重复运算过多，有些工作并不适合用递归来处理
////
//
//// 循环
//int Fib2(int n)// 自己写的
//{
//	int i = 0;
//	int f0 = 0;
//	int f1 = 0;
//	int f2 = 1;
//	for (i = 1; i <= n; i++)
//	{
//		if (i >= 2)
//		{
//			f0 = f1;
//			f1 = f2;
//			f2 = f0 + f1;
//		}
//	}
//	return f2;
//}
//
//int Fib3(int n) // 老师写的
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	printf("你要求第几个的斐波那契数？\n>:");
//	scanf("%d", &n);
//	num = Fib3(n);
//	printf("%d的斐波那契数是%d\n", n, num);
//	//printf("第三个斐波那契数被计算了%d次", count);
//	return 0;
//}

#include <stdio.h>

void test(int i) 
{
	if (i < 100000)
	{
		test(i + 1);
	}
}

int main()
{
	test(1);
	return 0;
}