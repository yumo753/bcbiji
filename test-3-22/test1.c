#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("5 / 2 = %d\n", 5 / 2); // 2
//	printf("5.0 / 2 = %f\n", 5.0 / 2); // 2.50000
//	printf("5 / 2.0 = %f\n", 5 / 2.0); // 2.50000
//	printf("5.0 / 2.0 = %f\n", 5.0 / 2.0); // 2.50000
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("5 \% 2 = %d\n", 5 % 2); // 1
//	printf("5.0 \% 2.0 = %d\n", 5.0 % 2.0);// 报错
//	return 0;
//}

//// 正数右移
//#include <stdio.h>
//int main()
//{
//	int a = 16;
//	// >> 右移操作符
//	// 移动的是二进制位
//	// 两种移动方法
//	// 1，算术右移
//	//		右边丢弃，左边补原符号位
//	// 2，逻辑右移
//	//		右边丢弃，左边补0
//	// 00000000000000000000000000010000 - 移位前
//	// 00000000000000000000000000001000 - 移位后
//	int b = a >> 1;
//	printf("%d\n", b);// 8，算术右移
//	return 0;
//}

//// 负数右移
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	//
//	// 整数的二进制表示有：原码、反码、补码
//	// 存储到内存的是补码
//	// 首位符号位，1为负，0为正
//	// 10000000000000000000000000000001 - 原码
//	// 11111111111111111111111111111110 - 反码（符号位不变）
//	// 11111111111111111111111111111111 - 补码 （反码+1）
//	// 整数在内存中存放的是补码
//	// 移位时移动的也是补码
//	//
//	// 移位前:
//	// 11111111111111111111111111111111
//	// 移位后:
//	// 11111111111111111111111111111111
//	// 算术右移，右边丢弃，左边补原符号位
//	//
//	int b = a >> 1;
//	printf("%d\n", b);// -1
//	return 0;
//}

//// 正数左移
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b =  a << 1;
//
//	// 左移操作符
//	// 左边丢弃，右边补0
//	// 
//	// 移位前
//	// 00000000000000000000000000000101 4 + 1 = 5
//	// 移位后
//	// 00000000000000000000000000001010 8 + 2 = 10
//	//
//	printf("b: %d", b); // 10
//	return 0;
//}

//// 负数左移
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	//
//	// 整数的二进制表示有：原码、反码、补码
//	// 存储到内存的是补码
//	// 首位符号位，1为负，0为正
//	// 10000000000000000000000000000001 - 原码
//	// 11111111111111111111111111111110 - 反码（符号位不变）
//	// 11111111111111111111111111111111 - 补码 （反码+1）
//	// 整数在内存中存放的是补码
//	// 移位时移动的也是补码
//  //
//	// 移位前:
//	// 11111111111111111111111111111111 - 补码
//	// 移位后:
//	// 11111111111111111111111111111110 - 补码
//	// 左边丢弃，右边补0
//	//
//	int b = a << 1;
//	printf("%d\n", b);// -2
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//
//	int b = a >> -1;// 未定义
//	printf("b: %d\n", b);// 0
//
//	int d = a >> -1;// 未定义
//	printf("d: %d\n", d);// 0
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	// 都是二进制，在运算时参与运算的都是 补码
//	// &  按位与 - 都是1，结果为1，否则为0
//	// |  按位或 - 只要有一个1，结果为1，都是0为0
//	// ^  按位异或 - 相同为0，不同为1
//	// 注意：他们的操作数必须是整数
//
//	int num1 = 3;
//	int num2 = 5;
//	int num3 = -5;
//
//	printf("num1 & num2 = %d\n", num1 & num2); // 1
//	printf("num1 | num2 = %d\n", num1 | num2); // 7
//	printf("num1 ^ num2 = %d\n", num1 ^ num2); // 6
//
//	printf("num1 & num3 = %d\n", num1 & num3); // 3
//	printf("num1 | num3 = %d\n", num1 | num3); // -5
//	printf("num1 ^ num3 = %d\n", num1 ^ num3); // -8
//
//	return 0;
//}


