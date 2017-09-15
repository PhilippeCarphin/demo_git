EXECUTABLE = hello.out

all:$(EXECUTABLE)

test:$(EXECUTABLE)
	./$^

$(EXECUTABLE):main.c
	gcc $< -o $@

clean:
	rm -f *.o
	rm -f $(EXECUTABLE)
