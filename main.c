#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define Name "Danyil"
    #define Surname "Kulyk"
    #define GroupName "PE-22"
    #define Faculty "RTF"
    #define University "Igor Sikorsky KPI"
    int age;
    int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;
    printf("%s %s , vybachte moyu english, napyshit' znyzu info about you\n", Name, Surname);

    printf("Nomer semestru:");
    scanf("%u",&semestr);

    printf("Vstupnyy bal:");
    scanf("%f",&admissionScore);

    printf("Ocinka za predmet 1:");
    scanf("%d",&grade1);

    printf("Ocinka za predmet 2:");
    scanf("%d",&grade2);

    printf("Ocinka za predmet 3:");
    scanf("%d",&grade3);

    printf("Ocinka za predmet 4:");
    scanf("%d",&grade4);

    printf("Ocinka za predmet 5:");
    scanf("%d",&grade5);

    printf("Your vik:");
    scanf("%u",&age);

    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;

    system("cls");
    printf("***************\n===============");
    printf("%s",University);
    printf("\n%s",Faculty);
    printf("\n%s",GroupName);
    printf("\n---------------");
    printf("\nstudent: %s %s",Name,Surname);
    printf("\nage: %u",age);
    printf("\nsemestr: %u",semestr);
    printf("\n---------------");
    printf("\nadmission score = %.1f",admissionScore);
    printf("\naverage grade = %.2lf",averageGrade);
    printf("\n");
    return 0;

}
