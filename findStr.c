#include <stdio.h>
#include <string.h>

int main(){
	
	//User input
	char input[20];
	char smallest_word[20]="";
	char largest_word[20]="";
	int length = 0;

	/*
 	 *Loops user input until user enters 4 letter word 
 	 */	
	do {
		//Reads user input
		printf("Enter word: ");
		scanf("%s", input);	
		length = strlen(input);
		
		//Sets the first input as the largest and smallest word		
		if(strcmp(smallest_word, "")==0)
                        strcpy(smallest_word, input);

                if(strcmp(largest_word, "")==0)
                        strcpy(largest_word, input);

		//Compares input to smallest and largest word		
		int cmp1 = strcmp(input, smallest_word);
		int cmp2 = strcmp(input, largest_word);
		
		if(cmp1 < 0)
			strcpy(smallest_word, input);
	
		if(cmp2 > 0) {
			strcpy(largest_word, input);
		}			
	
	} while (length != 4);
	
	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	return 0;
}


