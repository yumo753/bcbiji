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
//	// ����һ��������10������
//	int arr[10];
//	// int - ��������
//	// arr - ������
//	// 10 - ������Ԫ�صĸ���
//
//	// ����һ��������5���ַ�
//	char arr1[5];
//
//	int n = 5;
//	char arr1[n];// ����д��
//	// ����� [ ] ֻ�����볣�����ʽ��n���ڱ���
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 }; 
//	// ����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	printf("arr[4]: %d\n", arr[4]);
//	printf("arr[4]��ASCII��ֵ: %d\n", arr[4]);
//
//	char arr1[5] = {'a', 'b'};
//	// ����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	printf("arr1[2]: %c\n", arr1[2]);
//	printf("arr1[2]��ASCII��ֵ: %d\n", arr1[2]);
//
//	char arr2[5] = "yu";
//	// ����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	printf("arr2[2]: %c\n", arr2[2]);
//	printf("arr2[2]��ASCII��ֵ: %d\n", arr2[2]);
//
//	float arr3[5] = { 2.3, 1.4 };
//	// ����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	printf("arr3[2]: %f\n", arr3[2]);
//	printf("arr3[2]��ASCII��ֵ: %d\n", arr3[2]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 }; 
//
//	char arr1[5] = {'a', 'b'};
//	char arr11[5] = {'a', 98};
//
//	char arr2[] = "yumo753";
//
//	printf("sizeof(arr2): %d\n", sizeof(arr2)); // 8
//	// sizeof()-����arr2��ռ�ռ�Ĵ�С�������ַ����Ľ�������\0��
//	// 8��Ԫ�� - char 8*1 = 8
//
//	printf("strlen(arr2): %d\n", strlen(arr2)); // 7
//	// strlen()-ֻ�����ַ����ĳ��ȣ���\0��֮ǰ���ַ�����
//	// 7
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("sizeof(arr1): %d\n", sizeof(arr1)); // 4
//	printf("strlen(arr1): %d\n", strlen(arr1)); // 3
//
//	printf("sizeof(arr2): %d\n", sizeof(arr2)); // 3
//	printf("strlen(arr2): %d\n", strlen(arr2)); // ���ֵ
//	// strlenֻ����'\0'֮ǰ���ַ�������arr2����û��'\0'��
//	// ��strlenֻ����������\0��ʱ�Ż���ֹ���㣬����strlen(arr2)�����ֵ
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//// �ַ�����
//	//int i;
//	//char arr1[] = "yumo753";
//	//// [y] [u] [m] [o] [7] [5] [3] [\0]
//	////  0   1   2   3   4   5   6   7
//	//// ���ӡ��o��
//	//printf("%c\n", arr1[3]);
//
//	//// ѭ������
//	//int len = strlen(arr1);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c\n", arr1[i]);
//	//}
//
//	// ��������
//	int i;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf(" &arr1[%d] ;%p\n", i, &arr1[i]);
//	}
//
//	/*
//	 &arr1[0] ;000000245AD6F7E8
//	 &arr1[1] ;000000245AD6F7EC
//	 &arr1[2] ;000000245AD6F7F0
//	 &arr1[3] ;000000245AD6F7F4
//	 &arr1[4] ;000000245AD6F7F8
//	 &arr1[5] ;000000245AD6F7FC
//	 &arr1[6] ;000000245AD6F800
//	 &arr1[7] ;000000245AD6F804
//	 &arr1[8] ;000000245AD6F808
//	 &arr1[9] ;000000245AD6F80C
//	 ���Կ��� &arr1[n] - &arr1[n-1] = 4
//	 int������ռ�ռ�Ĵ�СΪ4���ֽ�
//	 �������ڴ�����������ŵ�
//	*/
//
//	return 0;
//}
//
// ��ά����ĳ�ʼ��
//#include <stdio.h>
//int main()
//{
//	int arr[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	//int arr1[2][] = { 1, 2, 3, 4, 5, 6, 7, 8 };// ������ά�������ʡ���У�������ʡ����
//	int arr2[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	return 0;
//}

