#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c,state;
    state = OUT;

    while (c=getchar()!=EOF){
        if (c!=' ') {
            putchar(c);
            state=OUT;
        }
        if (c==' ' && state==OUT) {
            putchar(c);
            state = IN;
        }
        if (c==' ' && state==IN);
    }
}