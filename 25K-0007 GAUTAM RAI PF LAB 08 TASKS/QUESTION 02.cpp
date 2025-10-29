#include <stdio.h>

int main() {
    char names[5][20];
    int i;

    for(i=0;i<5;i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", names[i]);
    }

    printf("\nList of Students:\n");
    for(i=0;i<5;i++){
        printf("%s\n", names[i]);
    }

    return 0;
}

