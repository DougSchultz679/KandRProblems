#include <stdio.h>
#define IN 1 
#define OUT 0

main(){

    int c, i,j, marker,charcount, maxcount;

    int nWordLengths[45];
    marker=OUT;
	maxcount=0;

    for (i=0;i<45;i++)
	    nWordLengths[i]=0;

    while((c=getchar())!=EOF){
	    if (marker==OUT && ((c>=65 && c<=90) || (c>=97 && c<=122))){
	    	marker = IN;
		    ++charcount;
	    } else if (marker==IN && (c==39 || (c>=65 && c<=90) || (c>=97 && c<=122))){
		    ++charcount;
	    } else {
		    marker = OUT;
		    ++nWordLengths[charcount-1];
			if(maxcount<nWordLengths[charcount-1])
				maxcount=nWordLengths[charcount-1];
		    charcount=0;
	    }
    }
printf(" ***** Word Size Histogram ***** \n\n");
for (i=maxcount;i>0;i--){
	printf("%2d | ",i);
	for(j=0;j<45;j++){
		if (nWordLengths[j]>0){
			if (nWordLengths[j]>=i){
				printf(" # ");
			} else
				printf("   ");
		}
		if (j==44) putchar('\n');
	}
}
printf("   + ");
for (i=0;i<45;i++){
	if (nWordLengths[i]>0){
		printf("===");
	}
}
printf("\n     ");
for (i=0;i<45;i++){
	if (nWordLengths[i]>0){
		printf("%2d ",i+1);
	}
}
		
}

/*
useful histogram data table for testing:

printf("Histogram report\nSize : Incidence\n");

for (i=0;i<45;i++){
	if(nWordLengths[i]>0)
	printf("%4d : %3d\n",i+1,nWordLengths[i]);
}
putchar('\n');



*/

