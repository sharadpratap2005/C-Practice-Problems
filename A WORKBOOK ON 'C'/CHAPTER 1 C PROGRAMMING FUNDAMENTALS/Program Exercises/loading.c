#include <stdio.h>
#include <unistd.h>  // For sleep function (use <windows.h> for Windows)

#define BAR_WIDTH 50  // Width of the progress bar

void print_progress_bar(int progress) {
    // Calculate the number of characters to print in the bar
    int pos = BAR_WIDTH * progress / 100;

    // Print the progress bar
    printf("[");
    for (int i = 0; i < BAR_WIDTH; ++i) {
        if (i < pos)
            printf("=");
        else
            printf(" ");
    }
    printf("] %d%%\r", progress);  // Use \r to overwrite the same line
    fflush(stdout);  // Ensure the output is displayed immediately
}

int main() {
    int progress;

    // Simulate loading process
    for (progress = 0; progress <= 100; progress += 2) {
        print_progress_bar(progress);
        usleep(100000);  // Sleep for 100ms (use Sleep(100) for Windows)
    }

    printf("\nChecking complete!\n");

    return 0;
}
