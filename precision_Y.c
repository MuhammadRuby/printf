#include "main.h"

/**
 * get_precision - Calculate
 * @format: Formatted string
 * @i: List of arguments
 * @list: list
 * Return: Precision
 */
int get_precision(const char *format, int *i, va_list list)
{
	int cur_i = *i + 1;
	int prec = -1;

	if (format[cur_i] != '.')
		return (prec);

	prec = 0;

	for (cur_i += 1; format[cur_i] != '\0'; cur_i++)
	{
		if (is_digit(format[cur_i]))
		{
			prec *= 10;
			prec += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*')
		{
			cur_i++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = cur_i - 1;

	return (prec);
}
