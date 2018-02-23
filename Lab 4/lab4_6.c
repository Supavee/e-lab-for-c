#include <stdio.h>
int main() {
    int sub, i, cre, g;
    char grade;
    float gpa, c, all;
    printf("Enter number of subject(s): ");
    scanf("%d", &sub);
    for (i=1; sub>=i; i++) {
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &cre, &grade);
        if (grade=='A' || grade=='a') {
            g=4.0;
        }
        else if (grade=='B' || grade=='b') {
            g=3.0;
        }
        else if (grade=='C' || grade=='c') {
            g=2.0;
        }
        else if (grade=='D' || grade=='d') {
            g=1.0;
        }
        else if (grade=='F' || grade=='f') {
            g=0.0;
        }
        gpa+=g*cre;
        c+=cre;
    }
    all=gpa/c;
    printf("GPA = %.2f", all);
}