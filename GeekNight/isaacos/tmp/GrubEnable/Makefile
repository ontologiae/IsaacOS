OBJ=kernel 

all: $(OBJ) 

kernel: 
	make -C kern

clean:
	rm -f $(OBJ) *.o bochs.log
	make -C kern clean
