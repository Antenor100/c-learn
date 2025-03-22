CC = gcc
CFLAGS =
SOURCES = main.c helloWorld/hello.c variables/variables.c functions/functions.c
TARGET = main

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

test:
	@echo "\nCleaning up..."
	@make clean
	@echo "Cleaning - Done."

	@echo "\nCompiling..."
	@make
	@echo "Compiling - Done."

	@echo "\nRunning aplication..."
	./$(TARGET)
	@echo "\nRunning - Done."