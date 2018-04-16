# --- Konfiguration ------------------------------------------------------------

   # Compiler-Aufruf (maschinenabhaengig)
CC      = gcc

# --- Targets fuer die Benutzung -----------------------------------------------

program: stack_main queue_main

clean:
	\rm *.o

veryclean: clean
	\rm stack_main
	\rm queue_main

# --- Interna ------------------------------------------------------------------

   # Liste der zu erzeugenden und zusammenzubindenden Object-Dateien
OBJECTS = stack_main.o stack.o s_datentyp.o
OBJECTS2 = queue_main.o queue.o stack.o s_datentyp.o

   # Zusammenbinden der Object-Dateien zum ausfuehrbaren Programm

stack_main: $(OBJECTS) makefile
	$(CC) $(OBJECTS) -o stack_main

queue_main: $(OBJECTS2) makefile
	$(CC) $(OBJECTS2) -o queue_main

   # Compilieren der einzelnen Quellcode-Dateien zu Object-Dateien

s_datentyp.o: s_datentyp.c s_datentyp.h makefile
	$(CC) -c s_datentyp.c -o s_datentyp.o

stack.o: stack.c \
         boolean.h s_datentyp.h stack.h \
         makefile
	$(CC) -c stack.c -o stack.o

stack_main.o: stack_main.c \
              boolean.h s_datentyp.h stack.h \
              makefile
	$(CC) -c stack_main.c -o stack_main.o

queue.o: queue.c \
         boolean.h s_datentyp.h queue.h stack.h \
         makefile
	$(CC) -c queue.c -o queue.o

queue_main.o: queue_main.c \
              boolean.h s_datentyp.h queue.h stack.h \
              makefile
	$(CC) -c queue_main.c -o queue_main.o

