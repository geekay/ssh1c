

CC = g++
OBJS = ssh1c.o
INCLUDE = ./



ssh1c.o: ssh1c.h ssh1c.cpp
	$(CC) -I$(INCLUDE) -c ssh1c.cpp

ssh1ctest.o: ssh1ctest.cpp
	$(CC) -I$(INCLUDE) -c ssh1ctest.cpp

1c: $(OBJS) ssh1ctest.o
	$(CC) -o 1ct $(OBJS) ssh1ctest.o

clean:
	rm -f *.o
	rm -f 1ct
