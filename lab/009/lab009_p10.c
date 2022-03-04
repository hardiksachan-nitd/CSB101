// Write a program that takes nouns and forms their plurals on the basis of these rules:
// a. If noun ends in “y”, remove the “y” and add “ies”.
// b. If noun ends in “s”, “ch”, or “sh”, add “es”.
// c. In all other cases, just add “s”.

#include <stdio.h>
#define STR_LEN 50

int main() {
    int n;
    printf("Enter the number of test cases: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n");

        char word[STR_LEN];
        printf("Enter the word: ");
        scanf("%s", word);

        if (word[0] == '\0') continue;

        int i = 0;
        while (1)
        {
            if (word[i+1] == '\0') {
                if (word[i] == 'y') {
                    printf("ies\n");
                } else if (word[i] == 's' || (word[i] == 'h' && (word[i-1] == 's' || word [i-1] == 'c'))) {
                    printf("%ces\n", word[i]);
                } else {
                    printf("%cs\n", word[i]);
                }
                break;
            } else {
                printf("%c", word[i]);
            }
            i++;
        }
        
    }
    
}