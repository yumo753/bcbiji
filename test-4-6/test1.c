#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//struct S 
//{
//	char c;
//	int a;
//	double d;
//};
//
//// ��ֵ
//void Init1(struct S tmp) 
//{
//	tmp.c = 'w';
//	tmp.a = 12;
//	tmp.d = 3.14;
//}
//
//// ��ַ
//void Init2(struct S* tmp)
//{
//	tmp->c = 'w';
//	tmp->a = 12;
//	tmp->d = 3.14;
//}
//
//// ��ֵ
//void print1(struct S tmp) 
//{
//	printf("%c, %d, %lf\n", tmp.c, tmp.a, tmp.d);
//}
//
//// ��ַ
//void print2(struct S* tmp)
//{
//	printf("%c, %d, %lf\n", tmp->c, tmp->a, tmp->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init1(s);
//	// ���ú����Խṹ���ʼ��ʱ������Ӧ��ʱ�ṹ������ĵ�ַ�������ǽṹ�������
//	Init2(&s);
//
//	print1(s);
//	print2(&s);
//	return 0;
//}


//#include <stdio.h>
//
//// λ�� - λ��������λ
//
//struct S // S��һ��λ������
//{
//	int a : 2; // ��һ��������˼�ǣ�aֻ��Ҫ2��bit
//	int b : 5; // ��һ��������˼�ǣ�bֻ��Ҫ5��bit
//	int c : 10; // ��һ��������˼�ǣ�cֻ��Ҫ10��bit
//	int d : 30; // ��һ��������˼�ǣ�dֻ��Ҫ30��bit
//};
//
//// 47bit - 6���ֽ�*8 = 48bit;
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); // 8���ֽ�
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(s));// 3;
//
//	return 0;
//}


//#include <stdio.h>
//enum Sex //�Ա�
//{
//    // ö�ٵĿ���ȡֵ-����
//    MALE = 2,
//    FEMALE = 8,
//    // printf("%d %d %d\n", MALE, FEMALE, SECRET); // 2 8 9
//    SECRET
//};
//
//enum Color //�Ա�
//{
//    RED,
//    GREEN,
//    BLUE
//};
//
//int main()
//{
//    enum Sex s = MALE;
//    enum Color c = BLUE;
//
//    // ö�ٱ�����ö�����ǲ��ܸ�ֵ��
//    //FEMALE = 0;// error
//
//    // �޷���int����ת��ΪColoe����
//        // C���ԣ�C++������
//    //enum Color c = 4;// error
//
//
//    printf("%d %d %d\n", MALE, FEMALE, SECRET);
//    printf("%d %d %d\n", RED, GREEN, BLUE);
//
//    printf("%d\n", s);// 0
//    printf("%d\n", c);// 2
//
//    return 0;
//}


//#include <stdio.h>
//
//enum Color //��ɫ
//{
//    RED,
//    GREEN,
//    BLUE
//};
//
//int main()
//{
//    enum Color c = BLUE;
//    printf("%d\n", sizeof(c));
//    return 0;
//}


//
//#include <stdio.h>
//
//union Un 
//{
//	char c; // 1���ֽ�
//	int i; // 4���ֽ�
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u)); // 4
//
//	printf("%p\n", &u);
//	
//	printf("%p\n", &(u.c));
//
//	printf("%p\n", &(u.i));
//
//	return 0;
//}



//#include <stdio.h>
//// int a = 0x12345678;
//// �͵�ַ------------------�ߵ�ַ
//// [][][][][][][][][][][][][][]
//// ...[][][][][12][34][56][78][][][][][][]... ����ֽ��� 
//// ...[][][][][78][56][34][12][][][][][][]... С���ֽ���
//// ����һ�����ݣ������ڴ��д�ŵ��ֽ�˳��
//// ��С���ֽ�������
//// �������Ͽ������
//// ���������е����ݹ���һ��ռ䣬
//// ����һ������int �� char�����ϣ��ȸ�int��ֵ1��Ȼ��ȡ��char����
//// == 1��С�ˣ�== 0���
//
//// ԭʼ
//int check_sys1()
//{
//	int a = 1;
//	// ����1��С
//	// ����0����
//	return *(char*)&a;
//}
//
//// ����
//int check_sys2()
//{
//	union Un 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	// ����1��С
//	// ����0����
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys2();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else if (ret == 0)
//	{
//		printf("���\n");
//	}
//	return 0;
//}



#include <stdio.h>
union Un
{
	int i; // 4���ֽ�
	char c[5]; // 1*5���ֽ�
	// ����ֽ�����4
	// ������Ĵ�СӦ����4�ı�����2*4=8
}u;

int main()
{
	printf("%d\n", sizeof(u));// 8;
	return 0;
}
