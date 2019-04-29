#include <stdio.h>
#include <string.h>

int main()
{
    char word[256];
    
    printf("give string: ");
    scanf("%s", word);
    
    int counter = 1;
    int sentLength = strlen(word);
    
    while (counter < sentLength) {
        word[counter] = (toupper(word[counter]));
        counter++;
        counter++;
    };
    
    printf("result: %s", word);

    return 0;
}
