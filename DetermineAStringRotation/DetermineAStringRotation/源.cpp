#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int DetermineStrRoatation(char s1[])
{
	char s2[100] = {0};
	printf("请输入要查找的字符串\n");
	scanf("%s", s2);
	if (strlen(s1)==strlen(s2))
	{
		char temp[200] = { 0 };
		strcpy(temp, s1);
		strcat(temp,s1);
		if (strstr(temp, s2) != NULL)
		{
			printf("是旋转得到\n");
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[] = "AABCD";
	int result = DetermineStrRoatation(s1);
	printf("返回值是%d\n",result);
	return 0;
}