//// 交换两个变量的值，不允许创建临时变量
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//// 传统方法
//	//int tmp = 0;
//	//printf("before: a=%d, b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after: a=%d, b=%d\n", a, b);
//
//	// 加减法 - 可能会溢出
//	//printf("before: a=%d, b=%d\n", a, b);
//	//a = a + b;// (a + b)
//	//b = a - b;// (a + b) - b = a
//	//a = a - b;// (a + b) - [(a + b) - b] = b
//	//printf("after: a=%d, b=%d\n", a, b);
//
//	// 异或的方法
//	a = a ^ b;
//	// a;	011 - 3
//	// b:	101 - 5
//	// a^b: 110 - 6
//
//	b = a ^ b;
//	// a;	110 - 6
//	// b:	101 - 5
//	// a^b: 011 - 3
//
//	a = a ^ b;
//	// a;	110 - 6
//	// b:	011 - 3
//	// a^b: 101 - 5
//
//	return 0;
//}

// 求一个整数存储在内存中的二进制中 1 的个数
// 统计这个数的补码中有几个1

//// 方法1，余2除2，有bug，只能求正数
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("输入你要求的数：");
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1) 
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d存储在内存中的二进制中1的个数是%d\n",num, count);
//
//	return 0;
//}


//// 方法2，利用 >> 用补码一位一位的与1位与
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int arr[32];
//	printf("输入你要求的数：");
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++) 
//	{
//		if ((num >> i) & 1 == 1) 
//		{
//			count++;
//		}
//		arr[i] = (num >> i) & 1;
//	}
//
//	printf("%d在内存中存放的补码:\n",num);
//	for (i = 31; i >= 0; i--) 
//	{
//		printf("%d", arr[i]);
//	}
//	/*
//	00000000000000000000000000000111 - 7 num
//	00000000000000000000000000000001 - 1
//	00000000000000000000000000000001 - 1 按位与得到1
//	随后将num向右位移1位算第二个值是否为1
//	*/
//
//	printf("\n%d存储在内存中的二进制中1的个数是%d\n", num, count);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("输入你要求的数：");
//	scanf("%d", &num);
//
//	while (num) 
//	{
//		count++;
//		num = num & (num - 1);
//	}
//
//	printf("%d存储在内存中的二进制中1的个数是%d\n", num, count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int weight = 120;// 体重
//	// 注意这叫初始化，不叫赋值
//
//	weight = 1500;// 不满意就赋值
//	// 这才叫赋值
//
//	double salary = 10000.0;
//	salary = 20000.0;// 使用赋值操作符赋值
//
//	// 赋值操作符可以连续使用：
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	
//	a = b = c + 1;// 连续赋值
//	// 这代码难看，不好懂，不便于理解
//
//	b = c + 1;
//	a = b;
//	// 好看，好懂，好理解
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//
//	// a为真打印wdnmd
//	if (a)
//	{
//		printf("wdnmd！\n");
//	}
//
//	// a为假打印awsl
//	if (!a)
//	{
//		printf("awsl！\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int* p = &a; // 取地址操作符
//    // 将a的地址值放到指针变量p中
//    *p = 20;	// 解引用操作符
//    // 将20赋值给地址值为p的元素
//    // 将20赋值给a
//    printf("a = %d\n", a);
//    printf("*p = %d\n", *p);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	// sizeof计算的是变量所占内存空间的大小，单位是字节
//	printf("a: %d\n", sizeof(a)); // 4
//	printf("int: %d\n", sizeof(int)); // 4
//
//	printf("c: %d\n", sizeof(c)); // 1
//	printf("char: %d\n", sizeof(char)); // 1
//	
//	printf("p: %d\n", sizeof(p)); // 8
//	// 64位平台上是4，32位平台上是4
//	printf("char*: %d\n", sizeof(char*)); // 8
//
//	
//	printf("arr: %d\n", sizeof(arr)); // 40 10 * 4
//	// 数组中10个int类型元素，int类型在内存中占用4个字节
//	printf("int [10]: %d\n", sizeof(int [10])); // 40 4 * 10
//	// 数组的类型 - int[10] 40 4 * 10
//	// 数组的类型 - int[5] 20 4 * 5
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));// 2
//	// short: 不管你是int、long、还是char，到了我这都得听我的
//	//		所以最后在内存中所占空间的大小还是2个字节
//
//	printf("%d\n", s);// 0
//	// sizeof单目运算符()中的表达式不参与运算，只是一个摆设
//	//		所以终止s的值还是0
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	// 00000000000000000000000000000011 - 补码（正数的原码，反码，补码相同）
//	// 11111111111111111111111111111100 - 补码（按位取反后）
//	// 11111111111111111111111111111011 - 反码 （补码 - 1）
//	// 10000000000000000000000000000100 - 原码	(反码取反)
//	// 
//	int b = ~a;
//	printf("b: %d", b); // -4
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	// 101 --> 111
//	// 101 | 010
//	// 101 - 5
//	// 010 - 1向左移一位(1 << 1)
//	// 111 - 7
//	a = a | (1 << 1);
//	printf("a: %d\n", a);
//
//	// 111 --> 101
//	// 111 & 101
//	// 111 - 7
//	// 101 - 1向左移一位取反~(1 << 1)
//	// 101 - 5
//	a = a & ~(1 << 1);
//	printf("a: %d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("++a: %d\n", ++a); // 前置++，先艹，后用 11
//	printf("a++: %d\n", a++); // 后置++，先用，后艹 11
//	printf("--a: %d\n", --a); // 前置--，先剪，后用 11
//	printf("a--: %d\n", a--); // 后置--，先用，后剪 11
//	printf("a: %d\n",a); // 10
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//int a = 3.14; 
//	//从“double”转换到“int”，可能丢失数据
//	//printf("a: %d\n", a);
//
//	int b = (int)3.64; 
//	// 将3.14强制转换为整型,不会四舍五入，会将小数点后的全部抹掉
//	printf("b: %d\n", b);//3
//	
//	int c = (int)9.99;
//	printf("c: %d\n", c);// 9
//
//	// 注意：
//	//int d = int(6.66); // 错误写法
//	int d = (int)6.66; // 正确写法
//	printf("d: %d\n", d);// 6
//	return 0;
//}


