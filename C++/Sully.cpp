#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string decipher(string to_print, int a)
{
	// du bitwise tu feras
	string	res;
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
				res += string() + g + to_print + g;
			else if (to_print[i] == 110)
				res += n;
			else if (to_print[i] == 98)
				res += b;
			else if (to_print[i] == 103)
				res += g;
			else if (to_print[i] == 116)
				res += t;
			else if (to_print[i] == 97)
				res += to_string(a);
		}
		else
			res += to_print[i];
	}
	return res;
}

int main()
{
	int a = 5;
	ofstream ofs(string("Sully_") + to_string(a) + ".cpp");
	string all="#include <fstream>%n#include <iostream>%n#include <string>%n%nusing namespace std;%n%nstring decipher(string to_print, int a)%n{%n%t// du bitwise tu feras%n%tstring%tres;%n%tchar%tn = 10;%n%tchar%tb = 92;%n%tchar%tg = 34;%n%tchar%tt = 9;%n%tfor (int i = 0; i < to_print.size(); ++i)%n%t{%n%t%tif (to_print[i] == 37)%n%t%t{%n%t%t%t++i;%n%t%t%tif (to_print[i] == 115)%n%t%t%t%tres += string() + g + to_print + g;%n%t%t%telse if (to_print[i] == 110)%n%t%t%t%tres += n;%n%t%t%telse if (to_print[i] == 98)%n%t%t%t%tres += b;%n%t%t%telse if (to_print[i] == 103)%n%t%t%t%tres += g;%n%t%t%telse if (to_print[i] == 116)%n%t%t%t%tres += t;%n%t%t%telse if (to_print[i] == 97)%n%t%t%t%tres += to_string(a);%n%t%t}%n%t%telse%n%t%t%tres += to_print[i];%n%t}%n%treturn res;%n}%n%nint main()%n{%n%tint a = %a;%n%tofstream ofs(string(%gSully_%g) + to_string(a) + %g.cpp%g);%n%tstring all=%s;%n%tofs << decipher(all, a);%n%treturn 0;%n}%n";
	ofs << decipher(all, a);
	return 0;
}
