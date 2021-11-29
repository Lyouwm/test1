#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>


//
//F5-启动调试-和F9配合使用的
//

//断点 F9切换断点

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &i);
//
//
//	//VC6.0 环境下 <=10 就死循环了
//	//gcc 编译器 <=11 就死循环了
//	//VS2013     <=12 死循环
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}






//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	
//	return 0;
//}





//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}




//int main()    //找出问题
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);//3 1!+2!+3! = 1+2+6=9 
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1; //每次从1开始
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src; //加\0
//
//}

//#include <assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src!=NULL); //断言
//
//	//把src指向的字符串拷贝到dest指向的空间 包含'\0'
//	while (*dest++ = *src++)
//	{
//			;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "bit1";
//	//my_strcpy(arr1,arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//}








//int main()
//{
//	const int num = 10;
//	int n = 100;
//
//	     int  *       p = &num;
//	// const 放在指针变量的*左边时，修饰的是*p,也就是说：不能通过p来改变*p（num）的值
//	// const 放在指针变量的*右边是，修饰的是指针变量p本身，p不能被改变了
//
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}







//int my_strlen(const char *str)      //模拟strlen
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



/**
 * @file 1129DemoWork.cpp
 * @author LIUFEIFAN
 * @brief  字符串作业
 * @version 0.4
 * @date 2021-11-29
 *
 * @copyright Copyright (c) 2021
 *
 */

//int count(char csarr[],char ctarr[],int szs,int szt)
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 0; i < szs; i++)
//	{
//		
//		if (csarr[i] ==ctarr[0]&&csarr[i + 1] ==ctarr[1])
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//
//	char csarr[] = "thisisisianapple";
//	char ctarr[] = "th";
//	int i = 0;
//	int szs = sizeof(csarr) / sizeof(csarr[0])-1;
//	int szt = sizeof(ctarr) / sizeof(ctarr[0])-1;
//	printf("主  串：");
//	for (i = 0; i < szs; i++)
//	{
//		printf("%c",csarr[i]);
//	}
//	printf("\n");
//	printf("模式串：");
//	for (i = 0; i < szt; i++)
//	{
//		printf("%c",ctarr[i]);
//	}
//	printf("\n");
//	/*count(csarr,ctarr,szs,szt);*/
//	printf("模式串在主串中出现的次数为：%d\n",count(csarr, ctarr, szs, szt));
//}




//求一个模式串在主串中出现的次数
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char S[100], T[20];
	char ch1, ch2;
	printf("请输入主字符串:\n");
	int i = 0, j = 0;
	while ((ch1 = getchar()) != '\n')
	{
		S[i] = ch1;
		i++;
	}
	printf("请输入要筛选的字符串(模式串):\n");
	while ((ch2 = getchar()) != '\n')
	{
		T[j] = ch2;
		j++;
	}

	int m, n;//m为S的下标，n为T的下标
	m = n = 0;
	int num = 0;//num用于记录选定单词出现的次数
	while (m <= i && n <= j)
	{
		if (S[m] == T[n])
		{
			m++;
			n++;
		}
		else
		{
			m = m - n + 1;
			n = 0;
		}
		if (n == j)
		{
			num++;
		}
	}
	if (m == i + 1)  //主串到头了
	{
		printf("出现的次数是%d\n", num);
	}

}


