#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int strncmp(const char *string1, const char *string2, size_t count);

//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abczdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}





//strstr - �����ַ���
//
//#include <assert.h>
////KMP �㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		
//		while ((*s1!='\0') && (*s2!='\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char *p1 = "abc";
//	char *p2 = "abcdef";
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}




//int main()
//{
//	//192.168.31.121   .
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech   @.
//	//zpw bitedu tech
//	
//	//char arr[] = "zpw@bitedu.tech";
//	//char*p = "@.";
//
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "123@234.@234";
//	char*p = "@.";
//
//	//zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}




//#include <errno.h>
//
//int main()
//{
//	//������  ������Ϣ
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}




//#include <ctype.h>
//
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest,void* src,rsize_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest=*(char*)src;
//		++(char*)src;
//		++(char*)dest;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	struct S arr3[]= { {"����",20},{"����",30} };
//	struct S arr4[3] = {0};
//
//    my_memcpy(arr4,arr3,sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//}





//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest<src || dest>(char*)src + count)
//	{
//		//ǰ->��
//	}
//	else
//	{
//		//��->ǰ
//	}
//	
//	return ret;
//}
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	//arr1�е����ֿ�����arr2��
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//				// 1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memmove(arr3, arr3 + 2, 20);
//
//	for (int i = 0; i < (sizeof(arr3) / sizeof(arr3[0])); i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	//my_memcpy����ʤ���ص�������
//	//my_memcpy(arr3+2, arr3, 20);
//
//	//memmove����ʤ���ڴ���ص�����
//	//memmove(arr3+2, arr3, 20);
//	//C���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
//	//���·��֣�VS2013�����µ�memcpy���Դ����ص�����
//	//memcpy(arr3+2, arr3, 20);
//	return 0;
//}





//
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset - �ڴ�����

int main()
{
	//char arr[10] = "";
	//memset(arr, '#', 10);
	int arr[10] = { 0 };
	//40 ���ֽ�
	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...

	memset(arr, 1, 10);//�����÷�

	return 0;
}





