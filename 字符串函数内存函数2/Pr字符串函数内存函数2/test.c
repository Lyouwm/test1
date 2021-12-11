#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int strncmp(const char *string1, const char *string2, size_t count);

//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abczdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}





//strstr - 查找字符串
//
//#include <assert.h>
////KMP 算法
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
//			return cur;//找到子串
//		}
//		
//		cur++;
//	}
//	return NULL;//找不到子串
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
//		printf("子串不存在\n");
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
//	//点分十进制的表示方式
//	char arr[] = "123@234.@234";
//	char*p = "@.";
//
//	//zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
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
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
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
//	struct S arr3[]= { {"张三",20},{"李四",30} };
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
//		//前->后
//	}
//	else
//	{
//		//后->前
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
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
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
//	//arr1中的数字拷贝到arr2中
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
//	//my_memcpy不能胜任重叠拷贝的
//	//my_memcpy(arr3+2, arr3, 20);
//
//	//memmove可以胜任内存的重叠拷贝
//	//memmove(arr3+2, arr3, 20);
//	//C语言标准说：memcpy函数可以拷贝不重叠的就可以了
//	//当下发现：VS2013环境下的memcpy可以处理重叠拷贝
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

//memset - 内存设置

int main()
{
	//char arr[10] = "";
	//memset(arr, '#', 10);
	int arr[10] = { 0 };
	//40 个字节
	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...

	memset(arr, 1, 10);//错误用法

	return 0;
}





