//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	// 00000000-00000000-00000000-00000011 // 3(int)
//	// 00000011 // 3(char)  - 将3(int)截断放入char类型的a中
//
//	char b = 127;
//	// 00000000-00000000-00000000-01111111 // 127(int)
//	// 01111111 // 127(char)  - 将127(int)截断放入char类型的a中
//	
//	// a 和 b是如何相加的
//	// cpu在进行运算的时候会把char提升为int
//	// 整型提升是按照变量的数据类型的符号位来提升的（正数提0，负数提1）
//	// 00000000-00000000-00000000-00000011 // 3(int)
//	// 00000000-00000000-00000000-01111111 // 127(int)
//	// 3(int) + 127(int) =
//	// 00000000-00000000-00000000-10000010 // 130(int) 
//	//		注意这个是补码
//
//	char c = a + b;
//	// 00000000-00000000-00000000-10000010 // 130(int)
//	// 10000010 // 将130(int)截断放入char类型的a中
//	// 最终c里存放的是 10000010 - 注意这个是补码
//
//	printf("c； %d", c); // -126; 
//	// 这里printf里的参数是%d，打印的是整型
//	// 将 c(char) 提升为整型
//	// 11111111-11111111-11111111-10000010  - 补码 
//	// 11111111-11111111-11111111-10000001  - 反码 <- 补码-1
//	// 10000000-00000000-00000000-01111110  - 原码 <- 反码取反首位符号位不变，其他位取反
//	// 10000000-00000000-00000000-01111110  - -126(int)
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 0xb6; // 0x - 代表16进制 char - 1个字节
//	// 0xb6 --> 10110011(2)
//
//	short b = 0xb600; // short - 2个字节
//	// 0xb600 --> 10110011-00000000(2)
//
//	int c = 0xb6000000; // int - 4个字节
//	// 0xb6000000 --> 10110011-00000000-00000000-00000000(2)
//
//	if (a == 0xb6) // 整型提升补充1
//	{
//		printf("a\n");// 会输出
//	}
//
//	if (b == 0xb600) // 整型提升补充1
//	{
//		printf("b\n");// 不会输出
//	}
//
//	if (c == 0xb6000000)// 不进行整型提升，c本身就是int类型
//	{
//		printf("c\n");// 会输出
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0;
//	printf("sizeof(a): %u(无符号)\n", sizeof(a)); // 1
//
//	printf("sizeof(+a): %u(无符号)\n", sizeof(+a)); // 4 
//	// +a - 进行了运算，一旦进行了运算，金辉有整型提升
//	
//	printf("sizeof(!a): %u(无符号)\n", sizeof(!a)); // 4
//	// !a - 并没有进行运算
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 10;
//    
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}

//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer); // 0
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret: %d\n", ret);
//    printf("i: %d\n", i);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//printf("sizeof(char*)：%d\n", sizeof(char*)); // 8
//	//printf("sizeof(int*)：%d\n", sizeof(int*)); // 8
//	//printf("sizeof(double*)：%d\n", sizeof(double*)); // 8
//	int a = 0x11223344;
//
//	//// char
//	//char* cp = &a;
//	//*cp = 0;
//
//	//// int
//	//int* ip = &a;
//	//*ip = 0;
//
//	// double 
//	double* dp = &a;
//	*dp = 0;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x1122334455667788;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("pa: %p\n", pa);
//	printf("pa+1: %p\n", pa+1);// 看似+1，实际+4， 4为int类型在内存中所占字节大小
//
//	printf("pc: %p\n", pc);
//	printf("pc+1: %p\n", pc+1);// 看似+1，实际+1， 1为char类型在内存中所占字节大小
//
//	return 0;
//}


//// 利用指针的步长变量数组
//// 注意指针的类型需要与元组的类型一致
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	//int* p = arr; // 数组名 - 首元素的地址
//	char* p = arr;
//	int i = 0;
//	for（i = 0; i < 10; i++ ）
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int *p; //局部变量指针未初始化，默认为随机值
//    *p = 20;
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	// 当指针指向的范围超出数组arr的范围时,p就是野指针
//	return 0;
//}

#include <stdio.h>

int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	// p指向的内存空间已释放
	return 0;
}