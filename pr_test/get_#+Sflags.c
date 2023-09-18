#include <main.h>

/**
  *get_#+Sflags - to cal. the active flag
  *@format: fir.arg as string
  *@i: sec.arg to take args
  *
  *Return: flags
  */

int get_#+Sflags(const char *format, int *i)
{
	int i, j;
	int flags;
	const char flag_char[];
	const int flag_arr[];

	flag_char[] = {'#', ' ', '+'};
	flag_arr[]= {f_hash, f_space, f_plus};
	for (j = *i + 1; format[j] != '\0'; j++)
	{
		for (i = 0; flag_char[i] != '\0'; i++)
		{
			if (format[j] == flag_char[i])
				flags |= flag_arr[i];
				break;
		}
		if (flag_char[i] == 0)
			break;
	}
	*i = j - 1;
	x = flags;
	return (x);
}
