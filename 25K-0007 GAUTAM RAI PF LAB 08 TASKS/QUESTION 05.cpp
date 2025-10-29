#include <stdio.h>

int main() {
    int marks[5][4];
    int i, j;
    float avg[5];
    int high[4] = {0};

    printf("Enter marks of 5 students in 4 subjects:\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            scanf("%d", &marks[i][j]);
            if(marks[i][j] > high[j])
                high[j] = marks[i][j];
        }
    }

    for(i=0;i<5;i++){
        float sum = 0;
        for(j=0;j<4;j++){
            sum += marks[i][j];
        }
        avg[i] = sum / 4;
    }

    printf("\nAverage marks of each student:\n");
    for(i=0;i<5;i++)
        printf("%.2f ", avg[i]);

    printf("\nHighest marks in each subject:\n");
    for(j=0;j<4;j++)
        printf("%d ", high[j]);

    printf("\n");
    return 0;
}

