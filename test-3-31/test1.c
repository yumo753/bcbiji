#define _CRT_SECURE_NO_WARNINGS 1

// ����ָ������
// ������
//#include <stdio.h>
//
//void print() 
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y) 
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do 
//	{
//		print();
//		printf("��ѡ��\n>:");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			printf("��������������(�ո����)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("��������������(�ո����)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������������(�ո����)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("��������������(�ո����)\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("��������\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//// ����ӷ�׸��� 


//// �Ľ�(�Լ�д��)
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int (*parr[4])(int, int) = { &Add, &Sub, &Mul, &Div };
//
//void calculate(int i) 
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������(�ո����)\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*parr[i - 1])(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		print();
//		printf("��ѡ��\n>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calculate(input);
//			break;
//		case 2:
//			calculate(input);
//			break;
//		case 3:
//			calculate(input);
//			break;
//		case 4:
//			calculate(input);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("��������\n");
//		}
//	} while (input);
//
//	return 0;
//}


//// �Ľ�(��ʦд��)
// // �Ľ�(��ʦд��)
// ʹ��if-else�滻��switch����
// �����˺���ָ�����飬δ���������������ɱ������Լ��㣬
// 	// ���������������ʱ�Ķ�С��ֻ��������㺯�����Ĳ˵����͵�һ���ж���伴��
// ��������λ����һ��0��ʹ�����±���˵�ѡ���һ��
// ���ò˵�ѡ����Ϊ������±�����ֵ - i
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0, &Add, &Sub, &Mul, &Div };
//	do
//	{
//		print();
//		printf("��ѡ��\n>:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) 
//		{
//			printf("����������������(�ո����)\n:>");
//			scanf("%d %d", &x, &y);
//			int ret = (*pfArr[input])(x, y);
//			printf("%d\n", ret);
//
//			//printf("%d\n", (*pfArr[input])(x, y));
//		}
//		else if (input == 0) 
//		{
//			printf("�˳�\n");
//		}
//		else 
//		{
//			printf("ѡ������\n");
//		}
//	} while (input);
//	return 0;
//}



// �ص�����Cala()
// �ص������Ĳ�������Ϊ����ָ��
// ����ָ������ -> int (*___)(int, int)
//#include <stdio.h>
//
//void print()
//{
//	printf("********************************\n");
//	printf("****    1.Add      2.sub    ****\n");
//	printf("****    3.Mul      4.Div    ****\n");
//	printf("****         0.exit         ****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void Calc(int (* pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������(�ո����)\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		print();
//		printf("��ѡ��\n>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ������\n");
//		}
//	} while (input);
//	return 0;
//}

// �ص�����
//// ��ӡ�ַ�����ʾ
//#include <stdio.h>
//
//void print(char* str)
//{
//
//    printf("Hello %s\n", str);
//}
//
//void test(void (*f)(char*))
//{
//    printf("test()\n");
//    f("world");
//}
//
//int main()
//{
//    test(print);
//    return 0;
//}

//// ð������//ֻ���ж����ͣ������жϸ��������飬�ṹ������
//#include <stdio.h>
//
//void paixv(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int count = 0;// �ж���һ���к����Ƿ����ð������
//		for (j = 0; j < sz - i - 1; j++) 
//		{
//			if (arr[j] > arr[j+1]) 
//			{
//				int pum = arr[j+1];
//				 arr[j+1] = arr[j];
//				 arr[j] = pum;
//				 count = 1;
//			}
//		}
//		if (count == 0) 
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 7, 3, 9, 22, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// qsort��⣬ʹ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// �������ͱȽ�
int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
    // ��e1���ʹ�void* ǿ������ת��Ϊint* Ȼ�������
}

void test1()
{
    int arr[] = { 0, 11, 7, 3, 9, 22, 10, 13, 21, 9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}


// ���������ͱȽ�
int cmp_float(const void* e1, const void* e2)
{
    //if (*(float*)e1 > *(float*)e2) 
    //{
    //    return 1;
    //}
    //else if (*(float*)e1 < *(float*)e2)
    //{
    //    return -1;
    //}
    //else if (*(float*)e1 == *(float*)e2)
    //{
    //    return 0;
    //}
    return ((int)(*(float*)e1 - *(float*)e2));
    // ��e1���ʹ�void* ǿ������ת��Ϊfloat* Ȼ�������

}

void test2()
{
    float arr[] = { 2.0, 11.2, 7.3, 3.5, 9.7, 22.2, 10.9, 13.3, 21.2, 9.1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_float);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%.2f ", arr[i]);
    }
}


// �ṹ�����ͱȽ�
struct Stu
{
    char name[30];
    int age;
};

// �Ƚ���������
int cmp_stu_by_age(const void* e1, const void* e2) 
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

// �Ƚ������ַ���
// �ַ����ıȽϲ�����><=��Ӧ����strcmp����
    // strcmp() ����� ASCII �������αȽ� str1 �� str2 ��ÿһ���ַ���ֱ�����ֲ������ַ������ߵ����ַ���ĩβ������\0��
    // ����ֵ��
    // �������ֵ < 0�����ʾ str1 С�� str2��
    // �������ֵ > 0�����ʾ str2 С�� str1��
    // �������ֵ = 0�����ʾ str1 ���� str2��

int cmp_stu_by_name(const void* e1, const void* e2)
{
    return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name );
}

void test3()
{
    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 10}, {"wangma", 30} };
    int sz = sizeof(s) / sizeof(s[0]);
    //qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);// ����age����
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name); // ����name����
}


int main()
{
    //test1();
    //printf("\n");
    //test2();
    //printf("\n");
    test3();
    printf("\n");
    return 0;
}