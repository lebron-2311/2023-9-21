//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <string.h>
//#include <assert.h>
//const char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp;
//	const char* s1;
//	const char* s2;
//	assert(str1 && str2);
//	if (*str2 == '\0')
//		return str1;
//
//	cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//	
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	const char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("’“≤ªµΩ\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}