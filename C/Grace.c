#include <stdio.h>
#define FCT int main(){/*coucou*/char *a="#include <stdio.h>%c#define FCT int main(){%c*coucou*%cchar *a=%c%s%c;printf(a,10,47,47,34,a,34,10,34,34,10,34,34,10,10);return 0;}%c#define DEF %cfirst%c%c#define DEFI %csecond%c%cFCT%c";printf(a,10,47,47,34,a,34,10,34,34,10,34,34,10,10);return 0;}
#define DEF "first"
#define DEFI "second"
FCT
