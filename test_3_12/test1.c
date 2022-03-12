//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2) // if else语句
//	{
//		printf("%d\n", num1);
//	}
//	else 
//	{
//		printf("%d\n", num2);
//	}
//	printf("三目运算符:%d\n", (num1 > num2) ? num1 : num2);
//	// 三目运算符
//	// (a > b ) ? a : b;
//	// 当a > b 成立时，表达式的值为a
//	// 当a > b 不成立时，表达式的值为b
//	// 
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a[5] = { 0,1,2,3,4 };
//	a[4]; // [] - 下标引用操作符
//
//	int x = 10;
//	int y = 20;
//	int sum = Add(x, y); // () -函数调用操作符
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int num1 = 20; // 定义一个无符号的变量
//	// unsigned int - 这个名称太长了，
//	// 可以使用typedef类型自定义一个名称，
//	// 注意，自定义名称只在当前main()中有效
//	typedef unsigned int u_int;
//	u_int num2 = 32;
//	// 你叫张三，你小明叫小三，这就是 typedef
//	return 0;
//}


//#include <stdio.h>
////static 修饰局部变量
//// 局部变量的生命周期边长
//// 
//
//int test() {
//	//int a = 1; // 动态局部变量
//	static int a = 1; // 静态局部变量
//	a++;
//	printf("test():%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//	return 0;
//}

//static 修饰全局变量
// 改变了变量的作用域 - 
// 让静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件就没法使用了

//#include<stdio.h>
//int main() 
//{
//	// extern - 声明外部符号的
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	return 0;
//}

//#include<stdio.h>
////static修饰函数
//// 也是改变了函数的作用域-不准确
//// static秀实函数改变了函数的链接属性
//// 从 外部链接属性 --> 内部链接属性
////
//extern int Add(int, int);
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum  = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//// #define 定义标识符常量
//// #define MAX 100
//// #define 可以定义宏-带参数
//
//int Max(int a, int b) 
//{
//	return (a > b) ? a : b;
//}
//
//#define MAX(X, Y) (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max1;
//	int max2;
//	// 函数
//	max1 = Max(a, b);
//	printf("Max: %d\n", max1);
//
//	// 宏
//	max2 = MAX(a, b);
//	printf("MAX: %d\n", max2);
//
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int a = 10;
//	// &a //取地址操作符(用%p输出)
//	printf("&a: %p\n", &a); // 000000FCDCD9F6A4
//
//	int* p = &a;// 取a的地址存放给变量p
//	// C语言中存放地址的变量被称为指针变量，
//	// 指针变量用 int* 来定义
//	printf("p:  %p\n", p);
//
//	//*p // * - 解引用操作符
//	// 对p进行解引用操作，找到p指向的对象a
//	*p = 20;
//	printf("%d\n", a);// a的值由10变成了20
//
//	return 0;
//}


#include <stdio.h>
int main()
{
	char cr = 'a';
	char* pc = &cr;
	printf("&cr: %p\n", &cr);
	printf(" pc: %p\n", pc);
	printf("%c\n", *pc);
	printf("%d\n", sizeof(pc));
	return 0;
}
