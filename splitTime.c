/*
 * splitTime.c
 * Alex Siegel - asiegel11@student.gsu.edu
 *
 * Splits a time in seconds into HH:MM:SS
 */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(){
        int n,hr,min,sec;
        printf("Enter second:");
        scanf("%d", &n);

        split_time(n, &hr, &min, &sec);
        printf("Converted format: %d hr  %d mins %d secs\n", hr, min, sec);
        return;
}

/*
* Splits the time into the correct format
*/
void split_time(long total_sec, int *hr, int *min, int *sec){
    *sec = total_sec % 60;
    *min = total_sec / 60;
    *hr = *min/60;
    *min = *min % 60; // Resets min if it is higher than 60
}
