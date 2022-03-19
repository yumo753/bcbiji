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
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//		{
//			break;
//		}
//		if (b % 3 == 1) 
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 10 == 9 || i / 10 == 9)
//		//// 这样写99中有两个9，但是只被计算了一次
//		//// 95÷10＝9---5，其中9是商，5是余数。
//		//{
//		//	count++;
//		//}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		// 当两个if并列时，99会被计算两次
//	}
//	printf("1-100的整数中一共有%d个数字9", count);
//	return 0;
//}

//// 计算1/1-1/2+1/3-1/4+1/5......+1/99 - 1/100的值,打印出结果
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float count = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 == 0)
//		//{
//		//	count = count - (1.0 / i);
//		//}
//		//else
//		//{
//		//	count = count + (1.0 / i);
//		//}
//		// 另一种方法加减加减
//		count += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5......+1/99 - 1/100等于：%f", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { -921, -713, -175, -141, -228, -674, -286, -747, -583, -541 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[left] < arr[right])
//		{
//			num = arr[left];
//			arr[left] = arr[right];
//			arr[right] = num;
//		}
//		right--;
//	}
//	printf("MAX = %d", arr[left]);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			//printf("%d * %d = %d", j, i, j * i);
			printf("%d * %d = %2d   ", j, i, j * i);
			//printf("%d * %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}