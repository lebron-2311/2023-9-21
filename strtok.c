#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	char arr[] = "s1151784@s.eduhk.hk";
//	char buf[100] = { 0 };
//	strcpy(buf, arr);//��arr��������ݿ�����buf��
//	char* p = "@.";
//	char *s= strtok(buf, p);//������buf�в���pָ����ָ���Ԫ��
//	printf("%s\n", s);
//	s = strtok(NULL, p);
//	printf("%s\n", s);
//	s = strtok(NULL, p);
//	printf("%s\n", s);
//	s = strtok(NULL, p);
//	printf("%s\n", s);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0 };
//	int buf[]= { 1,2,4,5,7 };
//	strcpy(arr, buf);//str����
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", buf[i]);
//	}
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
int main()
{
	char arr[] = "https://mail.google.com/mail/u/0/#inbox";
	char buf[100] = { 0 };
	strcpy(buf, arr);//��arr��������ݿ�����buf��
	char* p = ":/.";
	char* s = strtok(buf, p);//������buf�в���pָ����ָ���Ԫ��
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	return 0;
}