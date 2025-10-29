#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rows, cols;
    int i, j;
    int maxEmpty = 0, totalEmpty = 0, rowNum = 0;

    srand(time(0));

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int hall[rows][cols];

    printf("\nSeating Arrangement (0=Empty, 1=Occupied):\n");
    for(i=0;i<rows;i++){
        int rowEmpty = 0;
        for(j=0;j<cols;j++){
            hall[i][j] = rand()%2;
            printf("%d ", hall[i][j]);
            if(hall[i][j]==0) rowEmpty++;
        }
        printf("\n");
        totalEmpty += rowEmpty;
        if(rowEmpty > maxEmpty){
            maxEmpty = rowEmpty;
            rowNum = i+1;
        }
    }

    printf("\nTotal Available Seats: %d\n", totalEmpty);
    printf("Row with Most Empty Seats: Row %d (%d empty seats)\n", rowNum, maxEmpty);

    return 0;
}

