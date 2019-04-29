#include <iostream>

using namespace std;

// Do it. Or do not. There is no try.
void decipher(string to_print)
{
	// du bitwise tu feras
	char	n = 10;
	char	b = 92;
	char	g = 34;
	char	t = 9;
	for (unsigned int i = 0; i < to_print.size(); ++i)
	{
		if (to_print[i] == 37)
		{
			++i;
			if (to_print[i] == 115)
				cout << g << to_print << g;
			else if (to_print[i] == 110)
				cout << n;
			else if (to_print[i] == 98)
				cout << b;
			else if (to_print[i] == 103)
				cout << g;
			else if (to_print[i] == 116)
				cout << t;
		}
		else
			cout << to_print[i];
	}
}

int main()
{
	string	to_print = "#include <iostream>%n%nusing namespace std;%n%n// Do it. Or do not. There is no try.%nvoid decipher(string to_print)%n{%n%t// du bitwise tu feras%n%tchar%tn = 10;%n%tchar%tb = 92;%n%tchar%tg = 34;%n%tchar%tt = 9;%n%tfor (unsigned int i = 0; i < to_print.size(); ++i)%n%t{%n%t%tif (to_print[i] == 37)%n%t%t{%n%t%t%t++i;%n%t%t%tif (to_print[i] == 115)%n%t%t%t%tcout << g << to_print << g;%n%t%t%telse if (to_print[i] == 110)%n%t%t%t%tcout << n;%n%t%t%telse if (to_print[i] == 98)%n%t%t%t%tcout << b;%n%t%t%telse if (to_print[i] == 103)%n%t%t%t%tcout << g;%n%t%t%telse if (to_print[i] == 116)%n%t%t%t%tcout << t;%n%t%t}%n%t%telse%n%t%t%tcout << to_print[i];%n%t}%n}%n%nint main()%n{%n%tstring%tto_print = %s;%n%tdecipher(to_print);%n%treturn 0;%n}%n";
	decipher(to_print);
	return 0;
}
