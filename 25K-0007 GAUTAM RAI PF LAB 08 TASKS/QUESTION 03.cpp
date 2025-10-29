#include <stdio.h>

int main() {
    char words[3][10];
    int i, j, count = 0;

    printf("Enter 3 words:\n");
    for(i=0;i<3;i++){
        scanf("%s", words[i]);
    }

    for(i=0;i<3;i++){
        for(j=0; words[i][j]!='\0'; j++){
            char ch = words[i][j];
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                count++;
            }
        }
    }

    printf("\nTotal vowels = %d\n", count);

    return 0;
}

