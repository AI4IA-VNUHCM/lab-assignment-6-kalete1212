/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
     char s[4][20];
     char t[20];
     int i, j;
     int size = 4;
   // sap xep chuoi
   for (i = 1; i < size; i++) {
      for (j = 1; j < size; j++) {
         if (strcmp(str[j - 1], str[j]) > 0) {
            strcpy(t, str[j - 1]);
            strcpy(str[j - 1], str[j]);
            strcpy(str[j], t);
         }
      }
   }
   for (i = 0; i < size; i++) {
      printf(" %s ", str[i]);
      }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
