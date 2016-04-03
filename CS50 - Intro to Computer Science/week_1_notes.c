//      WEEK 1 NOTES
// clang -o week_1 week_1.c
// make week_1.c
// ./week_1


#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string s = GetString();
	printf("hello, %s\n", s);

	/* Data Types (C)
	bool
	char
	double
	float
	int
	long long
	string
	*/

	/* format codes
	%c = char
	%i = int
	%f = float %.1f prints to 1 decimal place
	%lld = long
	%s = string

	/n = new line
	\r = 
	\t = tab
	\'
	\''
	\\
	\0
	*/

	/* cs50 specific
	GetChar
	GetDouble
	GetFloat
	GetLongLong
	GetString
	*/

	// CONDITIONALS
	if (i > 1)
	{
		i--;
	}
	else if (i = 0)
	{
		i = 0;
	}
	else
	{
		i++;
	}

	if (a && b || c)
	{

	}

	switch (expression)
	{
		case i:
			// do this
			break;
		case j:
			// do that
			break;
		default:
			// do this other thing
			break;
	}

	// LOOPS
	for (initializations; condition; updates)
	{
		// do this a number of times
	}
}