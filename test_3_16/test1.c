////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}


//// 输入三个数从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int num = 0;
//	printf("输入三个整数，用空格隔开");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) 
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	if (a < c)
//	{
//		num = a;
//		a = c;
//		c = num;
//	}
//	if (b < c)
//	{
//
//		num = c;
//		c = b;
//		b = num;
//	}
//	printf("%d, %d, %d", a, b, c);
//	return 0;
//}


//// 打印 1 - 100之间3的倍数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++) 
//	{
//		if (i % 3 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//}


//// 最大公约数
//#include <stdio.h>
//int main() 
//{
//	int a, b, a1, b1;
//	int num;
//	int yu = 0;
//	printf("输入要求公约数的两个数（用空格隔开）：");
//	scanf("%d %d", &a, &b);
//	if (a < b) 
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	a1 = a;
//	b1 = b;
//	while (yu = a1 % b1) // 老师牛逼
//	{
//		//yu = a1 % b1;
//		a1 = b1;
//		b1 = yu;
//	}
//	printf("%d和%d的最大公约数是：%d", a, b, b1);
//	return 0;
//}

//// 求闰年
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1000; i < 2001; i++) 
//	{
//		if (((i % 4 == 0) && (i % 100 != 0 ))|| (i % 400 == 0)) 
//		{
//			printf("%d是闰年\n", i);
//			j++;
//		}
//	}
//	printf("j = %d", j);
//	return 0;
//}

//// 打印100 - 200的素数
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	//int num;
//	for (i = 100; i < 201; i++) 
//	{
//		//num = 0;
//		for (j = 2; j < i + 1; j++)
//		{
//			if (i % j == 0)
//			{
//				//num++;
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d是素数\n", i);
//		}
//		else if (i == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}


//// 打印100 - 200的素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j;
//	// sqrt 开平方的数学库函数
//	for (i = 101; i < 201; i++) 
//	// 可改进，由于偶数一定不是素数(2除外)
//	// 	for (i = 99; i < 201; i+2) // i不能等于偶数
//	{
//		//num = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if ( i % j == 0)
//			{
//				//num++;
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d是素数\n", i);
//		}
//		else if (i == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}

// 

