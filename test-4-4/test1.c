#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//
//	// �޷�����������������ʱ�Ჹ0
//	unsigned char a = 200;
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// a(b): 1100-1000
//
//	unsigned char b = 100;
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// b(b): 0110-0100
//
//	unsigned char c = 0;
//
//	c = a + b;// char�����ڽ�������ʱ�ᷢ����������
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// 00000000-00000000-00000001-00101100 ->300(b)
//	// cΪchar���ͣ�ֻռ��һ���ֽ�
//	// c = 00101100 -> 44(b)
//
//
//	printf("%d, %d", a + b, c);// 300��44
//	// %d a + b
//	// 00000000-00000000-00000000-11001000 ->200(b)
//	// 00000000-00000000-00000000-01100100 ->100(b)
//	// 00000000-00000000-00000001-00101100 ->300(b) <- a+b(%d)
//	// 
//	// 00000000-00000000-00000000-00101100 ->300(b) <- c(%d) - ��������
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	// �浽����ֽ�����ڴ����ǣ�00 00 12 34
//
//	unsigned char b = *(unsigned char*)&a;
//	// b �õ����� 00��charֻ�ܷ���һ���ֽ�
//
//	printf("%d\n", b);
//	// 32��˶��µĽ��Ϊ0(b) = 00(0x)
//	// 64С���µĽ��Ϊ52(b) = 34(0x)
//	
//	return 0;
//}
////��32λ���ģʽ�´������ϱ���b���ڣ��� 


//// ��ӡ�������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("Ҫ��ӡ���У�\n>:");
//	scanf("%d", &n);
//	int arr[13][13] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j <n; j++) 
//		{
//			if (j == 0) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) 
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	// ��ӡ
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++) 
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
///*
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1 5 10 10 5 1
//*/


//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) 
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) 
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}




/*
��Ŀ����:
������
��Ŀ���ݣ�
5λ�˶�Ա�μ���10��̨��ˮ����,����������Ԥ��������:

Aѡ��˵: B�ڶ�, �ҵ���;
Bѡ��˵: �ҵڶ�, E����;
Cѡ��˵: �ҵ�һ��D�ڶ�
Dѡ��˵: C���, �ҵ���;
Eѡ��˵: �ҵ���, A��һ;

����������,ÿλѡ�ֶ�˵����һ��, ����ȷ�����������Ρ�
*/

//


///*
//��Ŀ���ݣ�
//ʵ��һ������,���������ַ����е�k���ַ���
//����:
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//*/
//
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while (*str != '\0') 
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//// ������ʵ���Ͼ��ǰѵ�һ���ַ��������ַ�һ�ν��������һ��
//// k���ڼ�������������
//
//// 1,������ⷨ
//void zuoxuan1(char* str, int k, int len) 
//{
//	assert(str != NULL);
//	// �Լ�д��
//	//char* left = str;//��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < k; i++) 
//	//{
//	//	left = str;
//	//	for (j = 0; j < len-1; j++) 
//	//	{
//	//		char map = *left;
//	//		*left = *(left + 1);
//	//		*(left + 1) = map;
//	//		left++;
//	//	}
//	//}
//
//	// ��ʦд��
//	int i = 0;
//	for (i = 0; i < k; i++) 
//	{
//		// ����һ���ַ�
//		// 1
//		char tmp = *str;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++) 
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		// 3
//		*(str+ len - 1) = tmp;
//	}
//}
//
////2��������ת��
//// abcdef
//// bafedc
//// cdefab
//
//void reverse(char* left, char* right) 
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char map = *left;
//		*left = *right;
//		*right = map;
//		left++;
//		right--;
//	}
//}
//
//void zuoxuan2(char* str, int k, int len) 
//{
//	assert(str != NULL);
//	assert(k <= len);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len -1);
//	reverse(str, str + len - 1);
//}
//
//
//
//int main()
//{
//	char str[] = "abcdef";
//	int k = 0;
//	printf("���������ַ�>: ");
//	scanf("%d", &k);
//
//	int len = my_strlen(str);
//	
//	zuoxuan2(str, k, len);
//	
//	printf("%s\n", str);
//
//	return 0;
//}


