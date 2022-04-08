#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

// 初始化通讯录函数
void InitContact(struct Contact* ps)
{
	// 动态开辟空间，及初始化
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL) 
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

// 增加容量
void CheckCapacity(struct Contact* ps) 
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else 
		{
			printf("增容失败\n");
		}
	}

}

// 销毁通讯录-释放动态开辟的内存
void DestroyContact(struct Contact* ps) 
{
	free(ps->data);
	ps->data = NULL;
}


// 增加个人信息函数
void AddContact(struct Contact* ps)
{
	// 检查当前通讯录的容量
	// 1，如果满了，就增加空间
	// 2，如果不满，就啥也不干

	CheckCapacity(ps);
	// 增加数据

	printf("请输入名字\n:>");
	scanf("%s", ps->data[ps->size].name);

	printf("请输入年龄\n:>");
	//scanf("%d", ps->data[ps->size].age);// error
	scanf("%d", &(ps->data[ps->size].age));

	printf("请输入性别\n:>");
	scanf("%s", ps->data[ps->size].sex);

	printf("请输入电话\n:>");
	scanf("%s", ps->data[ps->size].tele);

	printf("请输入住址\n:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功");
}


// 打印通讯录函数
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "住址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

// 查找姓名
// 使用域就在contact.c文件内，可以用static将他设置为静态局部函数
static int FindBYname(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

// 删除个人信息函数
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除联系人的名字:>");
	scanf("%s", name);

	// 1,查找要删除的人在什么位置
	int pos = FindBYname(ps, name);

	// 2，删除
	if (pos == -1)
	{
		printf("要删除的联系人不存在\n");
	}
	else
	{
		// 删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++) // 注意j=i
		{
			ps->data[j] = ps->data[j + 1];
		}
		printf("删除成功\n");
	}
	ps->size--;
}


// 查找个人信息函数
void SeaechConract(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);

	// 1,查找联系人在什么位置
	int pos = FindBYname(ps, name);

	// 打印联系人的信息
	// 2，打印
	if (pos == -1)
	{
		printf("要查找的联系人不存在\n");
	}
	else
	{
		// 打印
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr
		);
		printf("查找成功\n");
	}
}


// 改变个人信息函数
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要改变信息联系人的名字:>");
	scanf("%s", name);

	// 1,查找联系人在什么位置
	int pos = FindBYname(ps, name);

	// 改变联系人信息
	// 2，修改
	if (pos == -1)
	{
		printf("要改变信息的联系人不存在\n");
	}
	else
	{
		printf("请输入名字\n:>");
		scanf("%s", ps->data[pos].name);

		printf("请输入年龄\n:>");
		scanf("%d", &(ps->data[pos].age));

		printf("请输入性别\n:>");
		scanf("%s", ps->data[pos].sex);

		printf("请输入电话\n:>");
		scanf("%s", ps->data[pos].tele);

		printf("请输入住址\n:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
	}
}