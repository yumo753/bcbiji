#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("nmsl\n");
//	return 0;
//}


//#include <stdio.h>
//
//// ����һ��ѧ��
//// ����
//// ����
//// �绰
//// �Ա�
//
//// struct �ṹ��ؼ���
//// Stu - �ṹ���ǩ
//// struct Stu - �ṹ������
//struct Stu 
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3; // s2,s2,s3 ������ȫ�ֵĽṹ�������һ�㲻���飬������ʹ��ȫ�ֱ���
//// ����һ���ṹ������
//// ��һ��ͼֽ��ͼֽ��ռ�ռ䣬
//
//
//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; 
//// �� struct Stu ����������
//// ��struct Stu���˸��üǱ���������ţ�����ֱ��ͨ����� Stu �ҵ��� struct Stu
//
//
//int main()
//{
//	struct Stu s; // �ֲ��Ľṹ�����
//	// ����һ���ṹ�����
//	// ����ͼֽ��һ�����ӣ�����ռ�ռ�
//
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//
//struct T
//{
//    char ch[20];
//    struct S s;
//    char* pc;
//};
//
//int main()
//{
//    char arr[] = "hello\n";
//    struct T t = { "Hello word", {100, 'w', "Hello gay", 3.14}, arr };
//    printf("%s\n", t.ch); // Hello word
//    printf("%s\n", t.s.arr); // Hello gay
//    printf("%lf\n", t.s.d); // 3.140000
//    printf("%s\n", t.pc); // Hello
//
//    return 0;
//}

//#include <stdio.h>
//
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s;
//	strcpy(s.name, "Lihua");
//	s.age = 20;
//	return 0;
//}


//#include <stdio.h>
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; 
//
//void print1(Stu tmp) 
//{
//	printf("name: %s\n", tmp.name);
//	printf("age : %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex : %s\n", tmp.sex);
//}
//
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex : %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 19, "13478651290", "δ֪" };
//
//	print1(s);
//
//	print2(&s);
//	return 0;
//}
