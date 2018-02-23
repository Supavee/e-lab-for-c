#include <stdio.h>
#include <ctype.h>
#define TRUE
#define FALSE
int main() {
    char alp;
    scanf("%s", &alp);
    if (isalpha(alp)TRUE) {
        if (isupper(alp)TRUE) {
            printf("Output: upper case");
        }
        else {
            printf("Output: lower case");
        }
    }
    else if (isdigit(alp)TRUE) {
        printf("Output: digit");
    }
    else {
        printf("Output: others");
    }
}