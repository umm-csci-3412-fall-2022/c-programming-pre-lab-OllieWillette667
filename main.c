#include <stdio.h>
#include <stdlib.h>

#include "check_whitespace.h"

int main() {
    int NUM_STRINGS = 7;
    // Makes an array of 7 string constants for testing.
    char *strings[] = {
      "Morris",
      "  stuff",
      "Minnesota",
      "nonsense  ",
      "USA",
      "   ",
      "     silliness    "
    };

      

    for (int i = 0; i < NUM_STRINGS; ++i) {
	strings[i] = strip(strings[i]);
       	if (is_clean(strings[i])) {
            printf("The string '%s' is clean.\n", strings[i]);
        } else {
            printf("The string '%s' is NOT clean.\n", strings[i]);
        }
	if (*strings[i] != '\0') free((char*)strings[i]);	
    }

    
    return 0;
}