//// ��λ�����ʹ��
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1, 2, 3}, {4, 5} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
//		}
//	}
//	return 0;
//}


//// ��λ�������ڴ��еĴ洢
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1, 2, 3}, {4, 5} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	/*
//	&arr[0][0] = 000000A1F3AFFBE8
//	&arr[0][1] = 000000A1F3AFFBEC
//	&arr[0][2] = 000000A1F3AFFBF0
//	&arr[0][3] = 000000A1F3AFFBF4
//	&arr[1][0] = 000000A1F3AFFBF8
//	&arr[1][1] = 000000A1F3AFFBFC
//	&arr[1][2] = 000000A1F3AFFC00
//	&arr[1][3] = 000000A1F3AFFC04
//	&arr[2][0] = 000000A1F3AFFC08
//	&arr[2][1] = 000000A1F3AFFC0C
//	&arr[2][2] = 000000A1F3AFFC10
//	&arr[2][3] = 000000A1F3AFFC14
//	��λ�������ڴ���Ҳ��������ŵ�
//	����Ϊ4
//	*/
//	return 0;
//}

//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;// ������һ��Ҫ����������Ѿ�����
//		// ÿһ��ð������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0; // ������������ݲ�����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			//printf("flag��%d\n", flag);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i;
//	//int arr[] = { 2, 4, 5, 1, 3, 8, 6, 7, 10, 9 };
//	// ��arr���������ų�����
//	int arr[] = { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	// ���������ð�����򣬵�һ�˽�10�õ������
//	// ��ʱ����Ϊ { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
//	// �ڵڶ�������ʱ���֣�����ʱ����ģ����轻�� arr[j] �� arr[j+1]
//	// ����ѭ��
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// arr�����飬�����ڴ��θ�����ʱ���ݵ���ʵʱ������Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{ 
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//
//	printf("    arr��%p\n", arr);
//	printf("&arr[0]��%p\n", &arr[0]);
//	printf("===========================\n");
//	printf("  *arr: %d\n", *arr);
//	printf("arr[0]: %d\n", *arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 1, sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λʱ�ֽ�
//	// 2��&�������������������������飬&��������ȡ��������������ĵ�ַ
//
//	// �����׸�Ԫ�صĵ�ַ
//	printf("      arr��%p\n", arr);
//	printf("    arr+1��%p\n", arr + 1);
//
//	// �����׸�Ԫ�صĵ�ַ
//	printf("  &arr[0]��%p\n", &arr[0]);
//	printf("&arr[0]+1��%p\n", &arr[0] + 1);
//
//	// ��������ĵ�ַ
//	printf("     &arr��%p\n", &arr);
//	printf("   &arr+1��%p\n", &arr + 1);
//
//	/*
//		  arr��00000055C03FFC98
//		arr+1��00000055C03FFC9C
//	  &arr[0]��00000055C03FFC98
//	&arr[0]+1��00000055C03FFC9C
//		 &arr��00000055C03FFC98
//	   &arr+1��00000055C03FFCB4
//	   B4(16) - 98(16) =180(10) - 152(10) =  28
//	   arr����Ԫ�صĸ�����7��һ��Ԫ�صĴ�С��4��4*7=28
//	   &arr��ŵ�������Ԫ�صĵ�ַ
//	*/
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char arr[3][3] = { '*', '*', '*', '*', '*', '*', '*', '*', '*' };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 0) 
			{
				printf(" %c", arr[i][j]);
			}
			else if (j == 1 || j == 2)
			{
				printf(" | %c", arr[i][j]);
			}
		}
		if (i<2)
		{
			printf(" \n___|___|___\n");
		}
		else if (i = 2) 
		{
			printf("\n   |   |\n");
		}

	}
	return 0;
}
// * | * | * 
//___|___|___
// * | * | * 
//___|___|___
// * | * | * 
//   |   |