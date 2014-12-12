#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cLangCliSampleMain(int argc, char** argv) {
	if(argc == 3) {
		printf("Hello %s %s", argv[1], argv[2]); 
	} else {
		char first[50], second[100];
		
		printf("Enter first name: ");
		scanf("%s", first);
		
		printf("Enter second name: ");
		char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        fgets(second, 80, stdin);

        int i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		printf("Hello %s %s", first, second);
	}
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    cLangCliSampleMain(argc, argv);
    return 0;
}

#endif