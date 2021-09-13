exec = duna.exe
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g -Wall -lm -ldl -fPIC -std=c99 #-rdynamic 


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

duna.a: $(objects)
	ar rcs $@ $^

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

win:
	make 
	
install:
	make
	make duna.a
	sudo mkdir -p /usr/local/include/duna
	sudo mkdir -p /usr/local/lib/
	sudo cp -r ./src/include/* /usr/local/include/duna/.
	sudo cp ./duna.a /usr/local/lib/
	sudo cp ./duna.exe /usr/local/bin/duna

clean:
	sudo rm -rf /usr/local/include/duna/
	sudo rm -rf /usr/local/lib/
	sudo rm -rf /usr/local/bin/duna/
	sudo rm duna.a 
	sudo rm duna.exe 
	
	-rm *.out
	-rm *.o
	-rm *.a
	-rm src/*.o

lint:
	clang-tidy src/*.c src/include/*.h
