//×Ö·û´®·­×ªÀı×Ó
#include <stdio.h>
#include <string.h>
int main()
{
	void resver(char *str);
	char str[]="This is a pig";
	resver(str);
	puts(str);
	return 0;
}
void resver(char *str)
{
	char *start,*end,temp;
	start=str;
	end=start+strlen(str)-1;
	while (start<end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
