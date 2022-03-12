//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("Hello World!\n");
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//#define MAX 100
//
//#include <stdio.h>
//int main() 
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}



//枚举常量
// 枚举 - 一一列举
//性别：男、女、人妖
//三原色：红、黄、览
//星期：1，2，3，4，5，6，7
//
//枚举关键字 - enum

//enum Color {
//	red,			// 大括号中的枚举常量不可改
//	yellow,			// 通过枚举类型创建的变量可以更改
//	blue
//};
//
//#include <stdio.h>
//int main() 
//{
//
//	enum Color color = red; //通过枚举类型创建的变量可以更改
//	printf("%d\n", color);
//	color = yellow;
//	printf("%d\n", color);
//	color = 8;
//	printf("%d\n",color);
//
//	//red = 4; // 大括号中的枚举常量不可改
//
//	printf("%d\n", red);
//	printf("%d\n", yellow);
//	printf("%d\n", blue);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = {"abc"};
//	// 这个数组中不知存放了 'a' 'b' 'c' ，还偷偷放了一个'\0'
//	// '\0'代表字符串的结束标志()
//	char arr2[] = {'a', 'b', 'c'};
//	char arr3[] = {'a', 'b', 'c', 0};
//
//	printf("%s\n", arr1); // abc
//	printf("%s\n", arr2); // abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫虜愱↑
//	printf("%s\n", arr3); // abc
//
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	char arr1[] = {"abc"};
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%d\n", strlen(arr1));	
//		// strlen -- string length 计算字符串的长度
//		// 字符串到'\0'为止，所以字符串的长度不包括'\0'
//	printf("%d\n", strlen(arr2));
//		// 此字符'c'字符的后面为随机值，只有当找到'\0'时才会停止计算长度，为随机值
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	printf("abcn_\n");
//	printf("abc\n_\n");
//	//  \n换行制表符
//
//	printf("C:\etst\system\test.c_\n");
//	// \t水平制表符
//	printf("C:\\test\\system\\test.c_\n");
//	//  't'被'\'转义为了水平制表符，可用'\'将'\'转义为普通'\'
//
//	printf("(Are You OK??)\n");
//		//	在一些版本较低的编译器可能会将??)作为三字母词进行转义，可用斜杠将？转义
//	printf("(Are You OK\?\?)\n");
//
//	//printf(''');
//	//printf(""");
//		// 当想要打印单个引号时，会报错
//	printf('\'\n');
//	printf("\"\n");
//		// 可用斜杆将引号转义
//
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//	printf("%d\n", strlen("C:\test\132\test.c"));
//	// 转义字符的长度为1
//	// \132 -- 中的的132为八进制数，将其转位10进制数得到的90
//	printf("%c\n", '\132'); //Z
//	// 132(8)-90(10)-ASCII_90为'Z'
//	// 90代表的是ASCII码中序号为90的字符
//
//	//printf("%c\n", '\400'); //报错
//	printf("%c\n", '\013#'); //#
//	/*ddd 最多只支持三位数字，并且三位数字也不是任意的，
//	一旦大于等于八进制数 '/400 '（十进制256=8进制400）就超过了ascall码的范围，
//	编译器就会报错。另外大于三位，或者遇到非八进制数字时则转换结束，直接取末尾数字*/ 
//
//	printf("%c\n", '\x61'); //a
//	// \x61 -- 中的的61为十六进制数，将其转位10进制数得到的97
//	// 97代表的是ASCII码中序号为97的字符
//	// \xhh具有范围限制，范围为(\x0 - \7F)，超出会报错
//
//	printf("%c\n", '\x1K'); //K
//	/* xhh 最多只支持两位数字，并且两位数字也不是任意的，
//	一旦大于等于十六进制数 '/xFF '（十进制256=16进制FF1）就超过了ascall码的范围，
//	编译器就会报错。另外遇到非十六进制数字时则转换结束，直接取末尾数字*/
//
//
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int input = 0;
//	printf("看见宝箱, 你会去开宝箱吗？(选择0/1):> ");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("你死了，被老六偷屁股了\n");
//	}
//	else
//	{
//		printf("你死了，被宝箱咬死了\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int many = 0;
//	while (many < 2000) 
//	{
//		printf("打史莱姆，获得一金币\n");
//		many++;
//	}
//	printf("有钱了，去猫娘咖啡放松\n");
//	return 0;
//}


//int sum(num1, num2) 
//{
//	return num1 + num2;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 12;
//	int c = 167;
//	int d = 96;
//	printf("%d\n", sum(a, b));
//	printf("%d\n", sum(c, b));
//	printf("%d\n", sum(d, b));
//}


//#include <stdio.h>
//int main() 
//{
//	int i = 0;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };// 整型数组
//				//   0,1,2,3,4,5,6,7,8,9
//				//数组are[n]的下标从0开始到n-1，通过下标可以访问数组中的元素
//	char ch[5] = { 'H','e','l','l','o' };// 字符数组
//	float arr2[5] = { 3.14, 1.35, 2.56, 6.12, 12.13 };// 浮点型数组
//
//	// 利用循环遍历数组中的元素
//	while (i < 10) 
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//}

