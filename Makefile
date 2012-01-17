

CC = g++
OBJS = ssh1c.o
INCLUDE = -I./
#INCLUDE = -I./ -I../ne7ssh-1.3.2/src
LIBS = -lssh


ssh1c.o: ssh1c.h ssh1c.cpp
	$(CC) $(INCLUDE) -c ssh1c.cpp
#	$(CC) $(INCLUDE) -c ssh1c.cpp -lnet7ssh

ssh1ctest.o: ssh1ctest.cpp
	$(CC) $(INCLUDE) -c ssh1ctest.cpp

1c: $(OBJS) ssh1ctest.o
	$(CC) -o 1ct $(OBJS) ssh1ctest.o $(LIBS)

clean:
	rm -f *.o
	rm -f 1ct
