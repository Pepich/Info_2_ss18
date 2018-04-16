/****************************************************/
/* Vorlesung Algorithmen und Datenstrukturen        */
/* Matthias Rottmann, 2012/03/27                    */
/*                                                  */
/* Dieses Header-File stellt eine auf zwei Stacks   */
/* basierend implementierte Queue bereit.           */
/****************************************************/

#ifndef QUEUE_H
   #define QUEUE_H
   
   #define Q_datentyp S_datentyp
   #define q_datentyp_eingeben s_datentyp_eingeben
   #define q_datentyp_ausgeben s_datentyp_ausgeben
   

   #include "boolean.h"    /* fuer Datentyp Boolean */
   #include "s_datentyp.h"       /* fuer S_datentyp */
   #include "stack.h"

                   /* Element einer Liste von
                      Eintraegen vom Typ S_datentyp */
   typedef struct queue {
     
      Stack s1;
      Stack s2;
                    /* Queue, bestehend aus zwei Stacks */
   } Queue ;

      /* Deklarationen der Stack-Operationen */

   void q_create( Queue *q ) ;
   void q_enqueue( Q_datentyp e, Queue *q ) ;
   void q_dequeue( Queue *q, Q_datentyp *e ) ;
   Boolean q_empty( Queue q ) ;
   void q_write( Queue q ) ;
#endif