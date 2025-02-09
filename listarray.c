#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

typedef struct node
{
    string phrase;
    struct node *next;
}
node;

#define LIST_SIZE 2

bool unload(node*list);
void Visualizer(node *list);

int main(void)
{
    node *list = NULL;

    // Add items to list
    for (int i = 0; i < LIST_SIZE; i++)
    {
        string phrase = get_string("Enter a new phrase: ");

        // TODO: add phrase to new node in list
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n->phrase = phrase;
        n->next = list;
        list = n;

        // Visualize list after affing a node.
        Visualizer(list);
    }


    // Free all memory used
    if (!unload(list))
    {
        printf("Error freeing the list.\n");
        return 1;

    }

    printf("Freed the list.\n");
    return 0;
}

bool unload(node *list)
{

    // TODO: Free all allocated nodes
    return falese;
}
