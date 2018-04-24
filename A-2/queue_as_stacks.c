#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"       /* fuer Datentyp Boolean */
#include "s_datentyp.h"          /* fuer S_datentyp */
#include "stack.h"        /* fuer Stack-Operationen */

typedef struct {
    Stack *links;
    Stack *rechts;
} Queue;

void create(Queue *q);
void enqueue(S_datentyp e, Queue *q);
void dequeue(Queue *q, S_datentyp *e);
Boolean empty(Queue *q);

void create(Queue *q)
{
    (*q).links = malloc(1 * sizeof(Stack));
    assert((*q).links);
    (*q).rechts = malloc(1 * sizeof(Stack));
    assert((*q).rechts);
    s_create((*q).links);
    s_create((*q).rechts);
}

void enqueue(S_datentyp e, Queue *q)
{
    s_push(e, (*q).rechts);
}

void dequeue(Queue *q, S_datentyp *e)
{
    while(!s_empty(q->rechts))
    {
        S_datentyp temp;
        s_pop(q->rechts, &temp);
        s_push(temp, q->links);
    }
    s_pop(q->links, e);
    while(!s_empty(q->links))
    {
        S_datentyp temp;
        s_pop(q->links, &temp);
        s_push(temp, q->rechts);
    }
}

Boolean empty(Queue *q)
{
    return s_empty(q->rechts);
}
