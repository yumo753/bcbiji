////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}

// ��������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	while (1) 
//	{
//		int i, num;
//		int suiji = rand() % 20;
//		while (1) 
//		{
//			printf("����Ǽ���");
//			scanf("%d", &num);
//			if (num > suiji) 
//			{
//				printf("����\n");
//			}
//			else if(num < suiji) 
//			{
//				printf("С��\n");
//			}
//			else if (num == suiji) 
//			{
//				printf("�¶���");
//				break;
//			}
//		}
//		printf("���������Ϸ��(Y/N)");
//		scanf("%d", &i);
//		if (i == 'Y')
//		{
//			printf("��Ϸ����");
//			continue;
//		}
//		else if(i == 'N')
//		{
//			printf("��Ϸ����");
//			break;
//		}
//	}
//	return 0;
//}

// ʱ�������ǰ�������ʱ�� - ���������ʼʱ�䣨1970.1.1.0:0:0��= (xxx)��
// ʱ�����һֻ�ڱ仯�ģ�������ʱ����������������������ʼ��

//// ��������Ϸ��1-100��
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void put()//��ӡ�˵�
//{
//	printf("*********************************\n");
//	printf("******* 1.play   0.exit *********\n");
//	printf("*********************************\n");
//}
//
//
//void game()
//{
//	// 1������һ�������
//	printf("������\n");
//	int num;//���ղµ�����
//	// ��ʱ����������������������ʼ��
//	// time_t time(time_t* timer) 
//	// time()�������ջ᷵��һ�� time_t �Ľ�������Ĳ���ʱָ������
//	//srand((unsigned int)time(NULL));
//	// ��time_t����ǿ��ת��Ϊ��������
//	// NULL��ָ��û��ʲôʵ�ʵ�Ч��	
//	// srand()����������������ֻ��Ҫִ��һ�ξ��У�
//	// ִ�ж�λ����������Ĳ�����С�����������Ӧ�ý�srand()�����ŵ���������
//
//	//int suiji = rand();// ���������
//	int suiji = rand() % 100 + 1; /// ����1��100�������
//	// rand()�������᷵��һ��0 - RAND_MAX��0x7FFF(32767)�������������
//	// ����һ��ȱ�ݣ��������ڴ�����ʱ�����ɵ����������һ�ε�һ��
//	// C���Խ��������������ʱ��srand()����һ�������㣨����������أ���
//	// �����̶�ʱ�����ɵ������Ҳ�̶�
//	// ��δ����ʱ��������ΪĬ��ֵ��Ҳ�Ͳ�����������ɵ������һ��
//	//printf("%d\n", suiji); // ��ӡ�����
//
//	// ������
//	while (1) 
//		{
//			printf("����Ǽ���");
//			scanf("%d", &num);
//			if (num > suiji) 
//			{
//				printf("����\n");
//			}
//			else if(num < suiji) 
//			{
//				printf("С��\n");
//			}
//			else if (num == suiji) 
//			{
//				printf("�¶���\n");
//				break;
//			}
//		}
//}
//
//
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		put();
//		printf("���ѡ����: ");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();// �����ֺ���
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	}while (input);
//}


//// goto��� ��ת���
//#include<stdio.h>
//int main()
//{
//	again:
//		printf("Hello, nmsl\n");
//	goto again;// ��ѭ��
//
//	//printf("+++++++\n");
//	//goto agina;
//	//printf("=======\n");// ��һ���������goto������
//	//agina:
//	//	printf("*******\n");
//	return 0;
//}

//// һ���ػ����� goto���
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	// �ڵ��Ե�cmd�����룬shutdown -s -t 60�����Խ�����һ���Ӻ�ػ�
//	// shutdown -a, ȡ���ػ�ָ��
//	// C������ sysstem()��������ִ��ϵͳ����
//again:
//	printf("������1�����ڹػ���������룺��������ȡ���ػ���\n������>��");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������")) 
//	// strcmp()���Ƚ������ַ���
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}


