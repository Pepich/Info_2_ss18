/****************************************************/
/* Vorlesung Algorithmen und Datenstrukturen        */
/* Bruno Lang, 2004/04/21                           */
/*                                                  */
/* Implementierung der Ein- und Ausgabefunktionen   */
/* fuer den Datentyp S_datentyp.                    */
/****************************************************/

#include <stdio.h>
#include "s_datentyp.h"          /* fuer S_datentyp */

/* ------------------------------------------------ */

/* Eingabe eines Elements vom Typ S_datentyp. */

void s_datentyp_eingeben( S_datentyp *e )
{
   printf( "Eintrag eingeben :\n" ) ;
   scanf( "%d", e ) ;                   /* ANPASSEN */
}

/* ------------------------------------------------ */

/* Ausgabe eines Elements vom Typ S_datentyp. */

void s_datentyp_ausgeben( S_datentyp e )
{
   printf( " %d", e ) ;                 /* ANPASSEN */
}

