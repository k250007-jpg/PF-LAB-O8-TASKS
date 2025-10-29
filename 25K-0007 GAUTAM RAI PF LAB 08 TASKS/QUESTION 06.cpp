#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Transpose
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Reverse each row
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            int temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }

    printf("\nRotated Matrix (90 degree clockwise):\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

