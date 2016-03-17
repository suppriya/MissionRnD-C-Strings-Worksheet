/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
int strings(char *str, int num, int l)
{
	int x=num,i;
	for (i = l; num> 0; i++)
	{
		x = num% 10;
		str[i] = x + '0';
		num = num / 10;
	}
	for (int k=i,j=l; j<k; k--, j++)
	{
		char ch = str[j];
		str[j] = str[k-1];
		str[k-1] = ch;

	}
	return i;
}

int strings1(char *str, int num, int l)
{
	int x = num, i;
	for (i = l; num>0; i++)
	{
		x = num % 10;
		str[i] = x + '0';
		num = num / 10;
	}
	str[i] = '-';
	for (int k = i+1, j = l; j<k; k--, j++)
	{
		char ch = str[j];
		str[j] = str[k - 1];
		str[k - 1] = ch;

	}
	return i;

}



void number_to_str(float number, char *str, int afterdecimal){
	int in = (int)number,i;
	float f = number - in;
	for (i = 1; i <= afterdecimal; i++)
	{
		f *= 10;
	}
	int f1 = (int)f;
	if (f1 < 0)
	{
		f1 = -f1;
	}
	if (in > 0)
	{
		strings(str, in, 0);
	}
	else if (in < 0)
	{
		in = -in;
		strings1(str, in, 0);
	}
	if (afterdecimal > 0)
	{
		str[i] = '.';
		strings(str, f1, i + 1);

	}
}