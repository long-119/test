#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int a, i=1;
	while (1)
	{
		system("cls");
		a = 1;
		while (a<=i-1)
		{
			printf(" ");
			a = a + 1;
		}
		printf("H");
		Sleep(1000);
		i = i + 1;
	}
	system("pause");
	return 0;
}
