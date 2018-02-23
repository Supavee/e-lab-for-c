#include <stdio.h>
void main()
{
    float getgpa, regpa, havegpa;
    int getcre, havecre, allcre;
    printf("Input the previous semester GPA: ");
    scanf("%f", &getgpa);
    printf("Input the previous credits: ");
    scanf("%d", &getcre);
    printf("Input the credits this semester: ");
    scanf("%d", &havecre);
    printf("Input the required GPA: ");
    scanf("%f", &regpa);
    allcre=getcre+havecre;
    havegpa=((regpa*allcre)-(getgpa*getcre))/havecre;
    printf("The GPA this semester should be %.2f", havegpa);
}