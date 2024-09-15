#include <stdio.h>
#include <time.h>

// Function prototypes
void fill_time(char* buffer);

int main() {
    // Your code here
    char time_buffer[100];
    fill_time(time_buffer);
    printf("Current time: %s\n", time_buffer);
    return 0;
}

void fill_time(char* buffer) {
    // Code to fill the buffer with the current time
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);
    strftime(buffer, 100, "%Y-%m-%d %H:%M:%S %p", tm_info);
}
