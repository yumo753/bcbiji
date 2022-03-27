#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


// Debug 和 Release 的区别
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (i = 0; i <= 12; i++)
//    {
//        printf("awsl\n");
//        arr[i] = 0;
//    }
//    return 0;
//}

//// 查看临时变量的值
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) 
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//// 案例一
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int sum = 0; // 保存最终结果
//    int n = 0;
//    int ret = 1; // 保存N的阶乘
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        // ret = 1;  // 应该在这里将ret归1
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j; // 错误点，ret在j循环结束后，应该归1
//                     // 这导致在计算 n! 时，算的结果其实是时 1! * 2! *...*n!
//                     // 比如计算 3! 时，算的结果其实是时 1! * 2! * 3!
//                     // 不符合程序本意
//        }
//        sum += ret;
//    }
//    printf("%d\n", sum);
//}


//// 案例二
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* arr1[10] = { &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]};
//    for (i = 0; i <= 12; i++) // 循环赋值的次数大于数组中元素的个数，
//                              // 当给一个不存在的元素负值时便引发了错误
//    {
//     printf("awsl\n");
//     arr[i] = 0;
//    }
//    //if (&i == arr - sizeof(arr)/sizeof(arr[0]) + 1)
//    //{
//    //    printf("y\n");
//    //}
//    system("pause");
//    return 0;
//}



//#include <stdio.h>

// 原始版
//void my_strcop(char* str1, char* str2)
//{
//    while (*str2 != '\0')
//    {
//        *str1 = *str2;
//        str1++;
//        str2++;
//    }
//    *str1 = *str2;
//    // 此时str2 == '\0',这一步实际上是在拷贝'\0'
//    //*str1++ = '\0';
//}

//优化版,缺点：发现了问题，但没有找出问题，不行
//void my_strcop(char* str1, char* str2)
//{
//    if (str1 != NULL && str2 != NULL) // 但变量为指针时应该先判断是否为空指针
//    {
//        while (*str1++ = *str2++)
//        {
//            ;// 我无话可说，NB
//        }
//    }
//}

//// 优优化版
//#include <assert.h>
//void my_strcop(char* str1, char* str2)
//{
//    assert(str1 != NULL);//断言，发现问题并抛出问题
//    assert(str2 != NULL);//断言，发现问题并抛出问题
//    while (*str1++ = *str2++)
//    {
//        ;// 我无话可说，NB
//    }
//}
//int main()
//{
//    char arr1[] = "QWERTYY00";
//    char arr2[] = "yumo753";
//    printf("%s\n", arr1); 
//    printf("%s\n", arr2);
//    my_strcop(arr1, arr2);
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    return 0;
//}



// 对于const修饰的变量，可以通过指针来改变变量的值
//#include <stdio.h>
//int main()
//{
//    const int num = 10;
//    int* p = &num;
//    *p = 20;
//    printf("%d\n", num);
//    return 0;
//}


// // 对于const修饰的变量，可以通过指针来改变变量的值
//// 用const 修饰指针，固定指针，使他不能改变，两种写法
//#include <stdio.h>
//int main()
//{
//    const int num = 10;
//    const int* p = &num;
//    *p = 20;
//    printf("%d\n", num);
//    return 0;
//}


// // 对于const修饰的变量，可以通过指针来改变变量的值
//// 用const 修饰指针，固定指针，使他不能改变，两种写法
//
//#include <stdio.h>
//int main()
//{ 
//    const int num = 10;
//    int n = 100;
//    int* const p = &num;
//    *p = 20;
//    p = &n;// 报错
//    printf("%d\n", num);
//    return 0;
//}


//// 优优优化版
//#include <stdio.h>
//#include <assert.h>
//void my_strcop(char* str1, const char* str2)
//{
//    assert(str1 != NULL);//断言，发现问题并抛出问题
//    assert(str2 != NULL);//断言，发现问题并抛出问题
//    while (*str1++ = *str2++)
//    {
//        ;// 我无话可说，NB
//    }
//}
//int main()
//{
//    char arr1[] = "QWERTYY00";
//    char arr2[] = "yumo753";
//    printf("%s\n", arr1); 
//    printf("%s\n", arr2);
//    my_strcop(arr1, arr2);
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    return 0;
//}



//// 优优优优化版
//#include <stdio.h>
//#include <assert.h>
//// 返回类型为char* 是为了能够作为其他函数的参数调用，实现链式访问
//char* my_strcop(char* str1, const char* str2) 
//                            // str2 * 左边加const目的是锁住*str2，避免将str1的值赋给了str2
//
//{
//    char* ret = str1;
//    assert(str1 != NULL);//断言，发现指针变量str1为NULL时抛出问题
//    assert(str2 != NULL);//断言，发现指针变量str1为NULL时抛出问题
//    while (*str1++ = *str2++) 
//        // 把str2指向的字符串拷贝到str1指向的字符串，包含'\0'字符
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[] = "QWERTYY00";
//    char arr2[] = "yumo753";
//    printf("前：\n");
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("后：\n");
//    printf("%s\n", my_strcop(arr1, arr2));
//    printf("%s\n", arr2);
//    return 0;
//}


#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
    int count = 0;
    assert(str != NULL);
    while (*str != '\0') // 注意不要忘记*
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "aadasddaa";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}


