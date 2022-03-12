//#include <stdio.h>
////包含一个叫stdio.h的文件
////std-标准 standard input output
//
//int main() //主函数-程序的入口-main函数有且只有一个
//
//// int是整型的意思
//// main前面的int表示main函数调用返回一个整型值
//// int main()
////{
////		return 0; //返回0 
//// }
//
//{
//	printf("Hello World!");
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function - printf - 打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-需要打招呼（声明）
//
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	// char		//字符数据类型
//	//char ch = 'A';// 向计算机的内存中申请一块空间,空间名叫ch用于存放字符A
//	//printf("%c\n", ch);// %c打印字符格式的数据
//
//	// int			//整形
//	//int age = 20;
//	//printf("%d\n", age); // %d - 打印整型
//
//	// float
//	float f = 5.0;
//	printf("%f", f);	// %f打印浮点型
//
//	// double
//	double d = 3.14;
//	printf("%lf", d); // %lf打印长浮点型
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(long)); //4
//	printf("%d\n", sizeof(long long)); //8 
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(double)); //8
//	return 0;
//}


//#include <stdio.h>
//
//int num1 = 20; //全局变量，定义在代码块之外（{}）的变量
//
//int main()
//{
//	int num1 = 10; // 局部变量，定义在代码块内部（{}）的变量
//
//	printf("%d", num1);
//	//局部变量和全局变量的名字不要相同，容易产生误会（bug）
//	//当局部变量和全局变量名字相同时，局部变量优先于全局变量
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	// 输入数据使用输入函数scanf()
//	scanf("%d%d", &num1, &num2); // 取地址符号&
//	int sum;
//	// C语言规定，变量要定义在代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	{
//		int num2 = 20;
//		printf("num1 = %d\n", num1);
//		printf("num2 = %d\n", num2);
//	}
//	printf("num1 = %d\n", num1);
//	//printf("num2 = %d\n", num2); // 超出了num2的作用域，报错
//	return 0;
//}



//#include <stdio.h>
//
//int global = 2022;
//
//void test() 
//{
//	printf("test()global = %d\n", global);
//}
//
//int main()
//{
//	// 未声明的标识符
//	// 可以通过extern声明使用
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	printf("global = %d\n", global);
//	test();
//	return 0;
//}


#include <stdio.h>
int main()
{
	//const - 常属性
	int m = 15;
	//int n = 10; //n是变量，但是又带有常属性，所以我们说n是常变量

	int arr0[20] = { 0 };//错误，m是变量
	//int arr1[m] = { 0 };//错误，m是变量
	//const int arr2[n] = { 0 }; // n具有常属性是常变量(中国人拿到了美国绿卡)

	const int num = 4;
	printf("%d\n", num);

	//num = 8;// 错误，常变量不可修改
	printf("%d\n", num);

	return 0;
}