#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	printf("Íîìåð\tÑèìâîë\n");

	for (int i = 32; i <= 126; i++)
	{
		printf("%d\t%c\n", i, i);
	}

	return 0;
}
