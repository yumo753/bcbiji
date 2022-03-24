#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* p = NULL; // NULL - 用来初始化指针的，给指针赋值
//					// NULL = ((void *)0) - 将0强制转换为void类型
//					// 大概等同于	int b = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	pa = NULL;
//	// *pa = 20; // 当指针指向NULL，指针将不能被使用	
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
//		// 可简化
//		printf("arr[i]: %d\n",* pa++);
//	}
//
//	printf("==========步长为2==========\n");
//	pa = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[i]: %d\n", *pa);
//		//pa = pa + 2;
//		pa += 2;
//	}
//
//	printf("======倒着打印，步长为-2=====\n");
//	pa = &arr[9];// 注意指向数组中的元素是要加&
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
//	// 指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//		// 将values数组的元素通过指针遍历全都赋值为0
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
//		printf("&arr[%d]；%p\n", i, &arr[i]);
//	}
//	printf("&arr[9] - &arr[0]; %p\n", p);
//	printf("&arr[9] - &arr[0]; %d\n", p);
//	printf("&arr[0] - &arr[9]; %d\n", p);
//
//	/*
//	&arr[0]；000000B70ABBF818
//	&arr[1]；000000B70ABBF81C
//	&arr[2]；000000B70ABBF820
//	&arr[3]；000000B70ABBF824
//	&arr[4]；000000B70ABBF828
//	&arr[5]；000000B70ABBF82C
//	&arr[6]；000000B70ABBF830
//	&arr[7]；000000B70ABBF834
//	&arr[8]；000000B70ABBF838
//	&arr[9]；000000B70ABBF83C
//	&arr[9] - &arr[0]; 0000000000000009
//	&arr[9] - &arr[0]; 9
//	&arr[0] - &arr[9]; -9
//
//	3C(16) -> 0011-1100(2)
//	18(16) -> 0001-1000(2)
//			  0010-0100(2) -> 36(10) = 4 * 9
//			  int类型在内存中占用4个字节
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
//		printf("&arr[%d]；%p\n", i, &arr[i]);
//	}
//	printf("&arr[9] - &arr[0]; %p\n", p);
//	printf("&arr[9] - &arr[0]; %d\n", p);
//	printf("&arr[0] - &arr[9]; %d\n", &arr[0] - &arr[9]);
//
//	/*
//	&arr[0]；00000098E54FF868
//	&arr[1]；00000098E54FF869
//	&arr[2]；00000098E54FF86A
//	&arr[3]；00000098E54FF86B
//	&arr[4]；00000098E54FF86C
//	&arr[5]；00000098E54FF86D
//	&arr[6]；00000098E54FF86E
//	&arr[7]；00000098E54FF86F
//	&arr[8]；00000098E54FF870
//	&arr[9]；00000098E54FF871
//	&arr[9] - &arr[0]; 0000000000000009
//	&arr[9] - &arr[0]; 9
//	&arr[0] - &arr[9]; -9
//
//	71(16) -> 0111-0001(2)
//	68(16) -> 0110-1000(2)
//			  0000-1001(2) -> 9(10) = 1 * 9
//			  char类型在内存中占用1个字节
//	*/
//	return 0;
//}

