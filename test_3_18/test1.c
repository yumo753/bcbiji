////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}

// 猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	while (1) 
//	{
//		int i, num;
//		int suiji = rand() % 20;
//		while (1) 
//		{
//			printf("你猜是几：");
//			scanf("%d", &num);
//			if (num > suiji) 
//			{
//				printf("大了\n");
//			}
//			else if(num < suiji) 
//			{
//				printf("小了\n");
//			}
//			else if (num == suiji) 
//			{
//				printf("猜对了");
//				break;
//			}
//		}
//		printf("你想继续游戏吗？(Y/N)");
//		scanf("%d", &i);
//		if (i == 'Y')
//		{
//			printf("游戏继续");
//			continue;
//		}
//		else if(i == 'N')
//		{
//			printf("游戏结束");
//			break;
//		}
//	}
//	return 0;
//}

// 时间戳：当前计算机的时间 - 计算机的起始时间（1970.1.1.0:0:0）= (xxx)秒
// 时间戳是一只在变化的，可以拿时间戳来设置随机数的生成起始点

//// 猜数字游戏（1-100）
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void put()//打印菜单
//{
//	printf("*********************************\n");
//	printf("******* 1.play   0.exit *********\n");
//	printf("*********************************\n");
//}
//
//
//void game()
//{
//	// 1、生成一个随机数
//	printf("猜数字\n");
//	int num;//接收猜的数的
//	// 拿时间戳来设置随机数的生成起始点
//	// time_t time(time_t* timer) 
//	// time()函数最终会返回一个 time_t 的结果，他的参数时指针类型
//	//srand((unsigned int)time(NULL));
//	// 将time_t类型强制转换为整数类型
//	// NULL空指针没有什么实际的效果	
//	// srand()函数在整个程序中只需要执行一次就行，
//	// 执行多次会造成随机数的步长较小，不够随机，应该将srand()函数放到主函数中
//
//	//int suiji = rand();// 生成随机数
//	int suiji = rand() % 100 + 1; /// 生成1到100的随机数
//	// rand()函数，会返回一个0 - RAND_MAX（0x7FFF(32767)）的随机整数数
//	// 但有一个缺陷，当程序在次运行时，生成的随机数与上一次的一致
//	// C语言建议在生成随机数时给srand()设置一个随机起点（你格着套娃呢？）
//	// 当起点固定时，生成的随机数也固定
//	// 在未设置时，随机起点为默认值，也就不奇怪两次生成的随机数一样
//	//printf("%d\n", suiji); // 打印随机数
//
//	// 猜数字
//	while (1) 
//		{
//			printf("你猜是几：");
//			scanf("%d", &num);
//			if (num > suiji) 
//			{
//				printf("大了\n");
//			}
//			else if(num < suiji) 
//			{
//				printf("小了\n");
//			}
//			else if (num == suiji) 
//			{
//				printf("猜对了\n");
//				break;
//			}
//		}
//}
//
//
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		put();
//		printf("你的选择是: ");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();// 猜数字函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入有误！\n");
//			break;
//		}
//	}while (input);
//}


//// goto语句 跳转语句
//#include<stdio.h>
//int main()
//{
//	again:
//		printf("Hello, nmsl\n");
//	goto again;// 死循环
//
//	//printf("+++++++\n");
//	//goto agina;
//	//printf("=======\n");// 这一行语句由于goto跳过了
//	//agina:
//	//	printf("*******\n");
//	return 0;
//}

//// 一个关机程序 goto语句
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	// 在电脑的cmd中输入，shutdown -s -t 60，电脑将会在一分钟后关机
//	// shutdown -a, 取消关机指令
//	// C语言中 sysstem()函数用来执行系统命令
//again:
//	printf("电脑在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入>：");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪")) 
//	// strcmp()，比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}


//// 一个关机程序 while语句
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	// 在电脑的cmd中输入，shutdown -s -t 60，电脑将会在一分钟后关机
//	// shutdown -a, 取消关机指令
//	// C语言中 sysstem()函数用来执行系统命令
//	while (1) 
//	{
//		printf("电脑在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入>：");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//			// strcmp()，比较两个字符串
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "yumo";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	// strcpy在拷贝时会将arr1字符中的所有字符包括"\0"拷贝到arr2中
//	// arr2在打印输出时碰到"\0"就会停止
//	printf("arr2: %s\n", arr2);
//	printf("arr1: %s\n", arr1);
//	return 0;
//}

//// memset
///// memory - 内存，set设置
//// C 库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
//#include <stdio.h>
//int main()
//{
//	char arr1[20] = "Hello Woeld!";
//	memset(arr1, '*', 5);
//	printf(arr1);
//	return 0;
//}


// 函数求和
// 
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}


//// 函数求最大值
//#include <stdio.h>
//
//// 函数的定义
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	//return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 函数的使用
//	int max = MAX(a, b);
//	printf("MAX: %d", max);
//	return 0;
//}


//// 写一个函数交换两个整型
//#include <stdio.h>
//
//void swap1(int x, int y)
//// 当实参传递给形参的时候
//// 形参实际就是实参的一份临时拷贝
//// 对形参的修改是不会印象到实参的
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//
//	printf("向函数传入a和b的值\n");
//	// 调用函数spap1（传值调用）
//	swap1(a, b);
//	printf("a = %d, b = %d\n", a, b);
//
//	printf("向函数传入a和b的地址值，指针\n");
//	// 调用函数spap2（传址调用）
//	swap2(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//// 通过函数判断素数
//#include <stdio.h>
//#include <math.h>
//
//int sushu(int i)  
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//	{
//			break;
//	}
//	}
//	if (j > sqrt(i))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b, i;
//	printf("多少到多少的素数>：（空格隔开）");
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (sushu(i) == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}	
//	return 0;
//}

//// 通过函数求闰年
//#include <stdio.h>
//
//int runnian(int i)
//{
//	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int a, b, i=0;
//	printf("多少到多少的闰年>：（空格隔开）");
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (runnian(i) == 1)
//		{
//			printf("%d是闰年\n", i);
//		}
//	}
//	return 0;
//}


// 通过函数用二分法查找有序数组中一个数的下标
#include <stdio.h>

// 本质上函数的arr是一个指针
int twofen(int arr[], int num, int sz)
{
	int left = 0;// 左下标
	int right = sz - 1;// 右下标
	//int middle; // 中间

	while (right >= left )
	{
		int middle = (left + right) / 2;
		if (num > arr[middle])
		{
			left = middle + 1;
			
		}
		else if (num < arr[middle])
		{
			right = middle - 1;
		} 
		else
		{
			return middle;
		}
	}
	return -1;
}

int main()
{
	int num1;// 查找的数
	int num2;// 下标
	int arr[] = { 6, 12, 19, 28, 30, 48, 49, 50, 60, 71 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("你要找啥数？:");
	scanf("%d", &num1);
	num2 = twofen(arr, num1, sz);
	// 注意当向函数中传入数组时，传入的其实是数组中第一个元素的地址（指针）
	if (num2 == -1) 
	{
		printf("找不到");
	}
	else 
	{
		printf("%d的下标是%d", num1, num2);
	}
	return 0;
}
