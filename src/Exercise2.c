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
	for (int i=1 ;i<n; i++)
    {
        char temp = str[i];
 
        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 )
        {
            str[j+1] = str[j];
            j--;
        }
        str[j+1] = temp;
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
