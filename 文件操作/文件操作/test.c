#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	
//	//绝对路径的写法
//	//fopen("C:\\2020_code\\84班\\test_5_6\\test_5_6\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("test.txt","w");
//	if (pfWrite==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b',pfWrite);
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfRead = fopen("test.txt","r");
//	if (pfRead ==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c",fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}



//
//从键盘输入
//输出到屏幕.
//键盘&屏幕都是外部设备
//
//键盘-标准输入设备- stdin
//屏幕-标准输出设备- stdout
//是一个程序默认打开的两个流设备
//
//stdin FILE*
//stdout FILE*
//stderr FILE*
//


//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}



//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf=fopen("test.txt","r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf,1024,pf);
//	//printf("%s",buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n",pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	char buf[1024] = {0};
//	//从键盘读一行
//	//fgets(buf,1024,stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	gets(buf);
//	puts(buf);
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"bit"};
//	FILE* pf = fopen("text.txt","w");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	printf("%d %f %s",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//
//	//格式化的输入数据
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
//
//	return 0;
//}



//scanf/printf 是针对标准输入流/标准输出流的格式化输入/输出语句
//fscanf / fprintf 是针对所有输入流/所有输出流的格式化输入/输出语句
//sscanf/sprintf sscanf是从字符串中读取格式化的数据 
			  // sprintf是吧格式化数据输出成字符串
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"abcdef"};
//	struct S tmp = {0};
//	char buf[1024] = {0};
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
//	//printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),&(tmp.arr));
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三", 20, 55.6 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf",tmp.name,tmp.age,tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}