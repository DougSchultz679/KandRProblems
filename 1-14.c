#include <stdio.h>
#define IN 1 
#define OUT 0

main(){

    int c, i,j, maxcount;

    int nLetterCount[91];
	maxcount = 0;

    for (i=0;i<91;i++)
	    nLetterCount[i]=0;

    while((c=getchar())!=EOF){
	    if (c>=65 && c<=90)
		    ++nLetterCount[c];
		else if (c>=97 && c<=122){
			c = c-32;
			++nLetterCount[c];
		}
		if (nLetterCount[c]>maxcount)
			maxcount=nLetterCount[c];
    }
	
printf(" ***** Letter Incidence Histogram ***** \n\n");
for (i=maxcount;i>0;i--){
	printf("%2d | ", i);
	for(j=65;j<91;j++){
		if (nLetterCount[j]>0){
			if (nLetterCount[j]>=i){
				printf(" # ");
			} else
				printf("   ");
		}
		if (j==90) putchar('\n');
	}
}
printf("   + ");
for (i=65;i<91;i++){
	if (nLetterCount[i]>0){
		printf("===");
	}
}
printf("\n     ");
for (i=65;i<91;i++){
	if (nLetterCount[i]>0){
		putchar(' ');
		putchar(i);
		putchar(' ');
	}
}
		
}

