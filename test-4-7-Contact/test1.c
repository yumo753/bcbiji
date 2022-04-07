#define _CRT_SECURE_NO_WARNINGS 1
/*
1，存放1000个好友信息
	姓名
	电话
	性别
	住址
	年龄
2，增加好友信息
3，删除指定好友信息
4，查找好友信息
5，修改好友信息
6，打印好友信息
7，排序
*/

#include "contact.h"

void menu()
{
	printf("************************************\n");
	printf("******   1, 增加好友信息      ******\n");
	printf("******   2，删除指定好友信息  ******\n");
	printf("******   3，查找好友信息      ******\n");
	printf("******   4，修改好友信息      ******\n");
	printf("******   5，打印好友信息      ******\n");
	printf("******   6，排序好友信息      ******\n");
	printf("******   0，退出              ******\n");
	printf("************************************\n");
}

int main()
{
	int input = 0;

	// 创建通讯录
	struct Contact con; // con就是通讯录，里面包含：1000个元素的数和size

	
	// 初始化通讯录
	InitContact(&con);

	do 
	{
		menu();
		printf("请选择\n:>");
		scanf("%d", &input);

		switch (input)
		{
		//case 1: 增加代码的可读性，0123啥的别人看不懂
		case ADD:
			AddContact(&con);
			break;

		case DEL:
			DelContact(&con);
			break;
		
		case SEARCH:
			SeaechConract(&con);
			break;
		
		case MODIFY:
			ModifyContact(&con);
			break;

		case SHOW:
			ShowContact(&con);
			break;

		case SORT:
			printf("未完成\n");
			break;

		case EXIT:
			printf("退出通讯录\n");
			break;

		default:
			printf("选择有误, 请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}
