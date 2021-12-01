#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz); //
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}





//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}





//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}




//int main()
//{
//	const char* p = "abcdef";//"abcdef" 是一个常量字符串
//	//*p = 'W';
//	printf("%s\n", p);
//
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//
//	return 0;
//}





//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("呵呵");
//	}
//	else
//	{
//		printf("哈哈");
//	}
//}




//指针数组 是数组，用来存放指针的

//int main()
//{
//	int arr[10] = {0};//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d  ",*(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()  //数组指针
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa == arr
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	*/
//	return 0;
//}




//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	//print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//	print2(arr, 3, 5);//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int i = 0;
//	
//	int(*p)[5] = arr;//数组指针
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			//printf("%d ",*(p[i]+j));
//			//printf("%d ", p[i][j]);
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}



//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//
//	//数组指针 - 指向数组
//	//int *p3; // 整形指针 - 指向整形的指针
//	//char* p4;//字符指针 - 指向字符的
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//
//	int(* parr3[10])[5];
//	return 0;
//}





//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err
//{}
//void test3(int* arr) //err
//{}
//
//void test4(int **arr) //err
//{}
//
//void test5(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//
//	return 0;
//}



//void print(int *p, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	return 0;
//}


//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}



//void test(int **p)
//{}
//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];//
//	test(arr);//指针数组也可以
//
//	return 0;
//}


//int main(void)
//{
//	int input = 0;
//	printf("你认为这是b站最好的c教程吗 ? （1 / 0） : \n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("英雄所见略同\n");
//	else
//	{
//		printf("你确定！\n");
//		printf("你再想想！\n");
//	}
//	while (input == 0)
//	{
//		scanf("%d", &input);
//		if (input == 1)
//			printf("对喽\n");
//		else
//			printf("你确定！\n");
//	}
//	return 0;
//}




//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//
//	//arr;
//	//printf("%d\n", Add(a, b));
//
//	//&函数名 和 函数名 都是函数的地址
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//
//	int (*p)(int, int) = &Add;
//	printf("%d ", (*p)(2, 3));
//
//	//int(*p)(int, int) = Add;
//	//printf("%d ",(*p)(2,3));
//	return 0;
//}


//void print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	char (*p)(char*)=&print;
//	(*p)("hello ");
//	return 0;
//}




// signal是一个函数声明
// signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
// signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void

//void(* signal(int, void(*)(int)) )(int);
//
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int uint;


//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int(*fun)(int, int);
//int main()
//{
//	fun = add;
//	printf("fun(1,2)=%d \n",(*fun)(1,2));
//	fun = &sub;
//	printf("fun(1,2)=%d  \n",fun(1,2));
//
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	//int* arr[5];//
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
////2. 写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

