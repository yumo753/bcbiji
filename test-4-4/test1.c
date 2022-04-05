#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//
//	// 无符号类型在整型提升时会补0
//	unsigned char a = 200;
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// a(b): 1100-1000
//
//	unsigned char b = 100;
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// b(b): 0110-0100
//
//	unsigned char c = 0;
//
//	c = a + b;// char类型在进行运算时会发生整型提升
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// 00000000-00000000-00000001-00101100 ->300(b)
//	// c为char类型，只占用一个字节
//	// c = 00101100 -> 44(b)
//
//
//	printf("%d, %d", a + b, c);// 300，44
//	// %d a + b
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// 00000000-00000000-00000001-00101100 ->300(b) <- a+b(%d)
//	// 
//	// 00000000-00000000-00000000-00101100 ->300(b) <- c(%d) - 整型提升
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	// 存到大端字节序的内存中是：00 00 12 34
//
//	unsigned char b = *(unsigned char*)&a;
//	// b 得到的是 00，char只能访问一个字节
//
//	printf("%d\n", b);
//	// 32大端端下的结果为0(b) = 00(0x)
//	// 64小端下的结果为52(b) = 34(0x)
//	
//	return 0;
//}
////在32位大端模式下处理器上变量b等于（） 


//// 打印杨辉三角
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("要打印几行？\n>:");
//	scanf("%d", &n);
//	int arr[13][13] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j <n; j++) 
//		{
//			if (j == 0) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) 
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	// 打印
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
///*
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1 5 10 10 5 1
//*/


//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) 
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) 
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}




/*
题目名称:
猜名次
题目内容：
5位运动员参加了10米台跳水比赛,有人让他们预则比赛结果:

A选手说: B第二, 我第三;
B选手说: 我第二, E第四;
C选手说: 我第一，D第二
D选手说: C最后, 我第三;
E选手说: 我第四, A第一;

比赛结束后,每位选手都说对了一半, 请编程确定比赛的名次。
*/

//


///*
//题目内容：
//实现一个函数,可以左旋字符串中的k个字符。
//例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//*/
//
//#include <stdio.h>
//#include <assert.h>
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
//// 左旋，实际上就是把第一个字符与后面的字符一次交换到最后一个
//// k等于几，就左旋几次
//
//// 1,暴力求解法
//void zuoxuan1(char* str, int k, int len) 
//{
//	assert(str != NULL);
//	// 自己写的
//	//char* left = str;//左
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < k; i++) 
//	//{
//	//	left = str;
//	//	for (j = 0; j < len-1; j++) 
//	//	{
//	//		char map = *left;
//	//		*left = *(left + 1);
//	//		*(left + 1) = map;
//	//		left++;
//	//	}
//	//}
//
//	// 老师写的
//	int i = 0;
//	for (i = 0; i < k; i++) 
//	{
//		// 左旋一个字符
//		// 1
//		char tmp = *str;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++) 
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		// 3
//		*(str+ len - 1) = tmp;
//	}
//}
//
////2，三步翻转法
//// abcdef
//// bafedc
//// cdefab
//
//void reverse(char* left, char* right) 
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char map = *left;
//		*left = *right;
//		*right = map;
//		left++;
//		right--;
//	}
//}
//
//void zuoxuan2(char* str, int k, int len) 
//{
//	assert(str != NULL);
//	assert(k <= len);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len -1);
//	reverse(str, str + len - 1);
//}
//
//
//
//int main()
//{
//	char str[] = "abcdef";
//	int k = 0;
//	printf("输入左旋字符>: ");
//	scanf("%d", &k);
//
//	int len = my_strlen(str);
//	
//	zuoxuan2(str, k, len);
//	
//	printf("%s\n", str);
//
//	return 0;
//}


///*
//题目名称:
//字符串旋转结果
//题目内容;
//写—个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串.
//例如:给定s1 = AABCD和s2 =BCDAA,返回1
//给定s1 = abcd和s2 = ACBD，返回0
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//*/
//
// 方法一
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char map = *left;
//		*left = *right;
//		*right = map;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k, int len)
//{
//	assert(str != NULL);
//	assert(k <= len);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len -1);
//	reverse(str, str + len - 1);
//}
//
//int is_left_move(char* s1, char* s2) 
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++) 
//	{
//		left_move(s1, 1, len);
//		// 每次左旋之后的结果再左选1，不能写i
//		int ret = strcmp(s1, s2);
//		if (ret == 0) 
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) 
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}


//// 方法二
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//
//// arr1: abcdef
//// arr11: abcdefabcdef
//// arr11中包含了所有arr1翻转后的结果
//// 如果arr2属于arr11，那么arr2就是由arr1翻转得来的
//
//int is_left_move(char* str1, char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) 
//	{
//		return 0;
//	}
//	// 是个坑
//
//	// 1, 在str1字符串中追加一个str1字符串
//	
//	// strcat
//		// strcat(str1,str2),将str2追加到str1上
//		// strcat("abc", "bcd") -> "abcdef"
//		// 注意不能用于自己给自己追加，会报错，
//		// 原因是首元素把末尾元素'\0'覆盖了，早不到终止符'\0'，一直找下去就报错了
//	// stract(str1,str1)//报错
//		
//	// strnact
//		// strncat(str1,str2,str2_len),将str2的len长度的字符追加到str1上
//		// strncat("abc", "bcd", 2) -> "abcde"
//		// 可以用于自己给自己追加，不会报错，但要注意输入要追加的长度
//		// 
//	strncat(str1, str1, len1);
//
//	// 2，判断str2指向的字符串是否是str1指向的字符串的子串
//	// strstr()-找子串
//		// strstr(str1, str2), 在str1中找有没有str2这个字符串 
//		// 返回类型为指针，
//			// 找到了返回str1中的str2位置的指针
//			// 没找到返回空指针
//	char* ret = strstr(str1, str2);
//	if (ret != NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}



