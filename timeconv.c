#include <stdio.h>

int main()
{
    int totalSeconds, hrs, mins, secs;

    printf("Enter total time in seconds: ");
    scanf("%d", &totalSeconds);
    
    hrs = totalSeconds / 3600;
    mins = (totalSeconds / 60) % 60;
    secs = totalSeconds % 60;

    printf("Converted Time = %02d:%02d:%02d (hh:mm:ss)\n", hrs, mins, secs);

    return 0;
}
