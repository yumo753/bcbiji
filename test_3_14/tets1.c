//#include <stdio.h>
//int main()
//{
//	printf("hellow world!\n"); // ���1
//	printf("hellow LiHua\n");  // ���2
//	; // ���3 - �����
//	return 0; // ���4
//}

//#include <stdio.h>
//int main()
//{
//	int age1 = 110; //17 18 20 30 40 110
//
//	if (age1 < 18)
//		printf("δ����\n");
//
//	if (age1 < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//
//	if (age1 < 18)
//		printf("δ����\n");
//	else if (age1 >= 18 && age1 < 30)
//		printf("����");
//	else if (age1 >= 30 && age1 < 50)
//		printf("����");
//	else if (age1 >= 50 && age1 < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���");
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	int a = 1;
//	int b =2;
//
//	if (a == 0)
//		if (b == 2)
//			printf("1\n");
//	else
//		printf("0\n");
//	return 0;
//	// ��������н��λ�գ�����ͨ��������ƭ����
//	// ���� else
//}

//#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	if (num1 = 2)
//	{
//		printf("if�����жϱ�ɸ�ֵ��Ϊ�棬�ܹ���ӡ\n");
//	}
//	printf("num1 = %d\n", num1);
//
//	printf("�����������д\n");
//	//if (2 = num2)
//	//{
//	//	printf("if�����жϱ�ɸ�ֵ��Ϊ�棬�ܹ���ӡ\n");
//	//}
//	//printf("num1 = %d\n", num2); // ����ᱨ����ʾ��д����
//
//	return 0;
//}

//// �ж�һ�����Ƿ�λ����
//#include <stdio.h>
//int main() 
//{
//	int num;
//	printf("����������Ҫ�ж���ż������");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("%d��ż������������", num);
//	}
//	else
//	{
//		printf("%d������", num);
//	}
//	return 0;
//}



//// ���1-100֮������
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++) 
//	{
//		if (i % 2 == 0)
//		{
//			//printf("%d��ż��\n", i);
//		}
//		else
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

//// ���1-100������
//#include <stdio.h>
//int main()
//{
//	int a;
//	int i;
//	int sum;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = 0;
//		for (i = 1; i <= a; i++)
//		{
//			if (a % i == 0) 
//			{
//				sum++;
//			}
//		}
//		if (a == 1) 
//		{
//			printf("%d������\n", a);
//		}
//		else if(sum == 2)
//		{
//			printf("%d������\n", a);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() 
//{
//	int day = 9;
//	//float day = 3;
//	int a = 1;
//	switch(day)
//	{
//		case 1:
//		//case 1.0:
//		//case a:// case������������ͳ���
//			printf("����1");
//			break;
//		case 2:
//			printf("����2");
//			break;
//		case 3:
//			printf("����3");
//			break;
//		case 4:
//			printf("����4");
//			break;
//		case 5:
//			printf("����5");
//			break;
//		case 6:
//			printf("����6");
//			break;
//		case 7:
//			printf("������");
//			break;
//		default:
//			printf("��������\n");
//			break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n) 
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//// while����if�ĶԱ�
//#include<stdio.h>
//int main()
//{
//	if (1) 
//	{
//		printf("��\n");
//	}
//	while (1)
//	{
//		printf("��\n");
//	}
//
//	if (0)
//	{
//		printf("��\n");
//	}
//	while (0)
//	{
//		printf("��\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{

	//int i = 11;
	//do
	//{
	//	printf("%d\n", i);
	//	i++;
	//} while (i < 11);

	//return 0;

	//int i = 11;
	//while (i < 11) 
	//{
	//	printf("%d\n", i);
	//	i++;
	//}
	//return 0;

//	int i = 0;
//	while (i < 11) 
//	{
//		i++;
//		if (i == 3)
//		{
//			continue;
//		}
//		if (i == 5) 
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		// ��������Ctrl + Z��getchar���ȡ��һ��EOF��ѭ����ֹͣ
//		// EOF - end of file - �ļ�������־��EOF��ֵ��-1
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a;
//	int ch;
//	char password[20] = { 0 };
//	printf("����������:"); // ����123456���س�
//	scanf("%s", password);// 123456����ŵ�password
//		// ע�⵱����123456 ABCʱ��123456����ŵ�password������Ļ��ǻᱻ���ڻ�����
//		// scanf()�������Կո�ͻس�Ϊ��ֹ����
//		// 
//	//��������ʣ��һ��'\n'
//	// ��ջ�������getchar()�ͻ�ȴ�����
//	//getchar();	// �ӻ�������ȡ��һ���ַ�
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N)");
//	a = getchar();// ���еĻس�'\n'��aȡ��
//	if (a == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	printf("password: %s\n", password);
//	printf("a: %d\n", a);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char ch;
	while ((ch = getchar()) != EOF) 
	{
		if (ch < '0' || ch > '9') 
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}