#include <stdio.h>
#include <ctype.h>

// QUIZ GAME

int main(){

    char questions[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What plannet has the most moon?"};
    
    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n"};


    char answerkey[100] ={'A', 'B','D'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerkey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n");
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);


    return 0;
}