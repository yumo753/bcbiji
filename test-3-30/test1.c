#define _CRT_SECURE_NO_WARNINGS 1

// 1��ָ�򵥸��ַ�
//#include <stdio.h>
//int main()
//{
//    char a = 'w';
//    char* pa = &a;
//    printf("%c\n", *pa);
//    printf("%c\n", a);
//    return 0;
//}

//// ָ��������
//#include <stdio.h>
//int main()
//{
//    char arr[] = "abcdefg";
//    char* pa = arr;
//    printf("*pa: %c\n", *pa);
//    printf("*pa+1: %c\n", *pa+1);
//    // �ַ����������������Ԫ�صĵ�ַ
//    // �������⣬sizeof(arr)��&arr
//    
//    printf("pa: %s\n", pa);
//    printf("pa+1: %s\n", pa+1);
//    
//    printf("arr: %s\n", arr);    
//    printf("arr+1: %s\n", arr+1);    
//    return 0;
//}


//// ���������
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = arr1;
//	char* p2 = arr2;
//
//	printf("p1==p2\n");
//	if (p1== p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// ���no��ָ��ָ����������������������������Ԫ�صĵ�ַ����ַ��Ψһ��
//
//	printf("*p1==*p2\n");
//	if (*p1 == *p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// ���yes��ָ��ָ����������������������������Ԫ�صĵ�ַ���������������ã��õ��������Ԫ��
//	// �����������Ԫ����ͬ�����yes
//
//	printf("arr1==arr2\n");
//	if (arr1 == arr2) 
//	{
//		printf("yes\n");
//	}
//	else 
//	{
//		printf("no\n");
//	}
//	// ���no�����������������Ԫ�صĵ�ַ����ַ��Ψһ��
//
//	printf("+++++++++++++++++++++++++++++++++++++++++++\n");
//	char* p11 = "abcdef";
//	char* p22 = "abcdef";
//	printf("p11==p22\n");
//	if (p11 == p22)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	// ���yes������ָ��ָ��ͬһ�������ַ������ڴ�Ϊ�˽�ʡ�ռ�ʹ���һ�ݣ���������ָ����һ��
//
//	printf("*p11==*p22\n");
//	if (*p11 == *p22)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}


//// ����ָ������
//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int d = 40;
//    int* parr[4] = { &a, &b, &c, &d };
//    return 0;
//}


////����ָ����ɶ��
//#include <stdio.h>
//int main()
//{
//	// int* p = NULL; // p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	// char* ch = NULL; // pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//						// ����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//
//	// int arr[10] = {0}; 
//	// arr - ��Ԫ�ص�ַ
//	// &arr[0] - ��Ԫ�ص�ַ
//	// &arr - �����ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; // ����ĵ�ַҪ������
//	// �����p��������ָ��
//	return 0;
//}


//// ����pa������
//#include <stdio.h>
//int main()
//{
//	char* arr[5];
//	// pa = &arr // д��pa������
//	// ����paָ�����һ��ָ�룬����pa��һ������ָ��
//	// ����Ϊpa��ŵ���һ�������ָ�룬��Ҫ�ã�����pa������
//	char* (*pa)[5] = &arr;
//	printf("%p\n", pa);
//	return 0;
//}

//// ����ָ���ʹ��-��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	
//	//// ������ָ��������� - 1
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++) 
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	//// ������ָ��������� - 2
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));
//	//}
//
//	// ָ���������
//	int* p = arr;
//	int i =  0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}