/*
题目名称:
杨氏矩阵
题目内容:
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
请编写程序在这样的矩阵中查找某个数字是否存在
要求:时间复杂度小于O(N) - 不能一行一行的遍历数组
去哪儿网
*/

// 1 2 3
// 4 5 6 
// 7 8 9

// 1 2 3
// 4 5 6
// 7 8 9

//#include <stdio.h>
//
////int FindNum(int arr[3][3], int k, int row, int col)
////{
////	int x = 0;
////	int y = col-1;
////	
////	// 自己
////	//for (x = 0; x < row; x++) 
////	//{
////	//	if (k < arr[x][y])
////	//	{
////	//		for (y = 0; y < col; y++) 
////	//		{
////	//			if (k == arr[x][y]) 
////	//			{
////	//				return 1;
////	//			}
////	//		}
////	//	}
////	//}
////	//return 0;
////	
////	// 老师
////	while (x <= row - 1 && y >= 0) 
////	{
////		if (arr[x][y] > k) 
////		{
////			y--;
////		}
////		else if (arr[x][y] < k) 
////		{
////			x++;
////		}
////		else
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//// 先从函数改变外面的值，可以传地址
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py-1;
//
//	while (x <= *px - 1 && y >= 0) 
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k) 
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	// 判断k在不在这一列数中
//	// 
//	// 方法一：
//	// 用k和每一行的最后一个元素比较，小于k就下一行，大于k就在这一行找有没有k
//	// 用k和每一行的第一个元素比较，大于于k就上一行，小于k就在这一行找有没有k
//	int k = 7;
//
//	// 返回型参数，从函数回来时可以带回一些值
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d, %d", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


// strlen
//// 字符串和内存函数的介绍
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strlen(const char* str) 
//{
//	int count=0;
//	assert(str != NULL);
//	while (*str != '\0') // while(*str) 
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len1 = strlen("abcdef");
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int len2 = strlen(arr);
//	int len3 = my_strlen("abcdef");
//
//
//	printf("%d\n", len1);// 6
//	printf("%d\n", len2);// 随机值，'f'后第多少位为'\0'未定
//	printf("%d\n", len3);
//
//	
//	printf("====================\n");
//
//	// 坑，strlen的返回值类型为size_t: unsigned int,无符号的整型
//	// 3 - 6 = (unsigned int)-3 >0
//
//	if (strlen("abc") - strlen("abcdef") > 0) 
//	{
//		printf("awsl\n");
//	}
//	else
//	{
//		printf("nmsl\n");
//	}
//	return 0;
//}


//// strcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* str1, const char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* ret = str1;
//
//	//while (*str2 != '\0')
//	//{
//	//	/**str1 = *str2;
//	//	str1++;
//	//	str2++;*/
//	//	*str1++ = *str2++;
//	//}
//	//*str1 = *str2;
//
//	// 拷贝str2指向的字符串到str1指向的空间,包含'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//
//	// 返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "helloyumo";
//	// 错误示范
//	// char *p = "abcdef";// 常量字符串不可更改
//
//	char arr2[] = "world!";
//	// 错误示范
//	// char arr2[] = { 'a', 'b', 'c' }// 没有字符串结束符'\0'
//
//	//strcpy(arr1, arr2);
//	//// strcpy拷贝时会带着'\0'一起拷贝过去
//	//printf("%s\n", arr1);
//
//	printf("=============\n");
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


// strcat
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	// 指针不能为NULL
//
//	char* ret = str1;
//	// 记录目的空间的起始地址
//	
//	// 找str中'\0'的位置
//	while (*str1) 
//	{
//		str1++;
//	}
//	
//	// 将str2中的字符从str1的'\0'(覆盖str1的'\0')
//	// 开始拷贝,直到到'\0'（包括str2的'\0'）
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	
//	// 返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world!";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//// strcmp
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int my_strcmp(char* str1, char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	// 自己 有问题，abc和abcd比大小有问题
//	//while (*str1 != '\0')
//	//{
//	//	int ret = *str1++ - *str2++;
//	//	if (ret != 0) 
//	//	{
//	//		return ret;
//	//	}
//	//}
//	//return 0;
//
//	// 老师
//	while (*str1 == *str2) // 比较
//	{
//		if (*str1 == '\0') 
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	// 返回-1，1
//	if (*str1 > *str2) 
//	{
//		return 1;
//	}
//	else if (*str1 < *str2) 
//	{
//		return -1;
//	}
//
//	// 返回他们的差值
//	//return *str1 - *str2;
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	// strcmp 比较的其实是字符串中首个字符的ASCII码值
//	// 如果首个字符相等就比较第二个，直到'\0'
//
//	if ( ret == 0) 
//	{
//		printf("p1 == p2\n");
//	}
//	else if ( ret > 0) 
//	{
//		printf("p1 > p2\n");
//	}
//	else 
//	{
//		printf("p1 < p2\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "Hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[10] = "abcdeft";
//	char arr2[] = "yumo";
//
//	strncpy(arr1, arr2, 4);
//	// 要拷贝4个字节，arr2只有4个字节，不会拷贝'\0'
//
//	strncpy(arr1, arr2, 6);
//	// 要拷贝6个字节，但arr2只有4个字节，剩下的补'\0'
//
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[30] = "hello_\0xxxxxxxxxxxx";
	char arr2[] = "world!";

	strncat(arr1, arr2, 10); // hello__wor
	// strncat在追加完字符串后会主动放一个'\0'到目的字符串中

	printf("%s", arr1);
}