#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//// Ԥ�������
//#include <stdio.h>
///*
//__FILF__		// ���б����Դ�ļ�
//__LINE__		// �ļ���ǰ���к�
//__DATE__		// �ļ������������
//__TIME__		// �ļ��������ʱ��
//__STDC__		// �����������ѭANSI C����ֵΪ1������δ����
//*/
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__); //error�� vs2022�����ϸ�����ANSI C
//
//	// д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// Ԥ�������� #define
//#include <stdio.h>
//#define MAX 100;
//int main()
//{
//	int i = MAX;
//	printf("%d", MAX);
//	return 0;
//}


//// ��
//#include <stdio.h>
//#define SQUARE(x) x * x;
//
//int main()
//{
//	int ret = SQUARE(5);
//	// Ԥ�����
//	// int ret = 5 * 5;
//
//	printf("%d\n", ret); // 25
//	return 0;
//}


//// �����滻���Ǵ���
//#include <stdio.h>
//#define SQUARE(x) x * x;
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	// Ԥ�����
//	// int ret = 5 + 1 * 5 + 1;
//	//		   = 5 + 5 + 1
//
//	printf("%d\n", ret); // 11
//	return 0;
//}


//// �����滻���Ǵ���
//// �Ľ�ʹret = 36
//#include <stdio.h>
//#define SQUARE(x) (x) * (x);
//// ����x�����ȼ�
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	// Ԥ�����
//	// int ret = (5 + 1) * (5 + 1);
//	//		   = 6 * 6
//	//		   = 36
//
//	printf("%d\n", ret); // 36
//	return 0;
//}


//// д���ʱ��Ҫ�ڼ�()
//#include <stdio.h>
//#define DOUBLE1(x) x + x
//#define DOUBLE2(x) (x) + (x)
//#define DOUBLE3(x) ((x) + (x))
//
//int  main()
//{
//	int a = 5;
//	printf("DOUBLE1: %d\n", 10 * DOUBLE1(a)); // 55
//	// Ԥ�����10 * 5 + 5
//	printf("DOUBLE2: %d\n", 10 * DOUBLE2(a)); // 55
//	// Ԥ�����10 * (5) + (5)
//	printf("DOUBLE3: %d\n", 10 * DOUBLE3(a)); // 100
//	// Ԥ�����10 * ((5) + (5))
//	return 0;
//}


//#include <stdio.h>
//
//void print(int a) 
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a); // the value of a is 10
//	print(b); // the value of a is 20
//	// ��������ϣ���ڴ��ݵ�ֵΪbʱ�������the value of b is 20��ʹ�ú�
//}


//#include <stdio.h>
//
//#define PRINT(X) printf("the value of " #X " is %d\n", X);
//
//int main()
//{
//	// ����һ�����
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hell" "o wo" "rld\n");
//	// �������д������������ͬ
//
//	// ��취�Ѳ������뵽�ַ����У�#
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	// Ԥ����
//	// printf("the value of " "a" " is %d\n", a);
//
//	PRINT(b);
//	// Ԥ����
//	// printf("the value of " "b" " is %d\n", b);
//
//	// ��һ��Ԥ���������еĲ���ǰ��ʹ��һ��#,Ԥ����������������ת��Ϊһ���ַ�����
//}


// ##������
//#include <stdio.h>
//#define CAT(X, Y) X##Y
//// XY�����ʶ��������ڣ�����ᱨ��
//
//int main() 
//{
//	int surui999 = 8888;
//	printf("surui999: %d\n", surui999);
//
//	printf("surui##999: %d\n", CAT(surui, 999));
//	printf("surui##999: %d\n", CAT(sumi, 999));// error sumi999������
//}


//// �������õĺ����������ʾ
//#include <stdio.h>
//#define MAX(x, y) ( (x) > (y) ? (x) : (y)) 
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	// Ԥ�����
//	// int max = ((a++) > (b++) ? (a++) ; (b++));
//	// ��һ�����ȱȽ� a++ �� b++��������
//	//  a < b���ڱȽϺ�a��b��+1��a = 11; b = 12
//	// �ٽ� b++ ��ֵ����max�������ӣ��Ƚ�ֵ����max��Ȼ��+1��
//	// max = 12��b = 13
//
//	printf("%d\n", max);// 12
//	printf("%d\n", a); // 11
//	printf("%d\n", b); // 13
//
//	return 0;
//}