//// ����ָ���ʹ��-����
//#include <stdio.h>
//
//// �������������ʽ
//void print1(int arr[3][5], int x, int y) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) 
//	{
//		for (j = 0; j < y; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//// ������ָ�����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (p[i])[j]);
//			//printf("%d ", *(p[i]+ j ));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(*(p + i) + j) );
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1, 2, 3, 4, 5},{2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
//	print1(arr, 3, 5); // arr - ������ - ��Ԫ�ص�ַ��
//	// ��λ�������Ԫ���ǵ�һ��һλ����
//	// *arr ---> {1, 2, 3, 4, 5} ��
//	// *arr ---> 1				 X
//
//	printf("============================\n");
//	print2(arr, 3, 5);
//
//	printf("\n%p", arr);
//	return 0;
//}


////  *(p + i) == *(arr + i) == arr[ i ] == p[ i ]
//// �����ǵȼ۵�
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("*(p + i): %d \t",*(p + i) );
//		printf("*(arr + i): %d \t",*(arr + i) );
//		printf("arr[i]: %d \t", arr[i]);
//		printf("p[i] % d \t",p[i]);
//		// *(p + i) == *(arr + i) == arr[ i ] == p[ i ]
//		printf("\n");
//	}
//	return 0;
//}

//// ˵������ɶ
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	// ��һ�������int����Ԫ�ص�����
//	
//	int* parr1[10];
//	// ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//	
//	int(*parr2)[10];
//	// ��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//
//	int(*parr3[10])[5];
//	// ��һ��(����ָ��)���飬������10��Ԫ�أ�ÿ��Ԫ����һ��ָ�룬ÿһ��ָ��ָ����һ����5��Ԫ��������Ԫ������Ϊint������
//
//
//	return 0;
//}

//// һά���鴫��
//#include <stdio.h>
//
//void test(int arr[])//ok?
//// ���� һ����������
//{}
//void test(int arr[10])//ok?
//// ���� һ����10��int����Ԫ�ص�����
//{}
//void test(int *arr)//ok?
//// ���� һ������ָ��
//{}
//void test2(int *arr[20])//ok?
//// ���� һ����20��int*����Ԫ�ص�����ָ������
//{}
//void test2(int **arr)//ok?
//// ���� һ������ָ��
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr); // һλ���鴫��
//	test2(arr2);// ָ�봫��
//	return 0;
//}


//// ��ά���鴫��
//#include <stdio.h>
//
//void test(int arr[3][5]) // ok?
//// ���� һ��3��5�еĶ�ά����
//{}
//
//void test(int arr[][5]) // ok?
//// ���� һ��n��5�еĶ�ά����
//{}
//
////void test(int arr[3][]) // ok?
////// ���� ��ά���鴫��ʱ����ʡ���У�������ʡ����
////{}
//
////void test(int arr[][]) // ok?
////// ���� ��ά���鴫��ʱ����ʡ���У�������ʡ����
////{}
//
///*
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//	  ��Ϊ����һ����ά���飬���Բ�֪���ж����У�������֪��һ�ж��ٸ�Ԫ��
//	  ������������
//*/
//
////void test(int* arr) // ok?
////// ���� ��ά�������Ԫ�ص�ַ�Ƕ�ά�����е�һ��һλ�������Ԫ�ص�ַ��
//////      arr+1�Ƕ�ά�����еڶ���һλ�������Ԫ�ص�ַ
////{}
//
////void test(int** arr) // ok?
////// ����int**��һ������ָ�룬����ά�����е�arr�Ƕ�ά�����е�һ��һλ�������Ԫ�ص�ַ
////// ��һ������ĵ�ַ������ָ��ֻ�����ڴ��һ��ָ��ĵ�ַ�����ܴ������ĵ�ַ
////{}
//
//void test(int (*p)[5]) // ok?
//// ����һ������ָ�룬��ָ��ָ���������5��Ԫ�أ�����Ϊint
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr); // ��ά���鴫��
//
//	return 0;
//}


//// һ��ָ�봫��
//#include <stdio.h>
//
//void print(int* p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *(p + i));
//		printf("%d\n", p[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// һ��ָ��p�����θ�����
//	print(p, sz);
//	return 0;
//}


//// ��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����?
//#include <stdio.h>
//
//void test1(int* p) 
//{}
//
//void test2(char* p)
//{}
//
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	test1(&a);// ok,�����ĵ�ַ
//	test1(p1);// ok����ű�����ַ��ָ��
//
//	char b = 'q';
//	char* p2 = &b;
//	test2(&b);// ok,�����ĵ�ַ
//	test2(p2);// ok����ű�����ַ��ָ��
//
//	return 0;
//}


//// ����ָ�봫��
//#include <stdio.h>
//
//void test(int** ptr)
//{
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n; // һ��ָ��
//	int** pp = &p; // ����ָ��
//	int* arr[] = { 0 };// ���һ��ָ���ָ�����������
//
//	test(pp);// һ��ָ��
//	test(&p);// ����ָ��
//	test(arr);// ���һ��ָ���ָ�������������
//	return 0;
//}


// ����ָ��
// ����ָ�� - ָ�������ָ��
// ����ָ�� - ָ������ָ�� - ��ź����ĵ�ַ
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	//printf("%d\n", Add(a, b));

	//// &������ �� ������ ���Ǻ����ĵ�ַ
	//printf("&Add: %p\n", &Add); // 00007FF74CDB1401
	//printf("Add: %p\n", Add); // 00007FF74CDB1401

	int (*pa)(int, int) = &Add;
	printf("int (*pa)(int, int): %p\n", pa); // 00007FF74CDB1401

	printf("%d\n", (*pa)(2, 6));// 8
	return 0;
}