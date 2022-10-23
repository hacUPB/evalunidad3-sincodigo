OBJS = main.o strategya.o  strategyb.o context.o
BINARY = Ejecutable
CFLAGS = -g -Wall
LDFLAGS = -lm
 
Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)
 
main.o: main.c  strategya.h  strategyb.h context.h
strategya.o:  strategya.c strategya.h context.h
strategyb.o:  strategyb.c strategyb.h context.h
context.o: context.h
 
clean:
	rm -f $(BINARY) $(OBJS)