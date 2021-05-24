CC=gcc
COMPILE=$(CC) -g	# -g debuger
CFILES=$(dir \s *.c*)  #ll.c llmain.c
OBJECT= main.o decodeBarcode.o #$(CFILES:.c=.o)
TARGET=barcodeDecoder
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)