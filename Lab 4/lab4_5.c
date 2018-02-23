#include <stdio.h>
 
int main() {
    int n, horizontal, vertical, up, down, check, alphabet;
    scanf("%d", &n);
    if (n < 1 || n > 26)
        printf("-");
    else {
        horizontal = n*4-3;
        vertical = n*2-1;
        for (up = 0, down = vertical-1; up < vertical; up++, down--) {
            for (check = 0, alphabet = n; check < horizontal; check++) {
                if (up < n && !(check < horizontal/2-up*2 || check > horizontal/2) && check%2 == 0)
                    printf("%c", 97+ --alphabet);
                else if (up < n && !(check < horizontal/2 || check > horizontal/2+up*2) && check%2 == 0)
                    printf("%c", 97+ ++alphabet);
                else if (up >= n && !(check < horizontal/2-down*2 || check > horizontal/2) && check%2 == 0)
                    printf("%c", 97+ --alphabet);
                else if (up >= n && !(check < horizontal/2 || check > horizontal/2+down*2) && check%2 == 0)
                    printf("%c", 97+ ++alphabet);
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}