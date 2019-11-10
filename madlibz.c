# include <stdio.h>
# include <stdlib.h>

int main()
    {
        char color[20];
        char plurNoun[20];
        char celeb[20];

        printf("Color: \n");
        scanf("%s", color);

        printf("Roses Are %s\n", color);
        printf("Violets are {plural noun}\n");
        printf("I love {celeb}\n");
        
        return 0;
    }