///*
//��Ŀ����:
//�ַ�����ת���
//��Ŀ����;
//д�����������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���.
//����:����s1 = AABCD��s2 =BCDAA,����1
//����s1 = abcd��s2 = ACBD������0
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//*/
//
// ����һ
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char map = *left;
//		*left = *right;
//		*right = map;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k, int len)
//{
//	assert(str != NULL);
//	assert(k <= len);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len -1);
//	reverse(str, str + len - 1);
//}
//
//int is_left_move(char* s1, char* s2) 
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++) 
//	{
//		left_move(s1, 1, len);
//		// ÿ������֮��Ľ������ѡ1������дi
//		int ret = strcmp(s1, s2);
//		if (ret == 0) 
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) 
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}


//// ������
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//
//// arr1: abcdef
//// arr11: abcdefabcdef
//// arr11�а���������arr1��ת��Ľ��
//// ���arr2����arr11����ôarr2������arr1��ת������
//
//int is_left_move(char* str1, char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2) 
//	{
//		return 0;
//	}
//	// �Ǹ���
//
//	// 1, ��str1�ַ�����׷��һ��str1�ַ���
//	
//	// strcat
//		// strcat(str1,str2),��str2׷�ӵ�str1��
//		// strcat("abc", "bcd") -> "abcdef"
//		// ע�ⲻ�������Լ����Լ�׷�ӣ��ᱨ��
//		// ԭ������Ԫ�ذ�ĩβԪ��'\0'�����ˣ��粻����ֹ��'\0'��һֱ����ȥ�ͱ�����
//	// stract(str1,str1)//����
//		
//	// strnact
//		// strncat(str1,str2,str2_len),��str2��len���ȵ��ַ�׷�ӵ�str1��
//		// strncat("abc", "bcd", 2) -> "abcde"
//		// ���������Լ����Լ�׷�ӣ����ᱨ����Ҫע������Ҫ׷�ӵĳ���
//		// 
//	strncat(str1, str1, len1);
//
//	// 2���ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	// strstr()-���Ӵ�
//		// strstr(str1, str2), ��str1������û��str2����ַ��� 
//		// ��������Ϊָ�룬
//			// �ҵ��˷���str1�е�str2λ�õ�ָ��
//			// û�ҵ����ؿ�ָ��
//	char* ret = strstr(str1, str2);
//	if (ret != NULL)
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
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}



/*
��Ŀ����:
���Ͼ���
��Ŀ����:
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
���д�����������ľ����в���ĳ�������Ƿ����
Ҫ��:ʱ�临�Ӷ�С��O(N) - ����һ��һ�еı�������
ȥ�Ķ���
*/

// 1 2 3
// 4 5 6 
// 7 8 9

// 1 2 3
// 4 5 6
// 7 8 9

//#include <stdio.h>
//
////int FindNum(int arr[3][3], int k, int row, int col)
////{
////	int x = 0;
////	int y = col-1;
////	
////	// �Լ�
////	//for (x = 0; x < row; x++) 
////	//{
////	//	if (k < arr[x][y])
////	//	{
////	//		for (y = 0; y < col; y++) 
////	//		{
////	//			if (k == arr[x][y]) 
////	//			{
////	//				return 1;
////	//			}
////	//		}
////	//	}
////	//}
////	//return 0;
////	
////	// ��ʦ
////	while (x <= row - 1 && y >= 0) 
////	{
////		if (arr[x][y] > k) 
////		{
////			y--;
////		}
////		else if (arr[x][y] < k) 
////		{
////			x++;
////		}
////		else
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//// �ȴӺ����ı������ֵ�����Դ���ַ
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py-1;
//
//	while (x <= *px - 1 && y >= 0) 
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k) 
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	// �ж�k�ڲ�����һ������
//	// 
//	// ����һ��
//	// ��k��ÿһ�е����һ��Ԫ�رȽϣ�С��k����һ�У�����k������һ������û��k
//	// ��k��ÿһ�еĵ�һ��Ԫ�رȽϣ�������k����һ�У�С��k������һ������û��k
//	int k = 7;
//
//	// �����Ͳ������Ӻ�������ʱ���Դ���һЩֵ
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d, %d", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


