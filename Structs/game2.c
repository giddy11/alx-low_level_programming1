#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char answers[3][20];
    int score;

} Quizscore;

typedef struct {
    char quiz[40];
    char correct_answer[20];


} Question;

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

int main()
{
    Quizscore player[2];
    Question question[3];

    Quizscore *pt;
    pt = player;

    strcpy(question[0].quiz, "What is bell used for?");
    strcpy(question[0].correct_answer, "HARD");

    strcpy(question[1].quiz, "What is the capital of Nigeria?");
    strcpy(question[1].correct_answer, "ABUJA");

    strcpy(question[2].quiz, "What is the meaning of malloc?");
    strcpy(question[2].correct_answer, "MEMORY");

    printf("Welcome to my page of questions and answers. Lets see how smart you are.\n");

    printf("What is your name?\n");
    scanf("%s", pt->name);
    player[0].score = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", question[i].quiz);
        scanf("%s", pt->answers[i]);
    }

    printf("Here is the outcome of your quiz!!!\n\n");

    for (int j = 0; j < 3; j++)
    {
        char *converted_answer = string_toupper(pt->answers[j]);
        if (converted_answer == NULL)
        {
            // Handle memory allocation failure if needed
            return 1; // Exit the program with an error code
        }

        if (strcmp(converted_answer, question[j].correct_answer) == 0)
        {
            pt->score++;
        }
        else{
            printf("You failed question %d. The right answer is %s\n", j+1, question[j].correct_answer);
        }

        free(converted_answer);
    }

    printf("Your final score is : %d\n\n", player[0].score);

    if (pt->score == 2)
        printf("Congrats you're a excellent");
    else if (pt->score > 1)
        printf("Well done");
    else
        printf("Try again");
    
    return (0);
}