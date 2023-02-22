#compiler Flags
all: program

tokenizer.o: tokenizer.h
history.o: history.h

program: program.o history.o tokenizer.o
	cc -o $@ $^ $(CFLAGS)


clean:
	rm -f *.o program
run: program
	./program