// strlen
//// �ַ������ڴ溯���Ľ���
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strlen(const char* str) 
//{
//	int count=0;
//	assert(str != NULL);
//	while (*str != '\0') // while(*str) 
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len1 = strlen("abcdef");
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int len2 = strlen(arr);
//	int len3 = my_strlen("abcdef");
//
//
//	printf("%d\n", len1);// 6
//	printf("%d\n", len2);// ���ֵ��'f'��ڶ���λΪ'\0'δ��
//	printf("%d\n", len3);
//
//	
//	printf("====================\n");
//
//	// �ӣ�strlen�ķ���ֵ����Ϊsize_t: unsigned int,�޷��ŵ�����
//	// 3 - 6 = (unsigned int)-3 >0
//
//	if (strlen("abc") - strlen("abcdef") > 0) 
//	{
//		printf("awsl\n");
//	}
//	else
//	{
//		printf("nmsl\n");
//	}
//	return 0;
//}


//// strcpy
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* str1, const char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* ret = str1;
//
//	//while (*str2 != '\0')
//	//{
//	//	/**str1 = *str2;
//	//	str1++;
//	//	str2++;*/
//	//	*str1++ = *str2++;
//	//}
//	//*str1 = *str2;
//
//	// ����str2ָ����ַ�����str1ָ��Ŀռ�,����'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//
//	// ����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "helloyumo";
//	// ����ʾ��
//	// char *p = "abcdef";// �����ַ������ɸ���
//
//	char arr2[] = "world!";
//	// ����ʾ��
//	// char arr2[] = { 'a', 'b', 'c' }// û���ַ���������'\0'
//
//	//strcpy(arr1, arr2);
//	//// strcpy����ʱ�����'\0'һ�𿽱���ȥ
//	//printf("%s\n", arr1);
//
//	printf("=============\n");
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


// strcat
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	// ָ�벻��ΪNULL
//
//	char* ret = str1;
//	// ��¼Ŀ�Ŀռ����ʼ��ַ
//	
//	// ��str��'\0'��λ��
//	while (*str1) 
//	{
//		str1++;
//	}
//	
//	// ��str2�е��ַ���str1��'\0'(����str1��'\0')
//	// ��ʼ����,ֱ����'\0'������str2��'\0'��
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	
//	// ����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world!";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//// strcmp
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int my_strcmp(char* str1, char* str2) 
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	// �Լ� �����⣬abc��abcd�ȴ�С������
//	//while (*str1 != '\0')
//	//{
//	//	int ret = *str1++ - *str2++;
//	//	if (ret != 0) 
//	//	{
//	//		return ret;
//	//	}
//	//}
//	//return 0;
//
//	// ��ʦ
//	while (*str1 == *str2) // �Ƚ�
//	{
//		if (*str1 == '\0') 
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	// ����-1��1
//	if (*str1 > *str2) 
//	{
//		return 1;
//	}
//	else if (*str1 < *str2) 
//	{
//		return -1;
//	}
//
//	// �������ǵĲ�ֵ
//	//return *str1 - *str2;
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	// strcmp �Ƚϵ���ʵ���ַ������׸��ַ���ASCII��ֵ
//	// ����׸��ַ���ȾͱȽϵڶ�����ֱ��'\0'
//
//	if ( ret == 0) 
//	{
//		printf("p1 == p2\n");
//	}
//	else if ( ret > 0) 
//	{
//		printf("p1 > p2\n");
//	}
//	else 
//	{
//		printf("p1 < p2\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "Hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[10] = "abcdeft";
//	char arr2[] = "yumo";
//
//	strncpy(arr1, arr2, 4);
//	// Ҫ����4���ֽڣ�arr2ֻ��4���ֽڣ����´��'\0'
//
//	strncpy(arr1, arr2, 6);
//	// Ҫ����6���ֽڣ���arr2ֻ��4���ֽڣ�ʣ�µĲ�'\0'
//
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[30] = "hello_\0xxxxxxxxxxxx";
	char arr2[] = "world!";

	strncat(arr1, arr2, 10); // hello__wor
	// strncat��׷�����ַ������������һ��'\0'��Ŀ���ַ�����

	printf("%s", arr1);
}