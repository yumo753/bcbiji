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
//		// *pnum++; // ����д����++��������pnum��������������*pnum
//		(*pnum)++; // ��ȷд����������ʱ��++��������*pnum
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
//			printf("%dż��\n", i);
//		}
//		else
//		{
//			printf("%d����\n", i);
//		}
//	}
//	printf("����������%d��", num);
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
// ������������׿��ţ����׵�����


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	// ���Ϊ4321�� ����434343��Ҳ����43
//	// printf()�����ķ���ֵ�ǣ���ӡ�ַ��ĸ���
//	// ����printf("%d", 43)�ķ���ֵ����2
//	// �м���ӡ�����ķ���ֵ��2�����м��ķ���ֵ�ǡ�1��
//	// ������ӡ�м��ķ���ֵ��1��.�����ķ���ֵ�ǡ�1��
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	// ����һ������Ϊ����"\n"
//	return 0;
//}


//#include <stdio.h>
//// #include ����ͷ�ļ�ʱ���������Ὣͷ�ļ���ȫ�����뿽��
//// ��1000��1000����10000��10000���ж��ٿ�����
//// ��ʵ�ʹ����У�һ�ݹ������ɶ���˹�ͬ��ɵģ�
//// ����һ�£�����һ�ݣ�����һ�ݣ�������һ�ݣ�
//// ͬ���Ĵ����ظ���֣��أ�����ը��
//// Ϊ�˱���ͬһ��ͷ�ļ���������ã���ͷ�ļ��л�....
//// ��add.hȥ��д������
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


// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ������U����:1234�����1 2 3 4
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
//	// �Ѵ��»�С���ҵ��������ұߵ�����Ȼ���ӡ��
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
//	printf("����һ������");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


// ��д��������������ʱ���������ַ����ĳ��ȡ�
 
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	// whileѭ��
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	// �ݹ�
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//	// �Ѵ��»�С���ҡ�\0����
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
//	// int len = strlen(arr);// ���ַ�������
//	// printf("%d\n", len);
//
//	int len = my_strlen(arr);
//	// arr���飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//
//	return 0;
//}

//// ��n�Ľ׳ˣ��ݹ飩
//#include <stdio.h>
//
//// ѭ��
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
//// �ݹ�
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
//	printf("��Ҫ��˭�Ľ׳ˣ�\n>:");
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d�Ľ׳���%d", n, ret);
//	return 0;
//}

// ���n��쳲�������
// 1��1��2��3��5��8��13��21��34

//#include <stdio.h>
//
//int count = 0;
//
//// �ݹ�
//int Fib1(int n)
//{
//	if (n == 3) 
//	{
//		count = count + 1;// ���Ե�����쳲��������ļ������
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
//// ����ݹ麯����Ч�ʹ��ͣ�����Ҫ���50��쳲�������
////					50
////			49			    48
////		48	  47		47     46
////	   47 46 46 45	   46 45  45 44
////			..................
////		�����������ظ��������
//// Ч�ʹ��ͣ������������ظ�������࣬��Щ���������ʺ��õݹ�������
////
//
//// ѭ��
//int Fib2(int n)// �Լ�д��
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
//int Fib3(int n) // ��ʦд��
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
//	printf("��Ҫ��ڼ�����쳲���������\n>:");
//	scanf("%d", &n);
//	num = Fib3(n);
//	printf("%d��쳲���������%d\n", n, num);
//	//printf("������쳲���������������%d��", count);
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