//#include <stdio.h>
//int main()
//{
//    printf("%.2f\n", 5.0 / 2);
//    // 商为2.50
//
//    printf("%.2f\n", 5 / 2);
//    // 商为0.00
//    printf("%d\n", 5 / 2);
//    // 商为2
//
//    printf("%d\n", 5 / 2);
//    // 余数为1
//
//    return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	//  移位(二进制)操作符
//	//	<<左移
//	//	>>右移
//	int a = 1;
//	int b = a<<2 ;
//	// 00000000000000000000000000000001, 这是a在内存中二进制的表示
//	// 000000000000000000000000000001▢▢  向将a向左移两位，最后两位kongchull
//	// 00000000000000000000000000000100  用0补上，最终值为4，2的2次方，这其中，a的值没有发生改变
//	// 这其中，a的值没有发生改变，右移动同理
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//按位与 &
//	//按位或 |
//	//按位异或 ^
//	printf("与(&)%d\n", a & b);
//	// 两个对象相位相同结果为1，相位不同结果为0
//	// a 0 1 1	(3)
//	// b 1 0 1	(5)
//	//   0 0 1	(1)
//
//	printf("或(|)%d\n", a | b);
//	// 两个对象相位只要有一个为1，结果为1，无1为0
//	// a 0 1 1	(3)
//	// b 1 0 1	(5)
//	//   1 1 1	(7)
//
//	printf("异或(^)%d\n", a ^ b);
//	// 两个对象相位不同结果为1，相位相同结果为0
//	// a 0 1 1	(3)
//	// b 1 0 1	(5)
//	//   1 1 0	(6)
//
//	return 0;
//}

// 复合赋值符
// 
//n += a;    相当于n = n + a;
//n -= a;    相当于n = n - a;
//n *= a;    相当于n = n * a;
//n /= a;    相当于n = n / a;
//n %= a;    相当于n = n % a;
//n <<= a;   相当于n = n << a;
//n >>= a;   相当于n = n >> a;
//n &= a;    相当于n = n & a;
//n ^= a;    相当于n = n ^ a;
//n |= a;    相当于n = n | a;

////单目操作符'!'
//#include <stdio.h>
//int main() 
//{
//	int a = 10;
//	int b = 0;
//	// 在C语言中，0代表假，非0的代表真
//	// 0的非运算（!0）一定为1
//
//	printf("%d\n", a);// 10
//	printf("%d\n", !a);// 0
//	
//	printf("%d\n",b);// 0
//	printf("%d\n", !b);// 1
//	return 0;
//}

////单目操作符sizeof
// 
//#include <stdio.h>
//int main() 
//{
//	int a = 20;
//	int arr[10] = {0};
//
//	//sizeof 计算的是变量/类型所占空间的大小,单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a );
//	//printf("%d\n", sizeof int ); // 此为类型不可以省略
//	// 计算时变量的"()"可以省略，类型的不可以省略
//
//
//
//	// 求数组中元素个数：
//	printf("数组arr占用%d个字节\n", sizeof(arr));//整个数组的大小是是40
//	printf("数组arr中单个元素占用%d个字节\n", sizeof(arr[0]));//数组中单个元素的大小是是4
//	printf("数组arr中有%d个元素\n", sizeof(arr)/sizeof(arr[0]));//整个数组共有10个元素
//
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int MAX(int num1 ,int num2) 
//{
//	return (num1 > num2) ?  num1: num2;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("两个值中的最大值是：%d ", MAX(num1, num2));
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[] = "Hellow!";
//	printf("%d\n", sizeof arr );
//	printf("%d\n", sizeof arr[0]);
//	printf("%d\n", sizeof arr / sizeof arr[0]);
//	while (i < 8) 
//	{
//		printf("%c\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//# include <stdio.h>
//int main() 
//{
//	int a = 0;
//	int b;
//	b = ~ a; // 注意这里的b是有符号的整型，最高位代表正负（0代表正，1代表负）
//	// ~ - 按二进制位制取反
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111
//	// 原码、反码、补码
//	//		原码：用最高位表示符号位，其余位表示数值位的编码称为原码。其中，正数的符号位为 0，负数的符号位为 1。
//	//		负数的反码：把原码的符号位保持不变，数值位逐位取反，即可得原码的反码。
//	//		负数的补码：在反码的基础上加 1 即得该原码的补码。
//	//		正数的原码、反码、补码均相同。
//	//	
//	//	负数在内存中存储的是二进制的补码
//	// 	
//	//  11111111111111111111111111111111 补码
//	//  11111111111111111111111111111110 反码（补码-1得到反码）
//	//  10000000000000000000000000000001 源码（最高位符号位不变，数值位逐位取反）
//	// 
//
//	printf("a = %d\n", a); // 0
//	printf("b = %d\n", b); // -1 使用时，打印的是这个数的原码
//	// 原码、反码、补码
//	// 
//
//}

//#include <stdio.h>
//int main()
//{
//	int a1 = 1;
//	int a2 = 1;
//	int b1 = 5;
//	int b2 = 5;
//
//	printf("a1++ = %d\n", a1++); // 1 先用后艹
//	printf("a1 = %d\n", a1);	 // 2
//
//	printf("++a2 = %d\n", ++a2); // 2 先艹后用
//	printf("a2 = %d\n", a2);	 // 2
//	
//	printf("b1-- = %d\n", b1--); // 5 先用后剪(j8)
//	printf("b1 = %d\n", b1);	 // 4
//	
//	printf("--b2 = %d\n", --b2); // 4 先剪后用
//	printf("b2 = %d\n", b2);	 // 4
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = (int)3.14; // double --> int,不建议会造成精度损失
//
//	printf("%d\n", num);
//
//	return 0;
//}

#include <stdio.h>
int main() 
{
	//	在c语言中
	//	非0 表示真
	//	 0	表示假
	// 
	//	&&	逻辑与
	//  ||	逻辑或
	int a = 3;
	int b = 5;
	int c = 0;
	int d = -1;
	printf("%d\n", a && b);   // 1
	printf("%d\n", a && c);   // 0
	printf("%d\n\n", a && d); // 1

	printf("%d\n", a || b); // 1
	printf("%d\n", a || c); // 1
	printf("%d\n", a || d); // 1

	return 0;
}