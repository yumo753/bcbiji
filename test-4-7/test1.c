#define _CRT_SECURE_NO_WARNINGS 1


//// malloc �� free
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	// ���ڴ������������޵Ŀռ䣬�޷����뵽
//	//int* p =  (int*)malloc(INT_MAX + 1);
//	// INT_MAX-C���������͵����ޣ�malloc�޷����뵽��ô��Ŀռ䣬�᷵��NULL
//
//	// ���ڴ�����10�����͵Ŀռ�
//	int* p =  (int*)malloc(10 * sizeof(int));
//	// malloc�ķ���ֵ������һ�������͵����ͣ��ڽ���ʱӦ��ʹ��ǿ������ת��
//	// ���ڴ���û���㹻�Ŀռ�ʱ��malloc�᷵�ؿ�ָ�룺NULL
//	if (p == NULL) 
//	{
//		// ��ӡ����ԭ��
//		printf("%s\n", strerror(errno)); // Not enough space - û���㹻�Ŀռ�
//	}
//	else 
//	{
//		// ����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++) 
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	// ����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	// Ӧ�ù黹������ϵͳ
//	free(p);
//	// ��ʱ�ڴ�ռ䱻�ͷţ���p��Ȼָ������ռ�ĵ�ַ��p��ʱΪҰָ��
//	p = NULL;
//	// �ɽ�p��Ϊ��ָ��
//	return 0;
//}


// // calloc
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	// ���ڴ�����10�����͵Ŀռ�(40bit)���������ǳ�ʼ��Ϊ0
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++) 
//		{
//			*( p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//	// �ͷſռ�
//	// free�����������ͷŶ�̬���ٵĿռ�
//	free(p);
//	return 0;
//}


//// realloc
//// ������̬���ٿռ�Ĵ�С
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)malloc(20);
//
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++) 
//		{
//			*( p + i) = i;
//		}
//	}
//	// ��ʱ����ʹ�õ�ֻ��malloc���ٵ�20���ֽڵĿռ�
//	// ����һЩԭ��������Ҫ����Ŀռ䣬����������Ҫ40���ֽ�
//	// ����ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	 //realloc׷���ڴ�����ַ�ʽ��
//	 //��̬�ڴ汻�����ڴ��еĶ�������������һЩ�ѱ�������ڴ��δ��������ڴ棬δ���ɵ��ڴ�ͨ���������ѷ���֮��
//	 //��realloc�����ڸ�p׷���ڴ�ʱ��
//		//	��׷�ӵ�����δ����p�����δ���ɵ��ڴ��С��
//		//		�򽫾ͽ�p�����δ���ɵ��ڴ�׷�Ӹ�p
//		//	��׷�ӵ����ݳ���p�����δ���ɵ��ڴ��С��
//		//		���ڶ������¿���һ������p��С�Ŀռ��p������p֮ǰ�ɿռ�����ݿ������µĿռ䣬�ͷžɵĿռ�
//	 //
//	 //realloc������ʹ��ע�����
//		//	1�����pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//		//	2�����pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//		//		����һ�������ڴ�����Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//		//	3����׷�ӵ������㹻��realloc�᷵��NULL������һ���µı���������realloc�����ķ���ֵ
//	//
//
//
//	//int* ptr = realloc(p, INT_MAX+1); // �������Χ
//
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL) 
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else 
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	// �ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 1,��ָ�������
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40); 
//	// ��һmallocʧ�ܣ�p�ͱ���ֵδNULL
//	*p = 0; // err
//
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		*(p + i) = i; //err
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//// 2���Զ�̬���ٿռ��Խ�����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)(malloc(5 * sizeof(int)));
//	if (p == NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		// ���ٵĿռ�ֻ��20bit��ѭ����ֵ��Ҫ40bit,Խ�����
//		for (i = 0; i < 10; i++) 
//		{
//			*(p + i) = i;
//		}
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


// �ԷǶ�̬���ٿռ�ʹ��free�ͷ�
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int* p = &a;

	// �ԷǶ�̬���ٿռ�ʹ��free�ͷ�
	free(a);// err
	return 0;
}