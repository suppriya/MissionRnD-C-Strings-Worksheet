/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
char removeSpaces(char *str) {
	char che;
	int j = 0, len = 0;
	if ((str))
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				len++;
				che = str[i];
			}
		}
		for (int i = j + 1; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
			{
				int k = i;
				for (int j = i + 1; str[j] != '\0'; j++)
				{
					if (str[j] != ' ')
					{
						char temp = str[k];
						str[k] = str[j];
						str[j] = temp;
						break;
					}
				}
				k++;
			}
			if ((i == len - 1) && (str[i] == che))
			{
				str[i + 1] = '\0';
				break;
			}
		}
	}
	else
	return '\0';
}
