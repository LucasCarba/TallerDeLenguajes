#include <stdio.h>
#include <string.h>

main()
{
	char cadena[]="HOLA MUNDO";
	char a,b;
	char *p;

	p = cadena;
	while (*p != '\0') {
		if (*p == 'a') {
                p=b;
		}
		p++;
	}

	printf(" %s", p);
}
