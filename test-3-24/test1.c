#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* p = NULL; // NULL - ������ʼ��ָ��ģ���ָ�븳ֵ
//					// NULL = ((void *)0) - ��0ǿ��ת��Ϊvoid����
//					// ��ŵ�ͬ��	int b = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	pa = NULL;
//	// *pa = 20; // ��ָ��ָ��NULL��ָ�뽫���ܱ�ʹ��	
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		//printf("arr[i]: %d\n", *pa);
//		//pa = pa + 1;
//		//pa += 1;
//
//		// �ɼ�
//		printf("arr[i]: %d\n",* pa++);
//	}
//
//	printf("==========����Ϊ2==========\n");
//	pa = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[i]: %d\n", *pa);
//		//pa = pa + 2;
//		pa += 2;
//	}
//
//	printf("======���Ŵ�ӡ������Ϊ-2=====\n");
//	pa = &arr[9];// ע��ָ�������е�Ԫ����Ҫ��&
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[i]: %d\n", *pa);
//		//pa = pa - 2;
//		pa -= 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	// ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//		// ��values�����Ԫ��ͨ��ָ�����ȫ����ֵΪ0
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &arr[9] - &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]��%p\n", i, &arr[i]);
//	}
//	printf("&arr[9] - &arr[0]; %p\n", p);
//	printf("&arr[9] - &arr[0]; %d\n", p);
//	printf("&arr[0] - &arr[9]; %d\n", p);
//
//	/*
//	&arr[0]��000000B70ABBF818
//	&arr[1]��000000B70ABBF81C
//	&arr[2]��000000B70ABBF820
//	&arr[3]��000000B70ABBF824
//	&arr[4]��000000B70ABBF828
//	&arr[5]��000000B70ABBF82C
//	&arr[6]��000000B70ABBF830
//	&arr[7]��000000B70ABBF834
//	&arr[8]��000000B70ABBF838
//	&arr[9]��000000B70ABBF83C
//	&arr[9] - &arr[0]; 0000000000000009
//	&arr[9] - &arr[0]; 9
//	&arr[0] - &arr[9]; -9
//
//	3C(16) -> 0011-1100(2)
//	18(16) -> 0001-1000(2)
//			  0010-0100(2) -> 36(10) = 4 * 9
//			  int�������ڴ���ռ��4���ֽ�
// 
//	*/
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[10] = "qwertyuiop";
//	int* p = &arr[9] - &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]��%p\n", i, &arr[i]);
//	}
//	printf("&arr[9] - &arr[0]; %p\n", p);
//	printf("&arr[9] - &arr[0]; %d\n", p);
//	printf("&arr[0] - &arr[9]; %d\n", &arr[0] - &arr[9]);
//
//	/*
//	&arr[0]��00000098E54FF868
//	&arr[1]��00000098E54FF869
//	&arr[2]��00000098E54FF86A
//	&arr[3]��00000098E54FF86B
//	&arr[4]��00000098E54FF86C
//	&arr[5]��00000098E54FF86D
//	&arr[6]��00000098E54FF86E
//	&arr[7]��00000098E54FF86F
//	&arr[8]��00000098E54FF870
//	&arr[9]��00000098E54FF871
//	&arr[9] - &arr[0]; 0000000000000009
//	&arr[9] - &arr[0]; 9
//	&arr[0] - &arr[9]; -9
//
//	71(16) -> 0111-0001(2)
//	68(16) -> 0110-1000(2)
//			  0000-1001(2) -> 9(10) = 1 * 9
//			  char�������ڴ���ռ��1���ֽ�
//	*/
//	return 0;
//}

