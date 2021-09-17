exec = dip.out
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g -Wall -lm -ldl -fPIC -rdynamic -std=c99


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

dip.a: $(objects)
	ar rcs $@ $^

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install:
	make
	make dip.a
	sudo mkdir -p /usr/local/include/dip
	sudo mkdir -p /usr/local/lib/
	sudo cp -r ./src/include/* /usr/local/include/dip/.
	sudo cp ./dip.a /usr/local/lib/
	sudo cp ./dip.out /usr/local/bin/dip

clean:
	sudo rm -rf /usr/local/include/dip/
	sudo rm -rf /usr/local/lib/
	sudo rm -rf /usr/local/bin/dip/
	sudo rm dip.a 
	sudo rm dip.exe 
	
	-rm *.out
	-rm *.o
	-rm *.a
	-rm src/*.o

lint:
	clang-tidy src/*.c src/include/*.h
