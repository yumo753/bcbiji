#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	// aa��ʾ��������ĵ�ַ��&aaȡ����������ĵ�ַ��&aa+1�������������ĵ�ַ������λ��������ĳ���
//	// (int*)(&aa + 1)������Ϊ�������������ĵ�ַ��������λint���͵ĳ���
//
//	int* ptr2 = (int*)(*(aa + 1));
//	// aa��ʾ������Ԫ�صĵ�ַ -> ��һ��һά���������һά����ĵ�ַ,����Ϊ��һλ����ĳ���
//	// aa + 1 -> �ڶ���һά���������һά����ĵ�ַ,����Ϊ��һλ����ĳ��� - ����ָ��
//	// �����ú�ǿ��ת��Ϊ����ָ�룬������Ϊint���͵ĳ���
//
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));// 10  ,5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work", "at", "tmdalibaba" };
//	// char* p = "abcdef";
//		// ���ַ���"abcdef"����Ԫ�صĵ�ַ�ŵ�p�У�*p���ɸ��ģ���Ϊpָ�����һ������
//	// aʵ���ϴ�ŵ��ǣ�"w"�ĵ�ַ,"a"�ĵ�ַ,"t"�ĵ�ַ
//
//	char** pa = a;
//	// a��ʾ��Ԫ�صĵ�ַ��a����Ԫ����һ��ָ�룬����ʹ�ö���ָ�����
//
//	pa++;
//	// ָ��a�еڶ���Ԫ�صĵ�ַ
//
//	printf("%s\n", *pa);// at
//	// *p�������õõ��ڶ���Ԫ�أ�һ��ָ���ַ���������ָ�룬������%s��%p���
//	// %s����һ����ַΪ��ͷ��ӡһ���ַ�����%s������ݱ�����һ���ַ������ַ�����ַ��ָ��
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
//	// pulPtrָ���������Ԫ��
//
//	*(pulPtr + 3) += 3;
//	// pulPtr + 3ָ������ĵ��ĸ�Ԫ��
//	// *(pulPtr + 3) = *(pulPtr + 3) + 3 ;
//	// pulArray[3] = pulArray[3] + 3 = 9+3=12
//
//	printf("%d, %d", *pulPtr, *(pulPtr + 3));// 6, 12
//	return 0;
//}

//// дһ�����������ַ���������
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
//	char* left = pstr;// ��
//	char* right = pstr + len-1;// ��
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
//	printf("�����ַ���\n>:");
//	gets(str);
//	nixv(str);
//	printf("%s\n", str);
//	return 0;
//}

//// �û�����2��5������2+22+222+2222+22222=��
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("�����������ո����\n>:");
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


//// ���0~100000��ˮ�ɻ���
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
//		// �ж�i�Ƿ�Ϊ������
//		// 1������i��λ��
//		int num = i;
//		int n = 1;
//		int sum = 0;
//		while (num /= 10)
//		{
//			n++;
//		}
//
//		// 2������i��ÿһλ��n�η�֮�� sum
//		num = i;
//		while (num) 
//		{
//			sum = sum + cifang(num%10, n);
//			num = num / 10;
//		}
//		//sum = cifangsum(num, n);
//
//		// 3,�Ƚ�i == num
//		if (i == sum) 
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}


//// ��ӡ����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("�����м��е�����\n>��");
//	scanf("%d", &n);
//
//	// ���������
//	for (i = 0; i < n; i++) 
//	{
//		// ��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++) 
//		{
//			printf(" ");
//		}
//
//		// ��ӡ*
//		for (j = 0; j < 2 * i + 1; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int nn = n - 1;
//	// ���������
//	for (i = 0; i < nn; i++)
//	{
//		// ��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//
//		// ��ӡ*
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

//// ��������ṹ�������
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
//	// *���ȼ�����. ��������p.a��ϣ��ᱨ���Ƿ����Ѱַ
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


//// ����ˮ����
//// ����ˮ��1ƿ��ˮ1Ԫ, 2����ƿ���Ի�һƿ��ˮ,��20Ԫ�����Զ�����ˮ�����ʵ��)
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
//	printf("�����");
//	scanf("%d", &jine);
//	int num = jine; // ͳ�ƽ���������ٸ�ƿ��
//
//	int count = jine;// ͳ��ƿ������
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


// ����������ǰ��ż���ں�
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
	int* right = pa + sz; // ��
	int* left = pa;// ��
	while (left < right) 
	{
		// �������ż����û�ҵ�++���ҵ�����ұ�������
		if (*left % 2 == 0)
		{
			// ���ұ�������û�ҵ�--���ҵ�����
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