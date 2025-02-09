#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct node
{
    string pharse;
    struct node*next;
}
node;

node *table[26];

int hash(string phrase);
bool unload(node *list);
void visualizer(node *list);

int main(void)
{
    // Add items
    for (int i = 0; i < 3; i++)
    {
        string phrase = get_string("Enter a new phrase: ");

        // Find phrase bracket
        int bucket = hash(phrase);
        printf("%s hases to %i\n", phrase, bucket);

    }
}

// TODO: retunr the correct bucket for a given phrase
int hash(string phrase)
{
    // return 0-25,depending on the first char of the phrase
    return toupper(phrase[0]) - 'A';
}

