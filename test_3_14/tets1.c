//#include <stdio.h>
//int main()
//{
//	printf("hellow world!\n"); // 语句1
//	printf("hellow LiHua\n");  // 语句2
//	; // 语句3 - 空语句
//	return 0; // 语句4
//}

//#include <stdio.h>
//int main()
//{
//	int age1 = 110; //17 18 20 30 40 110
//
//	if (age1 < 18)
//		printf("未成年\n");
//
//	if (age1 < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//
//	if (age1 < 18)
//		printf("未成年\n");
//	else if (age1 >= 18 && age1 < 30)
//		printf("青年");
//	else if (age1 >= 30 && age1 < 50)
//		printf("大叔");
//	else if (age1 >= 50 && age1 < 90)
//		printf("老年\n");
//	else
//		printf("老不死");
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int a = 1;
//	int b =2;
//
//	if (a == 0)
//		if (b == 2)
//			printf("1\n");
//	else
//		printf("0\n");
//	return 0;
//	// 程序的运行结果位空，代码通过缩进欺骗了你
//	// 悬挂 else
//}

//#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	if (num1 = 2)
//	{
//		printf("if条件判断变成赋值，为真，能够打印\n");
//	}
//	printf("num1 = %d\n", num1);
//
//	printf("但如果你这样写\n");
//	//if (2 = num2)
//	//{
//	//	printf("if条件判断变成赋值，为真，能够打印\n");
//	//}
//	//printf("num1 = %d\n", num2); // 代码会报错提示你写错了
//
//	return 0;
//}

//// 判断一个数是否位奇数
//#include <stdio.h>
//int main() 
//{
//	int num;
//	printf("请输入你想要判断奇偶的数：");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("%d是偶数，不是奇数", num);
//	}
//	else
//	{
//		printf("%d是奇数", num);
//	}
//	return 0;
//}



//// 输出1-100之间奇数
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++) 
//	{
//		if (i % 2 == 0)
//		{
//			//printf("%d是偶数\n", i);
//		}
//		else
//		{
//			printf("%d是奇数\n", i);
//		}
//	}
//	return 0;
//}

//// 输出1-100的素数
//#include <stdio.h>
//int main()
//{
//	int a;
//	int i;
//	int sum;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = 0;
//		for (i = 1; i <= a; i++)
//		{
//			if (a % i == 0) 
//			{
//				sum++;
//			}
//		}
//		if (a == 1) 
//		{
//			printf("%d是素数\n", a);
//		}
//		else if(sum == 2)
//		{
//			printf("%d是素数\n", a);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int day = 9;
//	//float day = 3;
//	int a = 1;
//	switch(day)
//	{
//		case 1:
//		//case 1.0:
//		//case a:// case后面必须是整型常量
//			printf("星期1");
//			break;
//		case 2:
//			printf("星期2");
//			break;
//		case 3:
//			printf("星期3");
//			break;
//		case 4:
//			printf("星期4");
//			break;
//		case 5:
//			printf("星期5");
//			break;
//		case 6:
//			printf("星期6");
//			break;
//		case 7:
//			printf("星期天");
//			break;
//		default:
//			printf("输入有误\n");
//			break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n) 
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//// while语句和if的对比
//#include<stdio.h>
//int main()
//{
//	if (1) 
//	{
//		printf("真\n");
//	}
//	while (1)
//	{
//		printf("真\n");
//	}
//
//	if (0)
//	{
//		printf("假\n");
//	}
//	while (0)
//	{
//		printf("假\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{

	//int i = 11;
	//do
	//{
	//	printf("%d\n", i);
	//	i++;
	//} while (i < 11);

	//return 0;

	//int i = 11;
	//while (i < 11) 
	//{
	//	printf("%d\n", i);
	//	i++;
	//}
	//return 0;

//	int i = 0;
//	while (i < 11) 
//	{
//		i++;
//		if (i == 3)
//		{
//			continue;
//		}
//		if (i == 5) 
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		// 键盘输入Ctrl + Z，getchar会获取到一个EOF，循环会停止
//		// EOF - end of file - 文件结束标志，EOF的值是-1
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a;
//	int ch;
//	char password[20] = { 0 };
//	printf("请输入密码:"); // 输入123456并回车
//	scanf("%s", password);// 123456被存放到password
//		// 注意当输入123456 ABC时，123456被存放到password，后面的还是会被留在缓冲区
//		// scanf()函数是以空格和回车为终止符的
//		// 
//	//缓冲区还剩余一个'\n'
//	// 清空缓冲区后，getchar()就会等待输入
//	//getchar();	// 从缓冲区中取走一个字符
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N)");
//	a = getchar();// 其中的回车'\n'被a取走
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	printf("password: %s\n", password);
//	printf("a: %d\n", a);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch;
	while ((ch = getchar()) != EOF) 
	{
		if (ch < '0' || ch > '9') 
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}