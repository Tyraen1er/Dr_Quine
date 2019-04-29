#include <iostream>
#define FCT int main(){/*coucou*/std::string a="#include <iostream>%n#define FCT int main(){/*coucou*/std::string a=%s;decipher(a);return 0;}%n#define DEF %gfirst%g%n#define DEFI %gsecond%g%nvoid decipher(std::string to_print)%n{%n%t// du bitwise tu feras%n%tchar%tn = 10;%n%tchar%tb = 92;%n%tchar%tg = 34;%n%tchar%tt = 9;%n%tfor (int i = 0; i < to_print.size(); ++i)%n%t{%n%t%tif (to_print[i] == 37)%n%t%t{%n%t%t%t++i;%n%t%t%tif (to_print[i] == 115)%n%t%t%t%tstd::cout << g << to_print << g;%n%t%t%telse if (to_print[i] == 110)%n%t%t%t%tstd::cout << n;%n%t%t%telse if (to_print[i] == 98)%n%t%t%t%tstd::cout << b;%n%t%t%telse if (to_print[i] == 103)%n%t%t%t%tstd::cout << g;%n%t%t%telse if (to_print[i] == 116)%n%t%t%t%tstd::cout << t;%n%t%t}%n%t%telse%n%t%t%tstd::cout << to_print[i];%n%t}%n}%nFCT%n";decipher(a);return 0;}
#define DEF "first"
#define DEFI "second"
void decipher(std::string to_print)
{
	// du bitwise tu feras
	char	n = 10;
	char	b = 92;
	char	g = 34;
	char	t = 9;
	for (int i = 0; i < to_print.size(); ++i)
	{
		if (to_print[i] == 37)
		{
			++i;
			if (to_print[i] == 115)
				std::cout << g << to_print << g;
			else if (to_print[i] == 110)
				std::cout << n;
			else if (to_print[i] == 98)
				std::cout << b;
			else if (to_print[i] == 103)
				std::cout << g;
			else if (to_print[i] == 116)
				std::cout << t;
		}
		else
			std::cout << to_print[i];
	}
}
FCT
