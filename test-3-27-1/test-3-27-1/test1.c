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


// Debug �� Release ������
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

//// �鿴��ʱ������ֵ
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

//// ����һ
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int sum = 0; // �������ս��
//    int n = 0;
//    int ret = 1; // ����N�Ľ׳�
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        // ret = 1;  // Ӧ�������ｫret��1
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j; // ����㣬ret��jѭ��������Ӧ�ù�1
//                     // �⵼���ڼ��� n! ʱ����Ľ����ʵ��ʱ 1! * 2! *...*n!
//                     // ������� 3! ʱ����Ľ����ʵ��ʱ 1! * 2! * 3!
//                     // �����ϳ�����
//        }
//        sum += ret;
//    }
//    printf("%d\n", sum);
//}


//// ������
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* arr1[10] = { &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]};
//    for (i = 0; i <= 12; i++) // ѭ����ֵ�Ĵ�������������Ԫ�صĸ�����
//                              // ����һ�������ڵ�Ԫ�ظ�ֵʱ�������˴���
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

// ԭʼ��
//void my_strcop(char* str1, char* str2)
//{
//    while (*str2 != '\0')
//    {
//        *str1 = *str2;
//        str1++;
//        str2++;
//    }
//    *str1 = *str2;
//    // ��ʱstr2 == '\0',��һ��ʵ�������ڿ���'\0'
//    //*str1++ = '\0';
//}

//�Ż���,ȱ�㣺���������⣬��û���ҳ����⣬����
//void my_strcop(char* str1, char* str2)
//{
//    if (str1 != NULL && str2 != NULL) // ������Ϊָ��ʱӦ�����ж��Ƿ�Ϊ��ָ��
//    {
//        while (*str1++ = *str2++)
//        {
//            ;// ���޻���˵��NB
//        }
//    }
//}

//// ���Ż���
//#include <assert.h>
//void my_strcop(char* str1, char* str2)
//{
//    assert(str1 != NULL);//���ԣ��������Ⲣ�׳�����
//    assert(str2 != NULL);//���ԣ��������Ⲣ�׳�����
//    while (*str1++ = *str2++)
//    {
//        ;// ���޻���˵��NB
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



// ����const���εı���������ͨ��ָ�����ı������ֵ
//#include <stdio.h>
//int main()
//{
//    const int num = 10;
//    int* p = &num;
//    *p = 20;
//    printf("%d\n", num);
//    return 0;
//}


// // ����const���εı���������ͨ��ָ�����ı������ֵ
//// ��const ����ָ�룬�̶�ָ�룬ʹ�����ܸı䣬����д��
//#include <stdio.h>
//int main()
//{
//    const int num = 10;
//    const int* p = &num;
//    *p = 20;
//    printf("%d\n", num);
//    return 0;
//}


// // ����const���εı���������ͨ��ָ�����ı������ֵ
//// ��const ����ָ�룬�̶�ָ�룬ʹ�����ܸı䣬����д��
//
//#include <stdio.h>
//int main()
//{ 
//    const int num = 10;
//    int n = 100;
//    int* const p = &num;
//    *p = 20;
//    p = &n;// ����
//    printf("%d\n", num);
//    return 0;
//}


//// �����Ż���
//#include <stdio.h>
//#include <assert.h>
//void my_strcop(char* str1, const char* str2)
//{
//    assert(str1 != NULL);//���ԣ��������Ⲣ�׳�����
//    assert(str2 != NULL);//���ԣ��������Ⲣ�׳�����
//    while (*str1++ = *str2++)
//    {
//        ;// ���޻���˵��NB
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



//// �������Ż���
//#include <stdio.h>
//#include <assert.h>
//// ��������Ϊchar* ��Ϊ���ܹ���Ϊ���������Ĳ������ã�ʵ����ʽ����
//char* my_strcop(char* str1, const char* str2) 
//                            // str2 * ��߼�constĿ������ס*str2�����⽫str1��ֵ������str2
//
//{
//    char* ret = str1;
//    assert(str1 != NULL);//���ԣ�����ָ�����str1ΪNULLʱ�׳�����
//    assert(str2 != NULL);//���ԣ�����ָ�����str1ΪNULLʱ�׳�����
//    while (*str1++ = *str2++) 
//        // ��str2ָ����ַ���������str1ָ����ַ���������'\0'�ַ�
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[] = "QWERTYY00";
//    char arr2[] = "yumo753";
//    printf("ǰ��\n");
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("��\n");
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
    while (*str != '\0') // ע�ⲻҪ����*
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


