#include <stdio.h>
#include <string.h>

void count_frequency(char str[]) {
    int count[256] = {0};
    int len = strlen(str);

    // count frequency of each character
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }

    // print the frequency of each character
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("'%c' occurs %d times\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    count_frequency(str);

    return 0;
}
