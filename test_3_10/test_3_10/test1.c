//#include <stdio.h>
////����һ����stdio.h���ļ�
////std-��׼ standard input output
//
//int main() //������-��������-main��������ֻ��һ��
//
//// int�����͵���˼
//// mainǰ���int��ʾmain�������÷���һ������ֵ
//// int main()
////{
////		return 0; //����0 
//// }
//
//{
//	printf("Hello World!");
//	//�����������
//	//����Ļ�����hello world
//	//����-print function - printf - ��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-��Ҫ���к���������
//
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	// char		//�ַ���������
//	//char ch = 'A';// ���������ڴ�������һ��ռ�,�ռ�����ch���ڴ���ַ�A
//	//printf("%c\n", ch);// %c��ӡ�ַ���ʽ������
//
//	// int			//����
//	//int age = 20;
//	//printf("%d\n", age); // %d - ��ӡ����
//
//	// float
//	float f = 5.0;
//	printf("%f", f);	// %f��ӡ������
//
//	// double
//	double d = 3.14;
//	printf("%lf", d); // %lf��ӡ��������
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(long)); //4
//	printf("%d\n", sizeof(long long)); //8 
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(double)); //8
//	return 0;
//}


//#include <stdio.h>
//
//int num1 = 20; //ȫ�ֱ����������ڴ����֮�⣨{}���ı���
//
//int main()
//{
//	int num1 = 10; // �ֲ������������ڴ�����ڲ���{}���ı���
//
//	printf("%d", num1);
//	//�ֲ�������ȫ�ֱ��������ֲ�Ҫ��ͬ�����ײ�����ᣨbug��
//	//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ�����������ȫ�ֱ���
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	// ��������ʹ�����뺯��scanf()
//	scanf("%d%d", &num1, &num2); // ȡ��ַ����&
//	int sum;
//	// C���Թ涨������Ҫ�����ڴ�������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	{
//		int num2 = 20;
//		printf("num1 = %d\n", num1);
//		printf("num2 = %d\n", num2);
//	}
//	printf("num1 = %d\n", num1);
//	//printf("num2 = %d\n", num2); // ������num2�������򣬱���
//	return 0;
//}



//#include <stdio.h>
//
//int global = 2022;
//
//void test() 
//{
//	printf("test()global = %d\n", global);
//}
//
//int main()
//{
//	// δ�����ı�ʶ��
//	// ����ͨ��extern����ʹ��
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	printf("global = %d\n", global);
//	test();
//	return 0;
//}


#include <stdio.h>
int main()
{
	//const - ������
	int m = 15;
	//int n = 10; //n�Ǳ����������ִ��г����ԣ���������˵n�ǳ�����

	int arr0[20] = { 0 };//����m�Ǳ���
	//int arr1[m] = { 0 };//����m�Ǳ���
	//const int arr2[n] = { 0 }; // n���г������ǳ�����(�й����õ��������̿�)

	const int num = 4;
	printf("%d\n", num);

	//num = 8;// ���󣬳����������޸�
	printf("%d\n", num);

	return 0;
}