#define _CRT_SECURE_NO_WARNINGS 1

//// 4��ʹ��free�ͷ�һ�鶯̬���ٿռ��һ����
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) 
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		*p++ = i;
//		// ����p++��ԭ��p��ʱָ���˿ռ���м�
//		// ʹ��free�ͷŵ�ֻ��һ�鶯̬���ٿռ��һ����
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 5����һ�鶯̬�ڴ�Ķ���ͷ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) 
//	{
//		return 0;
//	}
//
//	free(p);
//	// ...
//	// ����������ڶ�̬�ڴ��ͷź󣬽�ָ���ֵ��ֵΪNULL
//	//p = NULL;
//	free(p);// err
//	// ��һ�鶯̬�ڴ�Ķ���ͷ�
//}


//// 6����̬�����ڴ������ͷţ��ڴ�й©��
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//int main()
//{
//	while (1) 
//	{
//		malloc(INT_MAX);
//		Sleep(1000);
//	}
//	return 0;
//}


//// 1����
//#include <stdio.h>
// #include <stdlib.h>
//#include <string.h>
//
//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// ����1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void
//GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// ����2
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world\n");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//// 2����
//#include <stdio.h>
//
//char* GetMemory(void) 
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//// 2�����ĳ�
//#include <stdio.h>
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");// hello
//
//	printf(str);
//	// �����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//	// �ͷ��ڴ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


////4,��
//#include <stdio.h>
//#include <stdlib.h>
//
//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL) 
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
////// �ṹ���е���������
////struct S 
////{
////	int n;
////	int arr[10];
////};
//
//// �ṹ���е���������
//struct S 
//{
//	int n;
//
//	// ����д����������һ��֧�ֵڶ���
//
//	// ��һ��
//	//int arr[]; //error���󲿷ֱ�������֧�ִ�д��
//
//	// �ڶ���
//	int arr[0];// ���ֱ�������֧�ִ�д��
//	// δ֪��С-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d", sizeof(s)); // 4byte, δ��������arr[0]�Ĵ�С
//
//	// ��ʼ����������
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	// sizeof(struct S) - δ��������arr[0]�Ľṹ��Ĵ�С
//	// 5 * sizeof(int) - ��Ҫ��������������arr[0]�Ĵ�С
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		ps->arr[i] = i;
//	}
//
//	// �ı���������Ĵ�С
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL) 
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++) 
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// �ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct S 
//{
//	int a;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// ������С
//	printf("\n������С\n");
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL) 
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// �ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//71P-76P������ר�����������ļ�����
