//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	// 00000000-00000000-00000000-00000011 // 3(int)
//	// 00000011 // 3(char)  - ��3(int)�ضϷ���char���͵�a��
//
//	char b = 127;
//	// 00000000-00000000-00000000-01111111 // 127(int)
//	// 01111111 // 127(char)  - ��127(int)�ضϷ���char���͵�a��
//	
//	// a �� b�������ӵ�
//	// cpu�ڽ��������ʱ����char����Ϊint
//	// ���������ǰ��ձ������������͵ķ���λ�������ģ�������0��������1��
//	// 00000000-00000000-00000000-00000011 // 3(int)
//	// 00000000-00000000-00000000-01111111 // 127(int)
//	// 3(int) + 127(int) =
//	// 00000000-00000000-00000000-10000010 // 130(int) 
//	//		ע������ǲ���
//
//	char c = a + b;
//	// 00000000-00000000-00000000-10000010 // 130(int)
//	// 10000010 // ��130(int)�ضϷ���char���͵�a��
//	// ����c���ŵ��� 10000010 - ע������ǲ���
//
//	printf("c�� %d", c); // -126; 
//	// ����printf��Ĳ�����%d����ӡ��������
//	// �� c(char) ����Ϊ����
//	// 11111111-11111111-11111111-10000010  - ���� 
//	// 11111111-11111111-11111111-10000001  - ���� <- ����-1
//	// 10000000-00000000-00000000-01111110  - ԭ�� <- ����ȡ����λ����λ���䣬����λȡ��
//	// 10000000-00000000-00000000-01111110  - -126(int)
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 0xb6; // 0x - ����16���� char - 1���ֽ�
//	// 0xb6 --> 10110011(2)
//
//	short b = 0xb600; // short - 2���ֽ�
//	// 0xb600 --> 10110011-00000000(2)
//
//	int c = 0xb6000000; // int - 4���ֽ�
//	// 0xb6000000 --> 10110011-00000000-00000000-00000000(2)
//
//	if (a == 0xb6) // ������������1
//	{
//		printf("a\n");// �����
//	}
//
//	if (b == 0xb600) // ������������1
//	{
//		printf("b\n");// �������
//	}
//
//	if (c == 0xb6000000)// ����������������c�������int����
//	{
//		printf("c\n");// �����
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0;
//	printf("sizeof(a): %u(�޷���)\n", sizeof(a)); // 1
//
//	printf("sizeof(+a): %u(�޷���)\n", sizeof(+a)); // 4 
//	// +a - ���������㣬һ�����������㣬�������������
//	
//	printf("sizeof(!a): %u(�޷���)\n", sizeof(!a)); // 4
//	// !a - ��û�н�������
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 10;
//    
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}

//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer); // 0
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret: %d\n", ret);
//    printf("i: %d\n", i);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//printf("sizeof(char*)��%d\n", sizeof(char*)); // 8
//	//printf("sizeof(int*)��%d\n", sizeof(int*)); // 8
//	//printf("sizeof(double*)��%d\n", sizeof(double*)); // 8
//	int a = 0x11223344;
//
//	//// char
//	//char* cp = &a;
//	//*cp = 0;
//
//	//// int
//	//int* ip = &a;
//	//*ip = 0;
//
//	// double 
//	double* dp = &a;
//	*dp = 0;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x1122334455667788;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("pa: %p\n", pa);
//	printf("pa+1: %p\n", pa+1);// ����+1��ʵ��+4�� 4Ϊint�������ڴ�����ռ�ֽڴ�С
//
//	printf("pc: %p\n", pc);
//	printf("pc+1: %p\n", pc+1);// ����+1��ʵ��+1�� 1Ϊchar�������ڴ�����ռ�ֽڴ�С
//
//	return 0;
//}


//// ����ָ��Ĳ�����������
//// ע��ָ���������Ҫ��Ԫ�������һ��
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	//int* p = arr; // ������ - ��Ԫ�صĵ�ַ
//	char* p = arr;
//	int i = 0;
//	for��i = 0; i < 10; i++ ��
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int *p; //�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//    *p = 20;
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	// ��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ,p����Ұָ��
//	return 0;
//}

#include <stdio.h>

int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	// pָ����ڴ�ռ����ͷ�
	return 0;
}