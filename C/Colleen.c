#include <stdio.h>
void	ft_print()
{
	char	*all = "#include <stdio.h>%cvoid%cft_print()%c{%c%cchar%c*all = %c%s%c;%c%cprintf(all, 10, 9, 10, 10, 9, 9, 34, all, 34, 10, 9, 10, 10, 9, 10, 9, 10, 10, 9, 9, 10, 9, 10, 10);%c}%c//%chello world out of fct%cint%cmain()%c{%c%c//%chello world in main%c%cft_print();%c}%c";
	printf(all, 10, 9, 10, 10, 9, 9, 34, all, 34, 10, 9, 10, 10, 9, 10, 9, 10, 10, 9, 9, 10, 9, 10, 10);
}
//	hello world out of fct
int	main()
{
	//	hello world in main
	ft_print();
}