//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	// 字符串的末尾有一个'\0',找到'\0'的位置减去开始的位置
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
//	// strlen - 求字符串长度
//	// 计数器的方式，递归的方式
//	// 指针的方式
//
//	char arr[] = "yumo753";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//// 指针与数组
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	printf("      arr: %p\n", arr); // 数组名是数组首元素的地址
//	printf("    arr+1: %p\n", arr+1); // 加了一个元素的长度
//	
//	printf("  &arr[0]: %p\n", &arr[0]);
//	printf("&arr[0]+1: %p\n", &arr[0]+1);// 加了一个元素的长度
//	
//	printf("     &arr: %p\n", &arr);
//	printf("   &arr+1: %p\n", &arr+1);// 加了一个数组的长度
//	// 两个例外
//	// 1. &arr - &数组名 - 数组名不是首元素的地址而是整个元素的地址 
//	//					 - &数组名 取出的是整个数组的地址
//	// 2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组
//	//				 - sizeof(数组名) - 计算的是整个数组的大小
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
//	printf("============遍历数组===========\n");
//
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]); // 下标遍历
//		//printf("%d\n", *(p + i)); // 指针遍历
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// pa是一个指针，他指向的对象为int类型
//	int** ppa = &pa;
//	// ppa是二级指针变量，他指向的对象为指针
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
//    // 初始化数组
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
//        printf("前\n");
//        print(arr1, sz);
//        print(arr2, sz);
//        jiaohuan(arr1, arr2, sz);
//        printf("后\n");
//        print(arr1, sz);
//        print(arr2, sz);
//    }
//    else
//    {
//        printf("两个数组长度不一样\n");
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
//    // %x，打印十六进制
//    return 0;
//}


//#include <stdio.h>
//int i;//全局变量 - 不初始化 - 默认是0
//int main()
//{
//    i--;// -1
//    if (i > sizeof(i))
//        // sizeof() - 计算变量/类型所占内存的大小，一定是 >= 0的
//        // 所以sizeof()计算出的结果是一个无符号数
//        // 当整数和无符号数进行计算时，会将整型先提升位无符号整型
//        // 10000000-00000000-00000000-00000001 - -1的原码
//        // 11111111-11111111-11111111-11111110 - -1的反码
//        // 11111111-11111111-11111111-11111111 - -1的补码
//        // 将-1提升位无符号整型，首位不在具有符号性，
//        // 此时，无符号的i是一个超大的正数，远大于4
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

//// 求二级制中不同位的个数
//// 用两个数的每一位于1与，然后进行比较
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


//// 求二级制中不同位的个数
//// 异或，然后数1
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
//	printf("请输入你要求的两个数空格隔开：\n>:");
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}


// 求二级制中1个数
// 用这个数的去%2 /2，然后统计%2==1的次数
//#include <stdio.h>
//int count_bit_one(unsigned int n) 
//// 注意函数的形参n是个无符号的整数
//// 当n为负数时，首位将不被看作符号位
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
//	printf("请输入你要求的数：\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}

////求二级制中1个数
////用这个数的每一位按位与1，然后统计
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
//	printf("请输入你要求的数：\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}



//#include <stdio.h>
//// n = n & (n-1)
//// 规律：
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
//// 从上到下，可以发现一个规律
//// 当 n & (n-1)时会让n的二进制序列中剩下的1中最右边的一个1消失
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
//	printf("请输入你要求的数：\n>:");
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d\n", count);
//	return 0;
//}


//// 获取一个整数二进制序列所有偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//void count_bit_one(int n) 
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//	printf("偶数位：\n");
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
//	printf("请输入你要求的数：\n>:");
//	scanf("%d", &n);
//	count_bit_one(n);
//	return 0;
//}

// 指针遍历数组
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

// 乘法表
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
//    printf("输入一个数：\n>: ");
//    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}


//// 递归打印整数的每一个数，从左到右
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
//	printf("输入一个整数：\n>:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//// 求n的阶乘
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
//	printf("输入一个整数：\n>:");
//	scanf("%d", &n);
//	int num = f(n);
//	printf("%d", num);
//	return 0;
//}

//// strlen函数的实现(递归)
//// 利用指针将字符串向后移动
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
//// 字符串逆转，递归
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


//// 递归实现n的k次方
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


// 计算斐波那契数(递归和非递归)
// 1, 1, 2, 3, 5, 8, 13, 21, 34...
#include <stdio.h>

int function_1(int n) // 递归
{
	if (n < 3)
	{
		return 1;
	}
	return function_1(n - 1) + function_1(n - 2);
}



int function_2(int n) // 循环
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