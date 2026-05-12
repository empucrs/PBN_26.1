CFLAGS = -Wall -g
PROG   = main
SRCS   = main.c dubfunc.c bibfunc.c
OBJS   = $(SRCS:.c=.o)

all: $(PROG)

$(PROG): $(OBJS)
	gcc $(CFLAGS) -o $@ $^

%.o: %.c
	gcc $(CFLAGS) -c $<

clean:
	-@ rm -f $(PROG) $(OBJS)