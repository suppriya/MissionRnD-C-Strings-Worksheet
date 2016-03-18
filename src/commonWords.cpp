/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	int c = 0;
	char** ans = (char**)malloc(sizeof(char*) * 5);
	if ((str1 != NULL) || (str2 != NULL))
	{
		int  s = 0,i=0,j=0;
		for (i = 0; i < 5; i++)
		{
			ans[i] = (char*)malloc(sizeof(char) * 31);
		}
		for (int a = 0; str1[a] != '\0'; a++)
		{
			if ((a == 0) || (str1[a] == ' '))
				{
					while (str1[a] == ' ')
					{
						a = a + 1;
					}
					if (str1[a] == '\0')
					{
						break;
					}
					for (int a1 = 0; str2[a1] != '\0'; a1++ )
					{
						if ((a == 0) || (str2[a] == ' '))
						 {
							 while (str2[a] == ' ')
							 {
								 a = a + 1;
							 }
							 if (str2[a] == '\0')
							 {
								 break;
							 }
						 }

						for (i = a,j = a1; ((str1[i] != '\0' && str2[j] != '\0') || (str1[i] != ' ' && str2[j] != '\0') || (str1[i] != '\0' && str2[j] != ' ') || (str1[i] != ' '&&str2[j] != ' ')); i++, j++)
						{
							if ((str1[i] != str2[j]) || (str1[i]==' '&& str2[j] == ' '))
							{
								break;
							}
						}
						if ((str1[i] == '\0'&& str2[j] == '\0') || (str1[i] == '\0'&& str2[j] == ' ') || (str1[i] == ' '&& str2[j] == ' ') || (str1[i] == ' '&& str2[j] == '\0'))
						{
							c++;
							char* str = (char*)malloc(sizeof(i + 1 - a));
							int q = 0;
							for (int k = a; k < i; k++)
							{
								str[q++]=str1[k];
							}
							str[q] = '\0';
							ans[s++] = str;
						}
					}
					}
		}
	}
	if (c > 0)
	{
		return ans;
	}
	return NULL;
}
