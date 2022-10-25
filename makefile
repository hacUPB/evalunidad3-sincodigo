OBJS = main.o strategya.o  strategyb.o context.o IStrategy.o
BINARY = Ejecutable
CFLAGS = -g -Wall
LDFLAGS = -lm
 
Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)
 
main.o: main.c  strategya.h  strategyb.h context.h IStrategy.h
strategya.o:  strategya.c strategya.h context.h  IStrategy.h
strategyb.o:  strategyb.c strategyb.h context.h  IStrategy.h
context.o: context.h
IStrategy.o: IStrategy.c IStrategy.h
 
clean:
	rm -f $(BINARY) $(OBJS)