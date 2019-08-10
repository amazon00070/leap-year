#include <stdio.h>
void main(void)
{
	int year = 0;
	while(year<=2019)
	{
		int case_i=0;
		if (year % 4 == 0){ case_i = 1; }
		else {}
		if (year % 100 == 0) { case_i = 0; }
		else {}
		if (year % 400 == 0) { case_i = 1; }
		else {}
		switch (case_i)
		{
		case 0:
			break;
		case 1:
			printf("%8d", year);
			break;
		default:
			break;
		}
		year++;
	}
}
