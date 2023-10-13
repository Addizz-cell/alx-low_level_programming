#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting
 * main - Entry point 
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day);

int main(void)
{
	int month = 4;
	int day = 15;

	int day_of_year = convert_day(month, day);


	printf("The day of the year is: %d\n", day_of_year);

	return (0);
}

int convert_day(int month, int day)
{
	int day_of_year = 0;

	switch (month)
	{
		case 1:
			day_of_year = day;
			break;
		case 2:
			day_of_year = 31 + day;
			break;
		case 3:
			day_of_year = 31 + 28 + day;
			break;
		case 4:
			day_of_year = 31 + 28 + 31 + day;
			break;

		default:
			printf("Invalid month\n");
			break;
	}
	return (day_of_year);
}
