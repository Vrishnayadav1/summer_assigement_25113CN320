#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 13\n4. 14\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ3. Which language is used for system programming?\n");
    printf("1. HTML\n2. C\n3. CSS\n4. SQL\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ4. Largest planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\nQ5. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n=========================\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}