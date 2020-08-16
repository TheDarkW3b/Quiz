#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // variables
    int score;
    char name[10], q1[10], q2[10], q3[10], q4[10]; // 10 Character Would Be Fine

    printf("Enter Your Name :- ");
    gets(name);

    printf("\nWelcome %s To DarkWeb Quiz", name);

    printf("\n1 - What I Like Most Python or Go :- ");
    scanf("%s", q1);

    // Enter Answer In LowerCase, C dont have inbuilt lower function and i am not loop through char and convert them to lower, as its for beginners
    if (strcmp(q1, "python") == 0)
    {
        printf("Correct Answer!");
        score++;
    }
    else
    {
        printf("Incorrect Answer");
    }

    printf("\n2 - What Will I Choose In Study and Programming :- ");
    scanf("%s", q2);

    if (strcmp(q2, "study") == 0)
    {
        printf("Correct Answer!");
        score++;
    }
    else
    {
        printf("Incorrect Answer");
    }

    printf("\n3 - Which Color I Like The Most Red or Blue :- ");
    scanf("%s", q3);

    if (strcmp(q3, "red") == 0)
    {
        printf("Correct Answer!");
        score++;
    }
    else
    {
        printf("Incorrect Answer");
    }

    printf("\n4 - What Will I Choose in Iphone and Android :- ");
    scanf("%s", q4);

    if (strcmp(q4, "iphone") == 0)
    {
        printf("Correct Answer!");
        score++;
    }
    else
    {
        printf("Incorrect Answer");
    }

    printf("\nThanks For Playing You Scored %d Points", score);
    return 0;
}