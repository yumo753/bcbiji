//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2) // if else���
//	{
//		printf("%d\n", num1);
//	}
//	else 
//	{
//		printf("%d\n", num2);
//	}
//	printf("��Ŀ�����:%d\n", (num1 > num2) ? num1 : num2);
//	// ��Ŀ�����
//	// (a > b ) ? a : b;
//	// ��a > b ����ʱ�����ʽ��ֵΪa
//	// ��a > b ������ʱ�����ʽ��ֵΪb
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
//	a[4]; // [] - �±����ò�����
//
//	int x = 10;
//	int y = 20;
//	int sum = Add(x, y); // () -�������ò�����
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int num1 = 20; // ����һ���޷��ŵı���
//	// unsigned int - �������̫���ˣ�
//	// ����ʹ��typedef�����Զ���һ�����ƣ�
//	// ע�⣬�Զ�������ֻ�ڵ�ǰmain()����Ч
//	typedef unsigned int u_int;
//	u_int num2 = 32;
//	// �����������С����С��������� typedef
//	return 0;
//}


//#include <stdio.h>
////static ���ξֲ�����
//// �ֲ��������������ڱ߳�
//// 
//
//int test() {
//	//int a = 1; // ��̬�ֲ�����
//	static int a = 1; // ��̬�ֲ�����
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

//static ����ȫ�ֱ���
// �ı��˱����������� - 
// �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// ����Դ�ļ���û��ʹ����

//#include<stdio.h>
//int main() 
//{
//	// extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	return 0;
//}

//#include<stdio.h>
////static���κ���
//// Ҳ�Ǹı��˺�����������-��׼ȷ
//// static��ʵ�����ı��˺�������������
//// �� �ⲿ�������� --> �ڲ���������
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
//// #define �����ʶ������
//// #define MAX 100
//// #define ���Զ����-������
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
//	// ����
//	max1 = Max(a, b);
//	printf("Max: %d\n", max1);
//
//	// ��
//	max2 = MAX(a, b);
//	printf("MAX: %d\n", max2);
//
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int a = 10;
//	// &a //ȡ��ַ������(��%p���)
//	printf("&a: %p\n", &a); // 000000FCDCD9F6A4
//
//	int* p = &a;// ȡa�ĵ�ַ��Ÿ�����p
//	// C�����д�ŵ�ַ�ı�������Ϊָ�������
//	// ָ������� int* ������
//	printf("p:  %p\n", p);
//
//	//*p // * - �����ò�����
//	// ��p���н����ò������ҵ�pָ��Ķ���a
//	*p = 20;
//	printf("%d\n", a);// a��ֵ��10�����20
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