//// ��ͺ����ĶԱ�
//
//#include <stdio.h>
//
//// ��
//#define MAX(x, y) ( (x) > (y) ? (x) : (y)) 
//
//// ����
//int Max(int x, int y) 
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	float c = 3.33;
//	float d = 4.44;
//
//
//	// ����Ԥ����׶ξ�������滻
//	// û�к����ĵ��úͷ��صĿ���
//	int max = MAX(a, b);
//	printf("%d\n", max);// 11
//
//
//	// �����ڵ��õ�ʱ��
//	// ���к������úͷ��صĿ���
//	max = Max(a, b);
//	printf("%d\n", max);// 11
//
//
//	// ������ں�����ͨ��
//	float maxf = 0;
//	maxf = MAX(c, d);
//	printf("%lf\n", maxf);// 4.440000
//
//	// ���ں����Ĳ���Ϊint���ͣ�����־��ȶ�ʧ
//	maxf = Max(c, d);
//	printf("%lf\n", maxf);// 4.000000
//
//	return 0;
//}


//// ���ܴ�������
//#include <stdio.h>
//
//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	// ����Դ�������
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p1 = (int*)malloc(10 * sizeof(int));
//
//	int* p2 = MALLOC(10, int);
//	// Ԥ�����
//	// int* p2 = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("max = %d\n", MAX);
//#undef MAX
//	// �Ƴ���MAX�Ķ���
//	//printf("max = %d\n", MAX); // error MAXδ��
//
//	return 0;
//}
//


//// ��������
//#include <stdio.h>
//
////#define DEBUG
//
//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = 0;
//#ifdef DEBUG // ���DEBUG�����ˣ��ͱ��룬δ����Ͳ�����
//		printf("%d\n", i);
//#endif
//	}
//	return 0;
//}


//// add.h
//#ifndef ADD_H
//#defline ADD_H
//int Add(int x, int y);
//#endif
//
//// add.c
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//// test.c
//#include <stdio.h>
//#include "Add.h"
//#include "Add.h"
//#include "Add.h"
//#include "Add.h"
//// ��Ȼ���ö�Σ���ֻ�����һ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	return 0;
//}
//


//// offsetof������ʵ��
//#include <stdio.h>
//#include <stddef.h>
//
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0) -> member_name)
//// (int)&(((struct_name*)0) -> member_name)
//// ��0ǿ������ת��Ϊ�ṹ��struct S��ָ�룬��ʱ�����ṹ���ֵַΪ0
//// �ṹ����Ԫ�صĵ�ַ����ƫ����������������δָ��
//// ����ǿ������ת��δint���;��ǽṹ����Ԫ�ص�ƫ����
//// ţ��
//
//struct S
//{
//	char c1;
//	int i;
//	char c;
//	double d;
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, i)); // 4
//	printf("%d\n", OFFSETOF(struct S, c)); // 8
//	printf("%d\n", OFFSETOF(struct S, d)); // 16
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM 
//	{
//		unsigned char ucPim;
//		unsigned char ucData0 : 1; // ��λʱbit
//		unsigned char ucData1 : 2; // ��λ��bit
//		unsigned char ucData2 : 3; // ��λ��bit
//	}*pstpimData;
//	pstpimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstpimData->ucPim = 2;
//	pstpimData->ucData0 = 3;
//	pstpimData->ucData1 = 4;
//	pstpimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}


#include <stdio.h>
// ð������
void paixv(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz-1; i++) 
	{
		for (j = 0; j < sz - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			}
		}
	}
}

// �ҵ���
void single_dog(int arr[], int sz, int num[])
{
	paixv(arr, sz);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d \n", arr[i]);
	}

	for (i = 0; i < sz;) 
	{
		if (arr[i] == arr[i + 1]) 
		{
			i = i + 2;
		}
		else
		{
			num[j] = arr[i];
			i = i + 1;
			j = j + 1;
		}
	}
	
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 3, 2, 4, 1, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num[2] = { 0 };
	single_dog(arr, sz, num);
	printf("�����ǣ�%d %d", num[0], num[1]);
	return 0;
}



