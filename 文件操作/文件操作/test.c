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
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	
//	//����·����д��
//	//fopen("C:\\2020_code\\84��\\test_5_6\\test_5_6\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('b',pfWrite);
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c",fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}



//
//�Ӽ�������
//�������Ļ.
//����&��Ļ�����ⲿ�豸
//
//����-��׼�����豸- stdin
//��Ļ-��׼����豸- stdout
//��һ������Ĭ�ϴ򿪵��������豸
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
//	//���ļ�
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
//	//д�ļ�
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
//	//�Ӽ��̶�һ��
//	//fgets(buf,1024,stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//��ʽ������ʽд�ļ�
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
//	//��ʽ������������
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
//	//��ʽ������������
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
//
//	return 0;
//}



//scanf/printf ����Ա�׼������/��׼������ĸ�ʽ������/������
//fscanf / fprintf ���������������/����������ĸ�ʽ������/������
//sscanf/sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ�������� 
			  // sprintf�ǰɸ�ʽ������������ַ���
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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
//	//printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
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
//	struct S s = { "����", 20, 55.6 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
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
//	//�����Ƶ���ʽ���ļ�
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
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}