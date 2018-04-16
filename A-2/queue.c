/****************************************************/
/* Vorlesung Algorithmen und Datenstrukturen        */
/* Matthias Rottmann, 2012/03/27                    */
/*                                                  */
/* Implementierung der Queue-Operationen basierend  */
/* Operationen auf zwei Stacks.                     */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"       /* fuer Datentyp Boolean */
#include "s_datentyp.h"          /* fuer S_datentyp */
#include "stack.h"               /* fuer Konsistenz */
#include "queue.h"


void q_create( Queue *q ) {

  /* ... */
  
}

void q_enqueue( Q_datentyp e, Queue *q ) {
  
  /* ... */
  
}

void q_dequeue( Queue *q, Q_datentyp *e ) {
  
  /* ... */
  
}

Boolean q_empty( Queue q ) {
  
  return TRUE; /* ersetzen */
  
}

void q_write( Queue q ) {
  printf("Queue:\n");
  printf("Erster "); s_write( q.s1 );
  printf("Zweiter "); s_write( q.s2 );
}