//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	// �ַ�����ĩβ��һ��'\0',�ҵ�'\0'��λ�ü�ȥ��ʼ��λ��
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//			end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	// strlen - ���ַ�������
//	// �������ķ�ʽ���ݹ�ķ�ʽ
//	// ָ��ķ�ʽ
//
//	char arr[] = "yumo753";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//// ָ��������
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	printf("      arr: %p\n", arr); // ��������������Ԫ�صĵ�ַ
//	printf("    arr+1: %p\n", arr+1); // ����һ��Ԫ�صĳ���
//	
//	printf("  &arr[0]: %p\n", &arr[0]);
//	printf("&arr[0]+1: %p\n", &arr[0]+1);// ����һ��Ԫ�صĳ���
//	
//	printf("     &arr: %p\n", &arr);
//	printf("   &arr+1: %p\n", &arr+1);// ����һ������ĳ���
//	// ��������
//	// 1. &arr - &������ - ������������Ԫ�صĵ�ַ��������Ԫ�صĵ�ַ 
//	//					 - &������ ȡ��������������ĵ�ַ
//	// 2.sizeof(arr) - sizeof(������) - ��������ʾ������������
//	//				 - sizeof(������) - ���������������Ĵ�С
//	// 
//	return 0;
//	/*
//		  arr: 000000D7F8CFF778
//		arr+1: 000000D7F8CFF77C
//	  &arr[0]: 000000D7F8CFF778
//	&arr[0]+1: 000000D7F8CFF77C
//		 &arr: 000000D7F8CFF778
//	   &arr+1: 000000D7F8CFF7A0
//	*/
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("p+%d = %p <========> %p = &arr[%d]\n",  i, p + i, &arr[i], i);
//	}
//	printf("============��������===========\n");
//
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]); // �±����
//		//printf("%d\n", *(p + i)); // ָ�����
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// pa��һ��ָ�룬��ָ��Ķ���Ϊint����
//	int** ppa = &pa;
//	// ppa�Ƕ���ָ���������ָ��Ķ���Ϊָ��
//
//	printf("a: %d\n", a); // 10
//	printf("*pa: %d\n", *pa); // 10
//	printf("**ppa: %d\n", **ppa); // 10
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	// int* pa = &a;
//	// int* pb = &b;
//	// int* pc = &c;
//
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) 
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1, 2, (3, 4), 5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "hello world!";
//	int sz = sizeof(str);
//	int len = strlen(str);
//	printf("%d, %d\n", sz, len); 
//	return 0;
//}

//#include <stdio.h>
//void init(int arr[], int sz)
//{
//    //while (sz)
//    //{
//    //    arr[--sz] = 0;
//    //}
//    //
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//}
//
//void reverse(int arr[], int sz)
//{
//    //int pum = 0;
//    //int i = 0;
//    //for (i = 0; i < (sz / 2); i++)
//    //{
//    //    pum = arr[i];
//    //    arr[i] = arr[sz - i - 1];
//    //    arr[sz - i - 1] = pum;
//    //}
//    int tmp = 0;
//    int left = 0;
//    int right = sz - 1;
//    while (right >= left)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    int arr[10] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    // ��ʼ������
//    //init(arr, sz);
//    print(arr, sz);
//    printf("=================\n");
//    reverse(arr, sz);
//    print(arr, sz);
//    printf("\n");
//
//    return 0;
//}


//#include <stdio.h>
//
//void jiaohuan(int arr1[], int arr2[], int sz)
//{
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < sz; i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//}
//
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//}
//
//int main()
//{
//    int arr1[] = { 1, 3, 5, 7, 9 };
//    int arr2[] = { 2, 4, 6, 8, 10 };
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    if (sz == sizeof(arr2) / sizeof(arr2[0]))
//    {
//        printf("ǰ\n");
//        print(arr1, sz);
//        print(arr2, sz);
//        jiaohuan(arr1, arr2, sz);
//        printf("��\n");
//        print(arr1, sz);
//        print(arr2, sz);
//    }
//    else
//    {
//        printf("�������鳤�Ȳ�һ��\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i =  0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + 1) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    // %x����ӡʮ������
//    return 0;
//}


//#include <stdio.h>
//int i;//ȫ�ֱ��� - ����ʼ�� - Ĭ����0
//int main()
//{
//    i--;// -1
//    if (i > sizeof(i))
//        // sizeof() - �������/������ռ�ڴ�Ĵ�С��һ���� >= 0��
//        // ����sizeof()������Ľ����һ���޷�����
//        // ���������޷��������м���ʱ���Ὣ����������λ�޷�������
//        // 10000000-00000000-00000000-00000001 - -1��ԭ��
//        // 11111111-11111111-11111111-11111110 - -1�ķ���
//        // 11111111-11111111-11111111-11111111 - -1�Ĳ���
//        // ��-1����λ�޷������ͣ���λ���ھ��з����ԣ�
//        // ��ʱ���޷��ŵ�i��һ�������������Զ����4
//        // 
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a + 2;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a = %d, b = %d , c = %d\n", a, b, c);
//    return 0;
//}

