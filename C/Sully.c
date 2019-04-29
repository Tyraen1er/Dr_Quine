#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
	int a=5;
	char *all="#include <stdio.h>%c#include <string.h>%cint main()%c{%c%cFILE *fp;%c%cint a=%d;%c%cchar *all=%c%s%c;%c%cchar *name = NULL;%c%csprintf(name, %cSully_%cd.c%c, a);%c%cfp=fopen(name, %cw%c);%c%cfprintf(fp, all, 10, 10, 10, 10, 9, 10, 9, a, 10, 9, 34, all, 34, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 10);%c%cfclose(fp);%c%creturn 0;%c}%c";
	char *name = NULL;
	sprintf(name, "Sully_%d.c", a);
	fp=fopen(name, "w");
	fprintf(fp, all, 10, 10, 10, 10, 9, 10, 9, a, 10, 9, 34, all, 34, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 10);
	fclose(fp);
	return 0;
}
