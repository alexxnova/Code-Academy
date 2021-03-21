# define the C compiler to use
CC=gcc
# define any compile-time flags
COMPILE=$(CC) -g -Wall	# adds debugging information to the executable file; adds debugging information to the executable file
# define the C source files
CFILES=raz.c list_str.c #$(dir \s *.c*)  #ll.c llmain.c
# define the C object files 
OBJECT=raz.o list_str.o  #$(CFILES:.c=.o)   ## Below we are replacing the suffix .c of all words in the macro CFILES with the .o suffix
# define the executable file 
TARGET=RAZ

$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)