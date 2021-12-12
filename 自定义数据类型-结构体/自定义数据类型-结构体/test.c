#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄

//struct Stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//} s4,s5,s6;
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//
//	return 0;
//}
//
//结构体的自引用
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//
//int main()
//{
//	return 0;
//}



//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = {'c', 100, 3.14, "hello bit"};
//	struct S s = { 'c', {55.6, 30}, 100, 3.14, "hello bit" };
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//
//	return 0;
//}


//结构体内存对齐
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));//?
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//?
//	struct S3 s3;
//	printf("%d\n", sizeof(s3));
//	/*struct S4 s4;
//	printf("%d\n", sizeof(s4));*/
//	return 0;
//}





//设置默认对齐数位4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	3
//	double d;//8 4 4
//};
//#pragma pack()
////取消设置的默认对齐数
//
//
////设置默认对齐数位1
////#pragma pack(1)
////struct S
////{
////	char c1;//1
////	//3
////	double d;//8 4 4
////};
////#pragma pack()
//////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//
//
//	return 0;
//}



//#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//	int s;
//};
//
//int main()
//{
//	//offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	printf("%d\n", offsetof(struct S, s));
//
//
//	return 0;
//}



////**************************************位段

//
//位段 - 二进制位
//

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
////47bit - 6个字节*8 = 48bit
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8个字节
//
//	return 0;
//}

//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}




//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE,
//	FEMALE = 9,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
////c语言的源代码---->可执行程序
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//
//	//enum Color c = 2;//int 
//
//	int color = RED;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//
////	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//
//	return 0;
//}
//




//联合-联合体-共用体

//union Un
//{
//	char c;//1
//	int i; //4
//};
////5个字节
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}
//


//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;//
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	
//	int a = 1;
//	int ret = check_sys();
//
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}

	//int a = 0x11223344;
	//
	//低地址-------------------->高地址
	//....[][][][][11][22][33][44][][][][][][][]...  大端字节序存储模式
	//....[][][][][44][33][22][11][][][][][][][]...  小端字节序存储模式
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小端字节序问题
	//

//	return 0;
//}

//常规方法判断
//int main()
//{
//	int a = 1;
//	int b = *((char*)&a);
//	if (b==1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}

int  main()
{
	union Un1
	{
		char c[5]; 
		int i; 
	};
	union Un2
	{
		long c[5];
		int i;
	};
	printf("%d\n",sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

}