//// һ���ػ����� while���
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	// �ڵ��Ե�cmd�����룬shutdown -s -t 60�����Խ�����һ���Ӻ�ػ�
//	// shutdown -a, ȡ���ػ�ָ��
//	// C������ sysstem()��������ִ��ϵͳ����
//	while (1) 
//	{
//		printf("������1�����ڹػ���������룺��������ȡ���ػ���\n������>��");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//			// strcmp()���Ƚ������ַ���
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "yumo";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	// strcpy�ڿ���ʱ�Ὣarr1�ַ��е������ַ�����"\0"������arr2��
//	// arr2�ڴ�ӡ���ʱ����"\0"�ͻ�ֹͣ
//	printf("arr2: %s\n", arr2);
//	printf("arr1: %s\n", arr1);
//	return 0;
//}

//// memset
///// memory - �ڴ棬set����
//// C �⺯�� void *memset(void *str, int c, size_t n) �����ַ� c��һ���޷����ַ��������� str ��ָ����ַ�����ǰ n ���ַ���
//#include <stdio.h>
//int main()
//{
//	char arr1[20] = "Hello Woeld!";
//	memset(arr1, '*', 5);
//	printf(arr1);
//	return 0;
//}


// �������
// 
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}


//// ���������ֵ
//#include <stdio.h>
//
//// �����Ķ���
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	//return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// ������ʹ��
//	int max = MAX(a, b);
//	printf("MAX: %d", max);
//	return 0;
//}


//// дһ������������������
//#include <stdio.h>
//
//void swap1(int x, int y)
//// ��ʵ�δ��ݸ��βε�ʱ��
//// �β�ʵ�ʾ���ʵ�ε�һ����ʱ����
//// ���βε��޸��ǲ���ӡ��ʵ�ε�
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//
//	printf("��������a��b��ֵ\n");
//	// ���ú���spap1����ֵ���ã�
//	swap1(a, b);
//	printf("a = %d, b = %d\n", a, b);
//
//	printf("��������a��b�ĵ�ֵַ��ָ��\n");
//	// ���ú���spap2����ַ���ã�
//	swap2(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//// ͨ�������ж�����
//#include <stdio.h>
//#include <math.h>
//
//int sushu(int i)  
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//	{
//			break;
//	}
//	}
//	if (j > sqrt(i))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b, i;
//	printf("���ٵ����ٵ�����>�����ո������");
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (sushu(i) == 1)
//		{
//			printf("%d������\n", i);
//		}
//	}	
//	return 0;
//}

//// ͨ������������
//#include <stdio.h>
//
//int runnian(int i)
//{
//	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int a, b, i=0;
//	printf("���ٵ����ٵ�����>�����ո������");
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (runnian(i) == 1)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}


// ͨ�������ö��ַ���������������һ�������±�
#include <stdio.h>

// �����Ϻ�����arr��һ��ָ��
int twofen(int arr[], int num, int sz)
{
	int left = 0;// ���±�
	int right = sz - 1;// ���±�
	//int middle; // �м�

	while (right >= left )
	{
		int middle = (left + right) / 2;
		if (num > arr[middle])
		{
			left = middle + 1;
			
		}
		else if (num < arr[middle])
		{
			right = middle - 1;
		} 
		else
		{
			return middle;
		}
	}
	return -1;
}

int main()
{
	int num1;// ���ҵ���
	int num2;// �±�
	int arr[] = { 6, 12, 19, 28, 30, 48, 49, 50, 60, 71 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��Ҫ��ɶ����:");
	scanf("%d", &num1);
	num2 = twofen(arr, num1, sz);
	// ע�⵱�����д�������ʱ���������ʵ�������е�һ��Ԫ�صĵ�ַ��ָ�룩
	if (num2 == -1) 
	{
		printf("�Ҳ���");
	}
	else 
	{
		printf("%d���±���%d", num1, num2);
	}
	return 0;
}
