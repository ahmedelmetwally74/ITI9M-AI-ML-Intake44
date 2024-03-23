#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wordCount=0, letterCount=0;
    char ch;
    /*do while statement: if the inside while didn't happened continue in the loop */
    do{
        ch=getche();
        letterCount++;
        if (ch==32){// Ascii code for space is 32
            wordCount = wordCount+1;
        }
    }while(ch!=13); // Ascii code for enter is 13
    wordCount=wordCount+1;
    printf("\nThe number of words: %d",wordCount);
    printf("\nThe number of letters: %d",letterCount);

    return 0;
}
