#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//一维数组
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr1));//15(随机值)
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < (int)strlen(arr); i++)    //strlen()函数默认返回一个无符号整型值
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}






//一维数组在内存中的存储
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]); //数组在内存中是连续存放的
//	}
//	return 0;
//}







//二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };     //二维数组的列不能省略
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//二维数组在内存中的存储
int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };     //二维数组的列不能省略
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);  //二维数组在内存中也是连续存储的
		}
	}
	return 0;
}