#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    double gpa;
    char major[50];
};

int main()
{
    struct Student mehran;
    mehran.age = 17;
    mehran.gpa = 10.0;
    strcpy(mehran.name, "Mehran");
    strcpy(mehran.major, "Computer Science");

    struct Student mufeez;
    mufeez.age = 21;
    mufeez.gpa = 5.3;
    strcpy(mufeez.name, "Mufeez");
    strcpy(mufeez.major, "Electronics");

    struct Student tabrez;
    tabrez.age = 35;
    tabrez.gpa = 10.0;
    strcpy(tabrez.name, "Tabrez");
    strcpy(tabrez.major, "Privacy Governance");

    char input;

    printf("Whose details do you wish to know?\nM for Mehran\nK for Mufeez\nT for Tabrez\n");
    // Added a space before %c as a best practice
    scanf(" %c", &input);

    switch(input) {
        case 'M' :
            printf("\n%s is %d years old\n", mehran.name, mehran.age);
            printf("He is a Major in %s with a %f GPA\n", mehran.major, mehran.gpa);
            break; // Stops the code here

        case 'K' :
            printf("\n%s is %d years old\n", mufeez.name, mufeez.age);
            printf("He is a Major in %s with a %f GPA\n", mufeez.major, mufeez.gpa);
            break;

        case 'T' :
            printf("\n%s is %d years old\n", tabrez.name, tabrez.age);
            printf("He is a Major in %s with a %f GPA\n", tabrez.major, tabrez.gpa);
            break;
            
        default :
            printf("\nInvalid selection!\n");
            break;
    }

    return 0;
}
