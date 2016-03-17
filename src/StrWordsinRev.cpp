/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>


void str_words_in_rev(char *input, int len){
	int i, k;
	char ch;
	
	for (i = 0, k = len - 1; i <= (len / 2), k >= (len / 2); k--, i++)
	{
		ch = input[i];
		input[i] = input[k];
		input[k] = ch;
	}
	int n1 = 0, j, j1;

	
		for (i = 0; i<=len; i++)
		{
			
			if((input[i] == ' ') || (input[i]=='\0'))
			{
				int n2 = i;
				for (j = n1, j1 = n2 - 1; j < j1; j++, j1--)
				{
					char temp = input[j];
					input[j] = input[j1];
					input[j1] = temp;
				}
				n1 = n2 + 1;
			}
		}

}
