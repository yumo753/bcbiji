#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//struct S 
//{
//	char c;
//	int a;
//	double d;
//};
//
//// 传值
//void Init1(struct S tmp) 
//{
//	tmp.c = 'w';
//	tmp.a = 12;
//	tmp.d = 3.14;
//}
//
//// 传址
//void Init2(struct S* tmp)
//{
//	tmp->c = 'w';
//	tmp->a = 12;
//	tmp->d = 3.14;
//}
//
//// 传值
//void print1(struct S tmp) 
//{
//	printf("%c, %d, %lf\n", tmp.c, tmp.a, tmp.d);
//}
//
//// 传址
//void print2(struct S* tmp)
//{
//	printf("%c, %d, %lf\n", tmp->c, tmp->a, tmp->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init1(s);
//	// 利用函数对结构体初始化时，传的应该时结构体变量的地址，而不是结构体变量名
//	Init2(&s);
//
//	print1(s);
//	print2(&s);
//	return 0;
//}


//#include <stdio.h>
//
//// 位段 - 位，二级制位
//
//struct S // S是一个位段类型
//{
//	int a : 2; // 这一行语句的意思是：a只需要2个bit
//	int b : 5; // 这一行语句的意思是：b只需要5个bit
//	int c : 10; // 这一行语句的意思是：c只需要10个bit
//	int d : 30; // 这一行语句的意思是：d只需要30个bit
//};
//
//// 47bit - 6个字节*8 = 48bit;
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); // 8个字节
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(s));// 3;
//
//	return 0;
//}


//#include <stdio.h>
//enum Sex //性别
//{
//    // 枚举的可能取值-常量
//    MALE = 2,
//    FEMALE = 8,
//    // printf("%d %d %d\n", MALE, FEMALE, SECRET); // 2 8 9
//    SECRET
//};
//
//enum Color //性别
//{
//    RED,
//    GREEN,
//    BLUE
//};
//
//int main()
//{
//    enum Sex s = MALE;
//    enum Color c = BLUE;
//
//    // 枚举变量再枚举外是不能赋值的
//    //FEMALE = 0;// error
//
//    // 无法从int类型转换为Coloe类型
//        // C可以，C++不可以
//    //enum Color c = 4;// error
//
//
//    printf("%d %d %d\n", MALE, FEMALE, SECRET);
//    printf("%d %d %d\n", RED, GREEN, BLUE);
//
//    printf("%d\n", s);// 0
//    printf("%d\n", c);// 2
//
//    return 0;
//}


//#include <stdio.h>
//
//enum Color //颜色
//{
//    RED,
//    GREEN,
//    BLUE
//};
//
//int main()
//{
//    enum Color c = BLUE;
//    printf("%d\n", sizeof(c));
//    return 0;
//}


//
//#include <stdio.h>
//
//union Un 
//{
//	char c; // 1个字节
//	int i; // 4个字节
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u)); // 4
//
//	printf("%p\n", &u);
//	
//	printf("%p\n", &(u.c));
//
//	printf("%p\n", &(u.i));
//
//	return 0;
//}



//#include <stdio.h>
//// int a = 0x12345678;
//// 低地址------------------高地址
//// [][][][][][][][][][][][][][]
//// ...[][][][][12][34][56][78][][][][][][]... 大端字节序 
//// ...[][][][][78][56][34][12][][][][][][]... 小端字节序
//// 讨论一个数据，放在内存中存放的字节顺序
//// 大小端字节序问题
//// 利用联合可以求出
//// 由于联合中的内容共用一块空间，
//// 创建一个含有int 和 char的联合，先给int赋值1，然后取出char类型
//// == 1，小端，== 0大端
//
//// 原始
//int check_sys1()
//{
//	int a = 1;
//	// 返回1，小
//	// 返回0，大
//	return *(char*)&a;
//}
//
//// 联合
//int check_sys2()
//{
//	union Un 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	// 返回1，小
//	// 返回0，大
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys2();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else if (ret == 0)
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



#include <stdio.h>
union Un
{
	int i; // 4个字节
	char c[5]; // 1*5个字节
	// 最大字节数是4
	// 联合体的大小应该是4的倍数：2*4=8
}u;

int main()
{
	printf("%d\n", sizeof(u));// 8;
	return 0;
}
