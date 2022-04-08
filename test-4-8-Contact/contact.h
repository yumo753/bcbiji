#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3

#define MAX 1000

#define MAX_NAME 20

#define MAX_SEX 5

#define MAX_TELE 12

#define MAX_ADDR 30
// 更改清晰阅读方便

enum Option
{
	EXIT,	// 0
	ADD,	// 1
	DEL,	// 2
	SEARCH,	// 3
	MODIFY,	// 4
	SHOW,	// 5
	SORT	// 6
};
// 增加代码的可读性



// 个人信息类型
struct PeoInfo
{
	char name[MAX_NAME]; // 姓名
	int age;			 // 年龄 
	char sex[MAX_SEX];	 // 性别
	char tele[MAX_TELE]; // 电话
	char addr[MAX_ADDR]; // 住址
};

// 通讯录类型
struct Contact
{
	struct PeoInfo *data; // 存放1000个信息
	int size; // 记录当前已经有的元素个数
	int capacity; // 当前通讯录的最大容量
		// 当size = capacity 时进行扩容 
};
// 创建一个通讯录结构体, 里面有两个元素，
// 一个数组 - data，数组中有1000个元素，每个元素是一个个人信息类型的结构体
// 一个整型 - size，记录数组中已存放的个人信息的数量


// 声明初始化函数
void InitContact(struct Contact* ps);

// 声明增加个人信息函数
void AddContact(struct Contact* ps);

// 声明打印通讯录信息函数
void ShowContact(struct Contact* ps);

// s声明删除个人信息函数
void DelContact(struct Contact* ps);

// 声明查找个人信息函数
void SeaechConract(struct Contact* ps);

// 声明改变个人信息函数
void ModifyContact(struct Contact* ps);

// 销毁通讯录-释放动态开辟的内存
void DestroyContact(struct Contact* ps);