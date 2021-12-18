#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当申请的空间不再使用 应该还给系统
//	free(p);
//
//	return 0;
//}



//int main()
//{
//
//	int* p=(int*)calloc(10, sizeof(int));//开辟并初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//释放动态开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int* p=(int*)malloc(20);
//	if (p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	
//	//20个不够 希望有40个字节的空间 可以用realloc
//	
//		//realloc使用的注意事项：
////	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
////	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
////	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
////	//  最后返回新开辟的内存空间地址
////	//3. 得用一个新的变量来接受realloc函数的返回值
////	//
////	//
//	int*ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}



#include <windows.h>

//int main()
//{
//	//1. 对NULL指针解引用操作
//	//int *p = malloc(40);
//	////p进行相关的判断
//	//*p = 10;//malloc开辟空间失败-对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	//int *p = (int*)malloc(40);//10个int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////越界
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3. 对非动态开辟内存使用free释放
//	//int a = 10;
//	//int *p = &a;
//	////...
//	////对非动态开辟内存使用free释放
//	//free(p);
//	//p = NULL;
//
//	//4. 使用free释放动态开辟内存的一部分
//	//int*p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	//// 使用free释放动态开辟内存的一部分
//	//free(p);
//	//p =NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.动态开辟内存忘记释放（内存泄漏）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//
//	return 0;
//}




//int main()
//{
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//
//
//	//int *p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}




//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	//char*str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("abcdef");
//
//	return 0;
//}




//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//
//	//char*str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("abcdef");
//
//	return 0;
//}




//改正1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	//static int a = 10;//静态区
//	int a = 10;//栈区 
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;//
//	return 0;
//}



//int* test()
//{
//	int *ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int *p = test();
//
//	return 0;
//}




//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}





//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//未知大小的
//};
//
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S*ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int *ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}