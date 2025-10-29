#include <stdio.h>

int main() {
    int inventory[2][3][4];
    int i, j, k;
    int totalSection[2] = {0};
    int maxShelf = 0, maxQty = 0;

    printf("Enter quantities for 2 sections, 3 shelves, 4 items:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                scanf("%d", &inventory[i][j][k]);
                totalSection[i] += inventory[i][j][k];
            }
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            int shelfSum = 0;
            for(k=0;k<4;k++){
                shelfSum += inventory[i][j][k];
            }
            if(shelfSum > maxQty){
                maxQty = shelfSum;
                maxShelf = j+1;
            }
        }
    }

    printf("\nTotal items in Section 1: %d\n", totalSection[0]);
    printf("Total items in Section 2: %d\n", totalSection[1]);
    printf("Shelf with highest total quantity: Shelf %d (%d items)\n", maxShelf, maxQty);

    return 0;
}

