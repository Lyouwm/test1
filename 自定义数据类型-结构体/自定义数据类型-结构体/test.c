#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ���ṹ������
//����һ��ѧ�����ͣ������ѧ������������ѧ������������
//����ѧ��������-����+�绰+�Ա�+����

//struct Stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//} s4,s5,s6;
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
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
//�ṹ���������
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


//�ṹ���ڴ����
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





//����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	3
//	double d;//8 4 4
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//
////����Ĭ�϶�����λ1
////#pragma pack(1)
////struct S
////{
////	char c1;//1
////	//3
////	double d;//8 4 4
////};
////#pragma pack()
//////ȡ�����õ�Ĭ�϶�����
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



////**************************************λ��

//
//λ�� - ������λ
//

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
////47bit - 6���ֽ�*8 = 48bit
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8���ֽ�
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




//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
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
////c���Ե�Դ����---->��ִ�г���
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




//����-������-������

//union Un
//{
//	char c;//1
//	int i; //4
//};
////5���ֽ�
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
//	//����1����ʾС��
//	//����0����ʾ���
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
//	//����1����ʾС��
//	//����0����ʾ���
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}

	//int a = 0x11223344;
	//
	//�͵�ַ-------------------->�ߵ�ַ
	//....[][][][][11][22][33][44][][][][][][][]...  ����ֽ���洢ģʽ
	//....[][][][][44][33][22][11][][][][][][][]...  С���ֽ���洢ģʽ
	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
	//��С���ֽ�������
	//

//	return 0;
//}

//���淽���ж�
//int main()
//{
//	int a = 1;
//	int b = *((char*)&a);
//	if (b==1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
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

