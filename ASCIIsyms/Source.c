#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	printf("Номер\tСимвол\n");

	for (int i = 32; i <= 95; i++)
	{
		printf("%d\t%c\n", i, i);
	}

	return 0;
}