#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *now_tm;
    int hour;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour; 

    printf("Current hour: %d\n", hour);

    if (hour < 12) {
        printf("good morning\n");
    } else if (hour < 18) {
        printf("good afternoon\n");
    } else {
        printf("good evening\n");
    }

    return 0;
}