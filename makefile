OBJS = main.o IStrategy.o strategya.o strategyb.o context.o
BINARY = Ejecutable
CFLAGS = -g -Wall
LDFLAGS = -lm
 
Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)
 
main.o: main.c IStrategy.h strategya.h strategyb.h context.h
strategya.o:  strategya.c IStrategy.h strategya.h
strategyb.o:  strategyb.c IStrategy.h strategyb.h
context.o: context.h
 
clean:
	rm -f $(BINARY) $(OBJS)