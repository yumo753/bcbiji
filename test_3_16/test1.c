////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}


//// �����������Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int num = 0;
//	printf("���������������ÿո����");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) 
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	if (a < c)
//	{
//		num = a;
//		a = c;
//		c = num;
//	}
//	if (b < c)
//	{
//
//		num = c;
//		c = b;
//		b = num;
//	}
//	printf("%d, %d, %d", a, b, c);
//	return 0;
//}


//// ��ӡ 1 - 100֮��3�ı���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++) 
//	{
//		if (i % 3 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//}


//// ���Լ��
//#include <stdio.h>
//int main() 
//{
//	int a, b, a1, b1;
//	int num;
//	int yu = 0;
//	printf("����Ҫ��Լ�������������ÿո��������");
//	scanf("%d %d", &a, &b);
//	if (a < b) 
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	a1 = a;
//	b1 = b;
//	while (yu = a1 % b1) // ��ʦţ��
//	{
//		//yu = a1 % b1;
//		a1 = b1;
//		b1 = yu;
//	}
//	printf("%d��%d�����Լ���ǣ�%d", a, b, b1);
//	return 0;
//}

//// ������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1000; i < 2001; i++) 
//	{
//		if (((i % 4 == 0) && (i % 100 != 0 ))|| (i % 400 == 0)) 
//		{
//			printf("%d������\n", i);
//			j++;
//		}
//	}
//	printf("j = %d", j);
//	return 0;
//}

//// ��ӡ100 - 200������
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	//int num;
//	for (i = 100; i < 201; i++) 
//	{
//		//num = 0;
//		for (j = 2; j < i + 1; j++)
//		{
//			if (i % j == 0)
//			{
//				//num++;
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d������\n", i);
//		}
//		else if (i == 1)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}


//// ��ӡ100 - 200������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j;
//	// sqrt ��ƽ������ѧ�⺯��
//	for (i = 101; i < 201; i++) 
//	// �ɸĽ�������ż��һ����������(2����)
//	// 	for (i = 99; i < 201; i+2) // i���ܵ���ż��
//	{
//		//num = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if ( i % j == 0)
//			{
//				//num++;
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d������\n", i);
//		}
//		else if (i == 1)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

// 

