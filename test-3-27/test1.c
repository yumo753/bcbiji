#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("nmsl\n");
//	return 0;
//}


//#include <stdio.h>
//
//// 描述一个学生
//// 名字
//// 年龄
//// 电话
//// 性别
//
//// struct 结构体关键字
//// Stu - 结构体标签
//// struct Stu - 结构体类型
//struct Stu 
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3; // s2,s2,s3 是三个全局的结构体变量，一般不建议，尽量少使用全局变量
//// 定义一个结构体类型
//// 画一个图纸，图纸不占空间，
//
//
//typedef struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; 
//// 对 struct Stu 类型重引命
//// 给struct Stu起了个好记便于理解的外号，可以直接通过外号 Stu 找到他 struct Stu
//
//
//int main()
//{
//	struct Stu s; // 局部的结构体变量
//	// 创建一个结构体变量
//	// 利用图纸建一个房子，房子占空间
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
//	Stu s = { "张三", 19, "13478651290", "未知" };
//
//	print1(s);
//
//	print2(&s);
//	return 0;
//}
