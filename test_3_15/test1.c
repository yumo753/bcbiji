//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 1; i < 11; i++)
//    {
//        if (i == 5)
//        {
//            continue;
//        }
//        if (i == 7) 
//        {
//            break;
//        }
//        printf("%d \n", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i < 11; i++)
//    {
//        if (i = 5) {
//            printf("nmsl\n");
//        }
//        printf("awsl\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) 
//	{
//		for (; j < 10; j++)
//		{
//			printf("yumo\n");// 只会打印10次打印
//			// 由于j定义在for语句外
//			// i = 0开始第一次循环
//			// i = 1时，第一次循环结束，此时J=10
//			// 里循环不会再进行
//			// 
//		}
//	}
//}

// for循环中调整部分是（i++）或（++i）最后的结果都是+1，不会先判断再加一
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("susu x = %d,y = %d\n", x, y);
//	}
//	return 0;
//}

//// 当for循环中的判断语句为赋值语句时
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	// for循环中判断语句不是判断语句
//	// 而是赋值语句，将0赋值给K
//	// 0再C语言中表示假，for循环中判断语句为假，非0代表真，将会进入死循环
//	// 循环退出，一次也不执行
//	//
//	{
//		k++;
//		printf("yumo，i = %d\n", i);
//	}
//	return 0;
//}

// do..while循环

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do 
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

// 计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int i, n, num = 1;
//	printf("请输入你要求阶乘的数字：");
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)
//	{
//		num = i * num;
//	}
//	printf("%d的阶乘是%d", n,num);
//	return 0;
//}

//// 计算1! + 2! +...+ 10!
//#include<stdio.h>
//int main()
//{
//	long i=1, j=1, num = 1, sum =0;
//	for (i = 1; i < 11; i++)
//	{
//		num = 1;
//		for (j =1; j < i + 1; j++)
//		{
//			num = j * num;
//		}
//		sum = sum + num;
//	}
//	printf("1! + 2! +...+ 10! = %ld", sum);
//	return 0;
//}

//// 计算1! + 2! +...+ 10!
//#include<stdio.h>
//int main()
//{
//	long i=1, j=1, num = 1, sum =0;
//	for (i = 1; i < 11; i++)
//	{
//		num = i * num;
//		sum = sum + num;
//	}
//	printf("1! + 2! +...+ 10! = %ld", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int binsearch(int x, int v[], int n) 
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (x == v[i])
//		{
//			printf("%d在数组中的位置是%d\n, 下标是%d", x, i + 1, i);
//			break;
//		}
//	}
//	if (i == n) 
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0, 11, 22, 33, 44, 55, 67, 74, 81, 99};
//	binsearch(77, arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//#include <stdio.h>
//int binsearch(int x, int v[], int n) 
//{
//	int i, j;
//	j = n / 2;
//
//	for (i = 0; i < n / 2; i++)
//	{
//		if (v[j] > x)
//		{
//			j = (0 + j) / 2; 
//			printf("i = %d  j = %d\n", i, j);
//		}
//		else if (v[j] < x)
//		{
//			j = (n + j) / 2;
//			printf("i = %d  j = %d\n", i, j);
//		}
//		else if (v[j] == x)
//		{
//			return j;
//			break;
//		}
//	}
//	if (i == n / 2) 
//	{
//		printf("输入有误\n");
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int x = 11;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	n = sizeof(arr) / sizeof(arr[0]);
//	a = binsearch(x, arr, n);
//	if (a != -1)
//	{
//		printf("%d在数组中的下标是%d \n",x, a);
//	}
//	else 
//	{
//		printf("x的值有误");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int x = 8;		// 查找的数
//
//	int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组元素个数
//	int zuo = 0;	// 左下标
//	int you = sz - 1; // 右下标
//	
//	while (you >= zuo) // 只有左下标和右下标之间右元素时才能进行查找
//	{
//		int zo = (zuo + you) / 2; // 通过左右下标求出中间元素下标
//		if (x > arr[zo])
//		{
//			zuo = zo + 1;
//		}
//		else if (x < arr[zo])
//		{
//			you = zo - 1;
//		}
//		else if (x = arr[zo])
//		{
//			printf("%d下标是%d", x, zo);
//			break;
//		}
//	}
//	if (you < zuo) 
//	{
//		printf("没找到");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str1[] = "Hellow world, Hellow yumo!";
//	char str2[] = "##########################";
//	int sz = sizeof(str1) / sizeof(str1[0]);//数组中元素的个数
//	int left = 0;// 左
//	//int right = sz - 2;//右 
//	////字符串数组中不止呀u苏，在最后隐藏着一个字符'\0'
//	////在计算时，会将其计算在内，在用sizeof计算字符串的长度时因 -1
//
//	int right = strlen(str1);
//
//
//	while(right >= left)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		// 休息一秒
//		Sleep(1000);//单位是毫秒
//		system("cls"); // 执行系统命令的一个函数 - cls - 清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = {0};

	for (i = 1; i < 4; i++)
	{ 
		printf("密码：");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0) // “==”不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("YES\n");
			break;
		}
		else
		{
			if (i == 3) 
			{
				printf("机会用完退出\n");
			}
			else 
			{
				printf("NO, 你还有%d次机会\n", 3 - i);
			}			
		}
	}
	return 0;
}