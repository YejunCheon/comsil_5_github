cc = gcc
target = animal.exe
objects = dog.o blackcow.o turtle.o main.o


animal.exe : $(objects)
	$(cc) -o $(target) $(objects)
.PHONY : clean
clean :
	rm  $(objects) $(target)
