#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void print(int x)
{
	if (x>9)
	{
		print( x / 10);
	}
	printf("%d ", x % 10);
}
int main()
{
	int i = 0;
	printf("����һ������");
	scanf("%d", &i);
	print(i);
	return 0;
}

#include <stdio.h>

int fun(char s[], int c)
{
	char *q = s;
	for (; *q; q++)//��ָ�뿪ʼ��λ
	{
		if (*q != c)
			*(s++) = *q;
	}
	*s = 0;
	return *s;
}
int main()
{
	char ch;
	static char str[] = "Visual basic and visual c++";
	printf("ԭʼ�ַ���:%s/n", str);
	printf("����һ���ַ�:");
	scanf("%c", &ch);
	fun(str, ch);
	printf("str[]=%s/n", str);
}

#include <stdio.h> 
#include <assert.h>
char * my_strcat(char *dst, char *src)
{
	char * ret = dst;
	assert(dst != NULL && src != NULL);
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return ret;
}

int main()
{
	char a[] = "hello";
	char *p = "would like";
	printf("%s\n", my_strcat(a, p));
	return 0;
}
