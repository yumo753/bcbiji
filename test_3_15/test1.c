//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 1; i < 11; i++)
//    {
//        if (i == 5)
//        {
//            continue;
//        }
//        if (i == 7) 
//        {
//            break;
//        }
//        printf("%d \n", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i < 11; i++)
//    {
//        if (i = 5) {
//            printf("nmsl\n");
//        }
//        printf("awsl\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) 
//	{
//		for (; j < 10; j++)
//		{
//			printf("yumo\n");// ֻ���ӡ10�δ�ӡ
//			// ����j������for�����
//			// i = 0��ʼ��һ��ѭ��
//			// i = 1ʱ����һ��ѭ����������ʱJ=10
//			// ��ѭ�������ٽ���
//			// 
//		}
//	}
//}

// forѭ���е��������ǣ�i++����++i�����Ľ������+1���������ж��ټ�һ
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("susu x = %d,y = %d\n", x, y);
//	}
//	return 0;
//}

//// ��forѭ���е��ж����Ϊ��ֵ���ʱ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	// forѭ�����ж���䲻���ж����
//	// ���Ǹ�ֵ��䣬��0��ֵ��K
//	// 0��C�����б�ʾ�٣�forѭ�����ж����Ϊ�٣���0�����棬���������ѭ��
//	// ѭ���˳���һ��Ҳ��ִ��
//	//
//	{
//		k++;
//		printf("yumo��i = %d\n", i);
//	}
//	return 0;
//}

// do..whileѭ��

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do 
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

// ����n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int i, n, num = 1;
//	printf("��������Ҫ��׳˵����֣�");
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)
//	{
//		num = i * num;
//	}
//	printf("%d�Ľ׳���%d", n,num);
//	return 0;
//}

//// ����1! + 2! +...+ 10!
//#include<stdio.h>
//int main()
//{
//	long i=1, j=1, num = 1, sum =0;
//	for (i = 1; i < 11; i++)
//	{
//		num = 1;
//		for (j =1; j < i + 1; j++)
//		{
//			num = j * num;
//		}
//		sum = sum + num;
//	}
//	printf("1! + 2! +...+ 10! = %ld", sum);
//	return 0;
//}

//// ����1! + 2! +...+ 10!
//#include<stdio.h>
//int main()
//{
//	long i=1, j=1, num = 1, sum =0;
//	for (i = 1; i < 11; i++)
//	{
//		num = i * num;
//		sum = sum + num;
//	}
//	printf("1! + 2! +...+ 10! = %ld", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int binsearch(int x, int v[], int n) 
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (x == v[i])
//		{
//			printf("%d�������е�λ����%d\n, �±���%d", x, i + 1, i);
//			break;
//		}
//	}
//	if (i == n) 
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0, 11, 22, 33, 44, 55, 67, 74, 81, 99};
//	binsearch(77, arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//#include <stdio.h>
//int binsearch(int x, int v[], int n) 
//{
//	int i, j;
//	j = n / 2;
//
//	for (i = 0; i < n / 2; i++)
//	{
//		if (v[j] > x)
//		{
//			j = (0 + j) / 2; 
//			printf("i = %d  j = %d\n", i, j);
//		}
//		else if (v[j] < x)
//		{
//			j = (n + j) / 2;
//			printf("i = %d  j = %d\n", i, j);
//		}
//		else if (v[j] == x)
//		{
//			return j;
//			break;
//		}
//	}
//	if (i == n / 2) 
//	{
//		printf("��������\n");
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int x = 11;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	n = sizeof(arr) / sizeof(arr[0]);
//	a = binsearch(x, arr, n);
//	if (a != -1)
//	{
//		printf("%d�������е��±���%d \n",x, a);
//	}
//	else 
//	{
//		printf("x��ֵ����");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int x = 8;		// ���ҵ���
//
//	int sz = sizeof(arr) / sizeof(arr[0]); // ��������Ԫ�ظ���
//	int zuo = 0;	// ���±�
//	int you = sz - 1; // ���±�
//	
//	while (you >= zuo) // ֻ�����±�����±�֮����Ԫ��ʱ���ܽ��в���
//	{
//		int zo = (zuo + you) / 2; // ͨ�������±�����м�Ԫ���±�
//		if (x > arr[zo])
//		{
//			zuo = zo + 1;
//		}
//		else if (x < arr[zo])
//		{
//			you = zo - 1;
//		}
//		else if (x = arr[zo])
//		{
//			printf("%d�±���%d", x, zo);
//			break;
//		}
//	}
//	if (you < zuo) 
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str1[] = "Hellow world, Hellow yumo!";
//	char str2[] = "##########################";
//	int sz = sizeof(str1) / sizeof(str1[0]);//������Ԫ�صĸ���
//	int left = 0;// ��
//	//int right = sz - 2;//�� 
//	////�ַ��������в�ֹѽu�գ������������һ���ַ�'\0'
//	////�ڼ���ʱ���Ὣ��������ڣ�����sizeof�����ַ����ĳ���ʱ�� -1
//
//	int right = strlen(str1);
//
//
//	while(right >= left)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		// ��Ϣһ��
//		Sleep(1000);//��λ�Ǻ���
//		system("cls"); // ִ��ϵͳ�����һ������ - cls - �����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = {0};

	for (i = 1; i < 4; i++)
	{ 
		printf("���룺");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0) // ��==�����������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("YES\n");
			break;
		}
		else
		{
			if (i == 3) 
			{
				printf("���������˳�\n");
			}
			else 
			{
				printf("NO, �㻹��%d�λ���\n", 3 - i);
			}			
		}
	}
	return 0;
}