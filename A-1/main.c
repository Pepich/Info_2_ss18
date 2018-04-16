/****************************************************/
/* Rahmenprogramm				  . */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"       /* fuer Datentyp Boolean */
#include "l_datentyp.h"          /* fuer L_datentyp */
#include "dcl.h"        /* fuer Listenoperationen */

/* ------------------------------------------------ */

/* Hauptprogramm zum Testen der Listenoperationen */

int main( void )
{
   Liste l;
   dcl_create( &l );
   
  L_datentyp x;
  L_datentyp summe = 0;
  do {
    l_datentyp_eingeben(&x);
    if (x != 0)
      dcl_insert(x, &l);
    summe += x;
  } while (x != 0);
  printf("Summe:");
  l_datentyp_ausgeben(summe);
  
  /* Lösung als Schleife */
  printf("\nListe rueckwaerts:\n");
  while (l.pos_vorg != NULL)
  {
    dcl_retract(&l);
    l_datentyp_ausgeben(l.pos->l_daten);
  }

  printf("\nListe vorwärts:\n");
  while(!dcl_out_of_list(l))
  {
    l_datentyp_ausgeben(l.pos->l_daten);
    dcl_advance(&l);
  }

  printf("\n\n");
  return 0 ;
}