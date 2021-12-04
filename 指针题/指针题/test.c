#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//int main()
//{
//	//数组名是首元素的地址
//	//1. sizeof(数组名) - 数组名表示整个数组
//	//2. &数组名 - 数组名表示整个数组
//	
//	//一维数组
//	int a[] = { 1, 2, 3, 4 };//4*4 = 16
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
//	printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示收元素的值，a+0 还是首元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
//	printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址
//
//
//	printf("*********************\n");
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	printf("*********************\n");
//
//
//	printf("%d\n", sizeof(arr));//sizeof计算机的是数组大小，6*1 = 6字节
//	printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
//	printf("%d\n", sizeof(*arr));   //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//
//	return 0;
//}






//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]相当于第一行做为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	//所以 a[0]+1 就是第一行第二个元素的地址- 地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4- *(a[0] + 1)) 是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1)); //4     //a是二维数组的数组名，没有sizeof(a)，也没有&(a),所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1]) 计算第二行的大小,单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4, 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//a是首元素地址-第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//
//	//char* p = "abcdef"; //p存的a的地址
//	//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));//4/8 - p+1 得到的是字符b的地址
//	//printf("%d\n", sizeof(*p));//1 *p 就是字符串的第一个字符 - 'a'
//	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0] == *(arr+0)    p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p));//4/8  地址
//	//printf("%d\n", sizeof(&p + 1));//4/8 地址 
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 地址
//
//
//	//char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//	//char arr[] = "abcdef";
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err 
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6 &arr - 数组的地址-数组指针 char(*p)[7] = &arr;
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	//printf("%d\n", sizeof(arr));//sizeof(arr)计算的数组的大小，单位是字节：7
//	//printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小-arr + 0是首元素的地址
//	//printf("%d\n", sizeof(*arr));   //1 *arr 是首元素，sizeof(*arr)计算首元素的大小
//	//printf("%d\n", sizeof(arr[1])); //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	//printf("%d\n", sizeof(&arr));   //4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 第二个元素的地址
//
//	return 0;
//}









//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}








struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节

int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	return 0;
}



//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式 初始化为{{1,3},{5,0},{0,0}}
//	int *p;
//	p = a[0];
//
//	printf("%d\n", p[0]); //p[0]=*(p+0)
//
//	return 0;
//}





//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//int (*)[4]  ----- int (*) [5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;   //p[4][2]=*(*(p+4)+2)
//}




//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int* p = arr;
//	//*(p + 2) == p[2] ==> *(arr+2) == arr[2]
//	arr[2]; // ==> *(arr+2)
//	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int *ptr1 = (int *)(&aa + 1); //&aa整个数组的地址 +1跳过数组
//	int *ptr2 = (int *)(*(aa + 1));// aa[1]  //aa第一行的地址   *(aa+1)=aa[1]
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));*/
//
//	return 0;
//}




//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//
//	pa++;
//	printf("%s\n", *pa);//
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";//存a的地址
//	return 0;
//}




//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}