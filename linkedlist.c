#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = get_int("number: ");
        n->next = list;

        //

        if (list == NULL)
        {
            list = n;
        }


        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                //if at the end of list
                if(ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }

            }


        }

        // time passess

        for (node *ptr = list; ptr != NULL; ptr = ptr->next)
{
    printf("%i\n", ptr->number);
}

    }
}