//// sizeof和数组
//#include <stdio.h>
//
//void test1(int arr[]) 
//{
//	printf("test1-sizeof(arr): %d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("test2-sizeof(ch): %d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("sizeof(arr): %d\n", sizeof(arr)); // 40
//	printf("sizeof(ch): %d\n", sizeof(ch)); // 10
//
//	test1(arr); // 8 - 取决于平台，32为是4，64位是8
//	test2(ch); // 8 - 取决于平台，32为是4，64位是8
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("2 & 3 = %d\n", 2 & 3); // 2
//	// 010
//	// 011
//	// 110
//	printf("2 && 3 = %d\n", 2 && 3);// 1
//
//	printf("3 | 3 = %d\n", 3 | 3); // 3
//	// 010
//	// 011
//	// 011
//	printf("2 || 3 = %d\n", 2 || 3);// 1
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	 //i = a++ || ++b || d++;
//	printf("i = %d\n a = %d\n b = %d\n c = %d\n d = %d\n", i, a, b, c, d);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    int b = 0;
//    if (a > 5)
//    {
//        b = 3;
//    }
//    else
//    {
//        b = -3;
//    }
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//
//    int c = 3;
//    int d = 0;
//    d = (c > 5 ? 3 : -3);
//    printf("c = %d\n", c);
//    printf("d = %d\n", d);
//
//    // max = (a > b ? a : b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1); // 13
//	// 逗号表达式，从左到右依次执行，表达式结果为最后一个表达式的结果
//
//	printf("a = %d\n", a); // 12
//	printf("b = %d\n", b); // 13
//	printf("c = %d\n", c); // 13
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	if (a = b + 1, c = a / 2, d > 0)
//	// 逗号表达式，从左到右依次执行，表达式结果为最后一个表达式的结果
//	{
//		printf("awsl\n");// 会打印
//	}
//	printf("a = %d\n", a); // 3
//	printf("b = %d\n", b); // 2
//	printf("c = %d\n", c); // 1
//	printf("d = %d\n", d); // 4
//	return;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10]; // 创建数组
//	arr[4] = 10; // 使用下标引用操作符
//	// []的两个操作数是arr和4
//	return 0;
//}


//#include <stdio.h>
//
//int get_max(int x, int y) 
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 调用函数的时候, ( )就是函数调用操作符
//	int max = get_max(a, b);
//	// 该函数调用操作符的操作数有三个
//	// get_max - 函数名
//	// a - 传递给函数的参数
//	// b - 传递给函数的参数
//	printf("max = %d;", max);
//	return 0;
//}

#include <stdio.h>

// 创建了一个结构体类型 - struct Stu
// 设计了图纸
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	// 使用struct Stu这个类型创建了一个学生对象s1，并初始化
	// 根据图纸创建了一栋房子
	struct Stu s1 = { "张三", 20, "2019107J21101" };
	struct Stu* ps = &s1;

	// 利用.打印
	printf("利用.打印\n");
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	// 结构体变量.成员名
	printf("\n");

	// 利用指针打印
	printf("利用指针打印\n");
	printf("%s\n", ps->name); // ps->name == *(ps).name
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	// 结构体指针->成员名

	return 0;
}
