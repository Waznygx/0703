#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	//int a = -1;
//	//int b = a >> 1;
//	//printf("%d", b);
//	int a = 5;
//	int b = a << 1;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}*/
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[5] = { 0 };
//	int* p = NULL;
//	printf("%d\n", !a);
//	printf("%d\n", !0);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [8]));
//	return 0;
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	/*int s = 0;
//	int a = (float)3.14;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%lf\n", a);*/
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\ni=%d\n",a,b,c,d,i);
//	return 0;
//}

//int fun()
//{
//	 int i = 1;
//	return ++i;
//}
//int main()
//{
//	/*float f = 3.14;
//	int num = f;
//	printf("%d\n", num);*/
//	int ret=fun()+fun();
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
