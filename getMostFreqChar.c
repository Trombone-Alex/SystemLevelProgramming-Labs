
/*
 * getMostFreqChar.c
 * Alex Siegel - asiegel11
 * 
 * This program finds the most frequent letter from an input
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	// Checks argument length
	if(argc != 2) {
		printf("Incorrect amount of arguments\n");
		return 0;
	}
		
	// Opens file
	FILE *fp;
	fp = fopen(argv[1], "r");

	//Checks if file could be opened
	if(fp == NULL){
		printf("The file could not be opened");
		exit(0);
	}
	
	// Variables
	int n = 255; //Length
	char buff[n];
	int count[26] = {0}; //Stores count of each number	
	int counter = 0;
	
	// Stores characters in buff
	fgets(buff, n, (FILE*) fp);

	/*
 	 * Loops through each character
	*/
	while(counter < n){
		
		char c = buff[counter];
		if(c<='z' && c>='a')
			count[c-'a']++;
		else if(c<='Z' && c>='A')
			count[c-'A']++;

		counter++; // Increments counter
	}
	
	/*
 	 * Finds the largest number   
 	*/	
	int largest = count[0]; //First number - A
	int index = 0;	//Index of largest number
	int i = 1; // Loop counter	
	
	while(i < 26){
		if(count[i] > largest){
			largest = count[i];
			index = i;
		}
		i++;
	}	
	
	// Prints results
	printf("The most frequent letter is '%c'. It appears %d times\n", index+'a', count[index]); 

	// Writes the stream to the output stream
	fputs(argv[1], fp);
	
	// Close file
	fclose(fp);
	
	return 0;
}