//// ��������в�ͬλ�ĸ���
//// ����������ÿһλ��1�룬Ȼ����бȽ�
//#include <stdio.h>
//int main()
//{
//	int n = 49;
//	int m = -49;
//	// 00000000-00000000-00000000-00101110 - 46
//	// 00000000-00000000-00000000-00110001 - 49
//	// 11111111-11111111-11111111-11001111 - -49
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) 
//	{
//		int ni = (n >> i) & 1;
//		int mi = (m >> i) & 1;
//		if (ni != mi ) 
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//// ��������в�ͬλ�ĸ���
//// ���Ȼ����1
//#include <stdio.h>
//
//int get_diff_bit(int m, int n) 
//{
//	int count = 0;
//	int a = m ^ n;
//	while (a) 
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������Ҫ����������ո������\n>:");
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}


// ���������1����
// ���������ȥ%2 /2��Ȼ��ͳ��%2==1�Ĵ���
//#include <stdio.h>
//int count_bit_one(unsigned int n) 
//// ע�⺯�����β�n�Ǹ��޷��ŵ�����
//// ��nΪ����ʱ����λ��������������λ
//{
//	int count = 0;
//	while (n) 
//	{
//		if (n % 2 == 1) 
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�������\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}

////���������1����
////���������ÿһλ��λ��1��Ȼ��ͳ��
//#include <stdio.h>
//
//int count_bit_one(int n) 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int ni = (n >> i) & 1;
//		if (ni == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�������\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}



//#include <stdio.h>
//// n = n & (n-1)
//// ���ɣ�
//// n = 13     1101
//// n - 1=12   1100
//// n =n&(n-1)=1100
//// 
//// n = 12     1100
//// n - 1=11   1011
//// n =n&(n-1)=1000
////
//// n = 8      1000
//// n - 1= 7   0111
//// n =n&(n-1)=0000
//// 
//// n = 0
//// ���ϵ��£����Է���һ������
//// �� n & (n-1)ʱ����n�Ķ�����������ʣ�µ�1�����ұߵ�һ��1��ʧ
////
//
//int count_bit_one(int n) 
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�������\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}


//// ��ȡһ��������������������ż��λ������λ���ֱ��ӡ������������
//#include <stdio.h>
//void count_bit_one(int n) 
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//// 0000000 10101010 10101010 10101010
//// 11184810
//
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�������\n>:");
//	scanf("%d", &n);
//	count_bit_one(n);
//	return 0;
//}

// ָ���������
//#include <stdio.h>
//
//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i) );
//    }
//
//}

//int main()
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//        print(arr, sz);
//    return 0;
//}

// �˷���
//#include <stdio.h>
//
//void print_table(int n) 
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++) 
//        {
//            printf("%d * %d = %d\t", j, i, i * j);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int n = 0;
//    printf("����һ������\n>: ");
//    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}


//// �ݹ��ӡ������ÿһ������������
//#include <stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	printf("����һ��������\n>:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//// ��n�Ľ׳�
//#include <stdio.h>
//
//int f(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * f(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("����һ��������\n>:");
//	scanf("%d", &n);
//	int num = f(n);
//	printf("%d", num);
//	return 0;
//}

//// strlen������ʵ��(�ݹ�)
//// ����ָ�뽫�ַ�������ƶ�
//
//#include <stdio.h>
//
//int my_strlen(char* p)
//{
//	if (*p == '\0') 
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(p + 1);
//	}
//}
//
//int main()
//{
//	char ch[] = "qwertyuiop";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//
//// �ַ�����ת���ݹ�
//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//
//int sum(int n)
//{
//    if (n < 10)
//    {
//        return n;
//    }
//    return n % 10 + sum(n / 10);
//}
//
//int main()
//{
//    printf("%d", sum(1234567));
//    return 0;
//}


//// �ݹ�ʵ��n��k�η�
//#include <stdio.h>
//int cifang(int n, int k)
//{
//    if (k == 1)
//    {
//        return n;
//    }
//    return n * cifang(n, k - 1);
//}
//
//int main()
//{
//    printf("%d", cifang(2, 4));
//    return 0;
//}


// ����쳲�������(�ݹ�ͷǵݹ�)
// 1, 1, 2, 3, 5, 8, 13, 21, 34...
#include <stdio.h>

int function_1(int n) // �ݹ�
{
	if (n < 3)
	{
		return 1;
	}
	return function_1(n - 1) + function_1(n - 2);
}



int function_2(int n) // ѭ��
{
	int num1 = 1;
	int num2 = 1;
	int tmp = 0;
	int i = 0;
	for (i = 2; i < n; i++)
	{
		tmp = num2 + num1;
		num1 = num2;
		num2 = tmp;
	}
	return tmp;
}

int main()
{
	printf("%d\n", function_1(7));// 13
	printf("%d\n", function_2(8));// 21
	return 0;
}