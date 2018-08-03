#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c;
	
	while(c=getchar()){
		if (c=='\t') printf("\\t");
		if (c=='\b') printf("\\b");
		if (c=='\\') printf("\\");
		if (c!='\t'&&c!='\b'&&c!='\\') putchar(c);
	}
	return 0;
}