#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//һά����
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr1));//15(���ֵ)
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < (int)strlen(arr); i++)    //strlen()����Ĭ�Ϸ���һ���޷�������ֵ
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}






//һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]); //�������ڴ�����������ŵ�
//	}
//	return 0;
//}







//��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };     //��ά������в���ʡ��
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



//��ά�������ڴ��еĴ洢
int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };     //��ά������в���ʡ��
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);  //��ά�������ڴ���Ҳ�������洢��
		}
	}
	return 0;
}