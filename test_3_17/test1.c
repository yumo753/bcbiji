////_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Helo");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//		{
//			break;
//		}
//		if (b % 3 == 1) 
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 10 == 9 || i / 10 == 9)
//		//// ����д99��������9������ֻ��������һ��
//		//// 95��10��9---5������9���̣�5��������
//		//{
//		//	count++;
//		//}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		// ������if����ʱ��99�ᱻ��������
//	}
//	printf("1-100��������һ����%d������9", count);
//	return 0;
//}

//// ����1/1-1/2+1/3-1/4+1/5......+1/99 - 1/100��ֵ,��ӡ�����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float count = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 == 0)
//		//{
//		//	count = count - (1.0 / i);
//		//}
//		//else
//		//{
//		//	count = count + (1.0 / i);
//		//}
//		// ��һ�ַ����Ӽ��Ӽ�
//		count += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5......+1/99 - 1/100���ڣ�%f", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { -921, -713, -175, -141, -228, -674, -286, -747, -583, -541 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int num = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[left] < arr[right])
//		{
//			num = arr[left];
//			arr[left] = arr[right];
//			arr[right] = num;
//		}
//		right--;
//	}
//	printf("MAX = %d", arr[left]);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			//printf("%d * %d = %d", j, i, j * i);
			printf("%d * %d = %2d   ", j, i, j * i);
			//printf("%d * %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}