#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n);

int main() {
    char s[] = {'H','E','L','L','O'};
    int n = sizeof(s) / sizeof(s[0]);

    reverseString(s, n);

    for(int i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    return 0;
}
