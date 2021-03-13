CC=gcc
COMPILE=$(CC) -g	# -g debuger
CFILES=$(dir \s *.c*)  #ll.c llmain.c
OBJECT=list.o 20210312_2.o   #$(CFILES:.c=.o)
TARGET=list
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)