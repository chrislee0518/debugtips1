#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int add1(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int i = 0;
//	//for (i = 0; i < 100; i++)
//	//{
//	//	printf("%d ", i);
//	//}
//	int a = 1;
//	int b = 2;
//
//	int ret=add1(a, b);
//	//system("pause");
//	printf("%d", ret);
//
//	return 0;
//}
//int main()//32位死循环 i=arr[12]
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//实现strcpy函数

//void my_strcpy(char* dest, char* src,int sz)//自编
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	while(*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)//优化
//{
//	int i = 0;
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)//返回的是赋值后的结果
//		{
//			;
//
//		}
//	}
//	
//
//}

//char* my_strcpy(char* dest, const char* src)//优化
//{
//	int i = 0;
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++ )//返回的是赋值后的结果
//	{
//		;
//	}
//	return ret;
//
//}
//
//
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);
//	char* ret1=my_strcpy(arr1, arr2);
//	printf("%s", ret1);
//	return 0;
//}

//实现strlen函数

int my_strlen(const char* test)
{
	assert(test != NULL);//保证指针有效性
	int count = 0;
	while (*test != '\0')
	{
		count++;
		test++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}